#include "pch-il2cpp.h"
#include "GodMode.h"

#include <helpers.h>
#include <cheat/game/EntityManager.h>

namespace cheat::feature 
{
    GodMode::GodMode() : Feature(),
        NF(f_Enabled, "God Mode", "GodMode", false),
        NF(f_Conditional, "Conditional", "GodMode", false),
        NF(f_MinHealth, "Minimum Health", "GodMode", 95.0f),
        NF(f_MissingRate, "Missing Attack Rate", "GodMode", 100.0f)
    {
		HookManager::install(app::VCHumanoidMove_NotifyLandVelocity, VCHumanoidMove_NotifyLandVelocity_Hook);
		HookManager::install(app::Miscs_CheckTargetAttackable, Miscs_CheckTargetAttackable_Hook);
        //HookManager::install(app::MoleMole_LCBaseCombat_FireBeingHitEvent, LCBaseCombat_FireBeingHitEvent_Hook);
        HookManager::install(app::MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp_Hook);
    }

    const FeatureGUIInfo& GodMode::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "God Mode", "Player", false };
        return info;
    }

    void GodMode::DrawMain()
    {
        ConfigWidget("God Mode", f_Enabled, "Enables god mode, i.e. no incoming damage including environmental damage.\n");
        ImGui::Indent();
        ConfigWidget("Conditional", f_Conditional, "Enables god mode when the character's health drops\n"
            "below the specified minimum.\n");
        if (f_Conditional) {
            ConfigWidget("Minimum Health", f_MinHealth, 0.1f, 0.1f, 100.0f, "Minimum health (in %) required before god mode takes effect.");
            ConfigWidget("Missing Attack Rate", f_MissingRate, 0.1f, 0.0f, 100.0f, "Randomly missing enemies attack (in %, 0% = never, 100% = always) such as evade ability in other games.");
        }
            
        ImGui::Unindent();
    }

    bool GodMode::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void GodMode::DrawStatus() 
    {
        ImGui::Text("God Mode");
        if (f_Conditional)
            ImGui::Text("Condition MH%0.2f%% | MR%0.2f%%", f_MinHealth.value(), f_MissingRate.value());
    }

    GodMode& GodMode::GetInstance()
    {
        static GodMode instance;
        return instance;
    }

    bool HealthLowThanMin(game::Entity avatar)
    {
        auto& gm = GodMode::GetInstance();
        auto combat = avatar.combat();
        if (combat == nullptr)
            return false;

        float health = app::MoleMole_SafeFloat_get_Value(avatar.combat()->fields._combatProperty_k__BackingField->fields.HP, nullptr);
        float maxHealth = app::MoleMole_SafeFloat_get_Value(avatar.combat()->fields._combatProperty_k__BackingField->fields.maxHP, nullptr);
        bool isLowThanMin = 100.0f - (100.0f - ((health / maxHealth) * 100.0f)) <= gm.f_MinHealth.value();
        return isLowThanMin;
    }

    bool IsMissingAttack()
    {
        auto& gm = GodMode::GetInstance();
        if (!gm.f_Conditional)
            return true;
        if (gm.f_MissingRate >= 100.0f)
            return true;
        else if (gm.f_MissingRate <= 0.0f)
            return false;
        else 
        {
            float rand = (float)(std::rand() % 1000) / 10.0f;
            return rand <= gm.f_MissingRate.value();
        }
    }

	// Attack immunity (return false when target is avatar, that mean avatar entity isn't attackable)
	bool GodMode::Miscs_CheckTargetAttackable_Hook(app::BaseEntity* attacker, app::BaseEntity* target, MethodInfo* method)
	{
        auto& gm = GodMode::GetInstance();
        auto& manager = game::EntityManager::instance();
        auto entity = manager.entity(target);
        if (gm.f_Enabled && entity->isAvatar())
            if (gm.f_Conditional) { // Calculate only when conditional is enabled
                if (HealthLowThanMin(target) && IsMissingAttack())
                    return false;
            }
            else
                return false;

		return CALL_ORIGIN(Miscs_CheckTargetAttackable_Hook, attacker, target, method);
	}

	// Raised when avatar fall on ground.
    // Sending fall speed, and how many time pass from gain max fall speed (~30m/s).
    // To disable fall damage reset reachMaxDownVelocityTime and decrease fall velocity.
	void GodMode::VCHumanoidMove_NotifyLandVelocity_Hook(app::VCHumanoidMove* __this, app::Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method)
	{
        auto& gm = GodMode::GetInstance();
		if (gm.f_Enabled && -velocity.y > 13)
		{
            if (gm.f_Conditional)
            {
                if (HealthLowThanMin(__this->fields._._._._entity))
                {
                    float randAdd = (float)(std::rand() % 1000) / 1000;
                    velocity.y = -8 - randAdd;
                    reachMaxDownVelocityTime = 0;
                }
            }
            else {
                float randAdd = (float)(std::rand() % 1000) / 1000;
                velocity.y = -8 - randAdd;
                reachMaxDownVelocityTime = 0;
            }
		}
		// LOG_DEBUG("%s, %f", il2cppi_to_string(velocity).c_str(), reachMaxDownVelocityTime);
		CALL_ORIGIN(VCHumanoidMove_NotifyLandVelocity_Hook, __this, velocity, reachMaxDownVelocityTime, method);
	}

    // Analog function for disable attack damage (Thanks to Taiga74164)
    //void GodMode::LCBaseCombat_FireBeingHitEvent_Hook(app::LCBaseCombat* __this, uint32_t attackeeRuntimeID, app::AttackResult* attackResult, MethodInfo* method)
    //{        
    //    auto& gm = GodMode::GetInstance();
    //    auto& manager = game::EntityManager::instance();
    //    if (gm.f_AltGodMode && manager.avatar()->runtimeID() == attackeeRuntimeID)
    //        return;

    //    CALL_ORIGIN(LCBaseCombat_FireBeingHitEvent_Hook, __this, attackeeRuntimeID, attackResult, method);
    //}

    // Environmental damage immunity (Thanks to RELOADED#7236 / GitHub: @34736384)
    bool GodMode::MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp_Hook(app::ActorAbilityPlugin* __this, float delay, app::Object* arg, MethodInfo* method)
    {
        auto& gm = GodMode::GetInstance();

        if (GetInstance().NeedBlockHanlerModifierThinkTimeUp(arg))
            if (gm.f_Conditional) {
                if (HealthLowThanMin(__this->fields._.owner->fields._entity) && IsMissingAttack())
                    return false;
            }
            else 
                return false;

        return CALL_ORIGIN(MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp_Hook, __this, delay, arg, method);
    }

	bool GodMode::NeedBlockHanlerModifierThinkTimeUp(app::Object* arg)
	{
        if (!f_Enabled)
            return false;

		auto actorModifier = CastTo<app::MoleMole_ActorModifier>(arg, *app::MoleMole_ActorModifier__TypeInfo);
        if (actorModifier == nullptr)
            return false;

		static std::vector<std::string> modifierBlacklist
		{
			"BlackMud",
			"SERVER_ClimateAbility",
			"ElectricWater",
			"SeiraiThunder",
			"UNIQUE_Monster_",
			"Monster_Shougun",
            "UNIQUE_Life_Point_Search",
            "UNIQUE_DynamicAbility_DeathZone_LoseHp"
		};
        
        std::string modifierName = il2cppi_to_string(actorModifier->fields._config->fields._modifierName);
        //LOG_DEBUG("modifierName = %s", modifierName.c_str());
		for (auto& forbiddenModifierName : modifierBlacklist)
			if (modifierName.find(forbiddenModifierName) != std::string::npos)
				return true;

        return false;
	}
}