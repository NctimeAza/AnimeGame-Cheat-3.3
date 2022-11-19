#include "pch-il2cpp.h"
#include "ShowSkillCD.h"

#include <helpers.h>

namespace cheat::feature
{
	ShowSkillCD::ShowSkillCD() : Feature(),
		NF(f_Enabled, "Visuals::ShowSkillCD", false)
	{
		HookManager::install(app::MoleMole_LCAvatarCombat_SetSkillIndex, ShowSkillCD::MoleMole_LCAvatarCombat_SetSkillIndex_Hook);
		HookManager::install(app::MoleMole_LCAvatarCombat_CheckCDTimer, ShowSkillCD::MoleMole_LCAvatarCombat_CheckCDTimer_Hook);
		HookManager::install(app::MonoTeamBtn_Update, ShowSkillCD::MonoTeamBtn_Update_Hook);
		HookManager::install(app::MonoTeamBtn_set_PCKey, ShowSkillCD::MonoTeamBtn_set_PCKey_Hook);
	}

	const FeatureGUIInfo& ShowSkillCD::GetGUIInfo() const
	{
		TRANSLATED_MODULE_INFO("Visuals");
		return info;
	}

	void ShowSkillCD::DrawMain()
	{
		ConfigWidget(_TR("Show Skill Cooldowns"), f_Enabled, _TR("Show skill cooldowns and charges besides team buttons."));
	}

	bool ShowSkillCD::NeedStatusDraw() const
	{
		return f_Enabled;
	}

	void ShowSkillCD::DrawStatus()
	{
		ImGui::Text(_TR("Show Skill CDs"));
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

	void ShowSkillCD::MonoTeamBtn_set_PCKey_Hook(app::MonoTeamBtn* __this, app::String* value, MethodInfo* method)
	{
		auto& showSkillCD = GetInstance();
		if (showSkillCD.f_Enabled)
		{
			if (value == nullptr)
			{
				app::MonoTeamBtn_set_showPCKey(__this, true, nullptr);
				auto lcCombat = __this->fields._lcCombat;
				auto skillDepot = lcCombat->fields._skillDepotConfig->fields;
				uint32_t configID = app::MoleMole_SimpleSafeUInt32_get_Value(skillDepot.idRawNum, nullptr);
				uint32_t skillID = showSkillCD.m_skillMap[configID];

				float cd = app::MoleMole_LCAvatarCombat_GetCurrentSkillCD(lcCombat, skillID, nullptr);
				int32_t maxCharge = app::MoleMole_LCAvatarCombat_GetSkillMaxChargesCount(lcCombat, skillID, nullptr);
				int32_t currCharge = app::MoleMole_LCAvatarCombat_GetSkillCurrentChargesCount(lcCombat, skillID, nullptr);

				std::string cdStr = cd <= 0 ? "Ready" : std::format("{:.1f}s", cd);
				std::string finalStr = std::format("{}\n{:3}/{:<3}", cdStr, currCharge, maxCharge);
				value = string_to_il2cppi(finalStr);
			}
			else
				app::MonoTeamBtn_set_showPCKey(__this, false, nullptr);
		}

		CALL_ORIGIN(MonoTeamBtn_set_PCKey_Hook, __this, value, method);
	}
}