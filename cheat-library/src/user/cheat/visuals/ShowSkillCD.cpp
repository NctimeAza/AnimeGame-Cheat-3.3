#include "pch-il2cpp.h"
#include "ShowSkillCD.h"

#include <helpers.h>

namespace cheat::feature
{
	ShowSkillCD::ShowSkillCD() : Feature(),
		NF(f_Enabled, "Show Skill Cooldowns", "Visuals::ShowSkillCD", false)
	{
		HookManager::install(app::MoleMole_LCAvatarCombat_SetSkillIndex, ShowSkillCD::MoleMole_LCAvatarCombat_SetSkillIndex_Hook);
		HookManager::install(app::MoleMole_LCAvatarCombat_CheckCDTimer, ShowSkillCD::MoleMole_LCAvatarCombat_CheckCDTimer_Hook);

		HookManager::install(app::MonoTeamBtn_Update, ShowSkillCD::MonoTeamBtn_Update_Hook);
		HookManager::install(app::MonoTeamBtn_set_PCKey, ShowSkillCD::MonoTeamBtn_set_PCKey_Hook);
		HookManager::install(app::MonoTeamBtn_get_PS4KeyIcon, ShowSkillCD::MonoTeamBtn_get_PS4KeyIcon_Hook);
	}

	const FeatureGUIInfo& ShowSkillCD::GetGUIInfo() const
	{
		static const FeatureGUIInfo info{ "ShowSkillCD", "Visuals", false };
		return info;
	}

	void ShowSkillCD::DrawMain()
	{
		ConfigWidget(f_Enabled, "Show skill cooldowns and charges besides team buttons.");
	}

	bool ShowSkillCD::NeedStatusDraw() const
	{
		return f_Enabled;
	}

	void ShowSkillCD::DrawStatus()
	{
		ImGui::Text("Show Skill CDs");
	}

	ShowSkillCD& ShowSkillCD::GetInstance()
	{
		static ShowSkillCD instance;
		return instance;
	}

	void ShowSkillCD::UpdateSkillMap(app::LCAvatarCombat* lcCombat, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo)
	{
		auto skillDepot = lcCombat->fields._skillDepotConfig->fields;
		uint32_t configID = app::MoleMole_SimpleSafeUInt32_get_Value(skillDepot.idRawNum, nullptr);
		uint32_t skillID = skillInfo->fields.skillID;

		auto& showSkillCD = GetInstance();
		showSkillCD.m_skillMap[configID] = skillID;
	}

	void ShowSkillCD::MoleMole_LCAvatarCombat_SetSkillIndex_Hook(app::LCAvatarCombat* __this, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, int32_t index, int32_t priority, MethodInfo* method)
	{
		CALL_ORIGIN(MoleMole_LCAvatarCombat_SetSkillIndex_Hook, __this, skillInfo, index, priority, method);

		if (index == 1) // elemental skill index
			UpdateSkillMap(__this, skillInfo);
	}

	void ShowSkillCD::MoleMole_LCAvatarCombat_CheckCDTimer_Hook(app::LCAvatarCombat* __this, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* info, MethodInfo* method)
	{
		CALL_ORIGIN(MoleMole_LCAvatarCombat_CheckCDTimer_Hook, __this, info, method);

		if (info->fields.skillIndex == 1) // elemental skill index
			UpdateSkillMap(__this, info);
	}

	void ShowSkillCD::MonoTeamBtn_Update_Hook(app::MonoTeamBtn* __this, MethodInfo* method)
	{
		auto& showSkillCD = GetInstance();
		if (showSkillCD.f_Enabled)
			app::MonoTeamBtn_set_PCKey(__this, nullptr, nullptr);

		CALL_ORIGIN(MonoTeamBtn_Update_Hook, __this, method);
	}

	// we're hooking this as it can get called outside of the update function
	void ShowSkillCD::MonoTeamBtn_set_PCKey_Hook(app::MonoTeamBtn* __this, app::String* value, MethodInfo* method)
	{
		auto& showSkillCD = GetInstance();
		if (showSkillCD.f_Enabled)
		{
			if (value == nullptr)
			{
				auto* lcCombat = __this->fields._lcCombat;
				auto skillDepot = lcCombat->fields._skillDepotConfig->fields;
				uint32_t configID = app::MoleMole_SimpleSafeUInt32_get_Value(skillDepot.idRawNum, nullptr);
				uint32_t skillID = showSkillCD.m_skillMap[configID];

				float cd = app::MoleMole_LCAvatarCombat_GetCurrentSkillCD(lcCombat, skillID, nullptr);
				int32_t maxCharge = app::MoleMole_LCAvatarCombat_GetSkillMaxChargesCount(lcCombat, skillID, nullptr);
				int32_t currCharge = app::MoleMole_LCAvatarCombat_GetSkillCurrentChargesCount(lcCombat, skillID, nullptr);

				bool ready = cd <= 0;
				std::string color = ready ? "green" : currCharge > 0 ? "olive" : "maroon";
				std::string cdStr = ready ? "Ready" : std::format("{:.1f}s", cd);
				std::string finalStr = std::format("<color={}>{}\n{:3}/{:<3}</color>", color, cdStr, currCharge, maxCharge);

				value = string_to_il2cppi(finalStr);
				app::MonoTeamBtn_set_showPCKey(__this, true, nullptr);
			}
			else
				// set_PCKey gets called one more time after the final update tick of the selected (disabled) team button,
				// so we prevent it from showing since it won't get update ticks while disabled. (also the shown CD would be redundant)
				app::MonoTeamBtn_set_showPCKey(__this, false, nullptr);
		}

		CALL_ORIGIN(MonoTeamBtn_set_PCKey_Hook, __this, value, method);
	}

	// called when using a controller, will stop getting called once call origin is returned
	/*MonoControlElement*/ void* ShowSkillCD::MonoTeamBtn_get_PS4KeyIcon_Hook(app::MonoTeamBtn* __this, MethodInfo* method)
	{
		// for some reason we need to call this here when the player is using a controller to get the same disabling behavior above
		app::MonoTeamBtn_set_PCKey(__this, string_to_il2cppi(" "), nullptr);
		return nullptr; // this is the simplest solution atm

		/*Ame: I'm leaving this alternative way of disabling the PS4 key icon here, in case it can be reimplemented in the future.
		The problem is that there's currently no way to determine if the user is using a keyboard or a controller, which we need-
		in order to properly implement the logic of enabling and disabling the PS4 key, as the UI clashes with the PC key.

		auto* ps4Icon = app::MonoTeamBtn_get_PS4KeyIcon(__this, nullptr);
		auto* behaviour = reinterpret_cast<app::Behaviour*>(ps4Icon);
		auto* component = reinterpret_cast<app::Component_1*>(behaviour);
		auto* gameObject = app::Component_1_get_gameObject(component, nullptr);
		app::GameObject_set_active(gameObject, !showSkillCD.f_Enabled, nullptr);*/
	}
}