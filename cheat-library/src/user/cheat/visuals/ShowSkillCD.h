#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>

namespace cheat::feature
{

	class ShowSkillCD : public Feature
	{
	public:
		config::Field<bool> f_Enabled;

		static ShowSkillCD& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override;
		void DrawStatus() override;

	private:
		ShowSkillCD();

		std::map<uint32_t, uint32_t> m_skillMap;

		static void UpdateSkillMap(app::LCAvatarCombat* lcCombat, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo);

		static void MoleMole_LCAvatarCombat_SetSkillIndex_Hook(app::LCAvatarCombat* __this, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, int32_t index, int32_t priority, MethodInfo* method);
		static void MoleMole_LCAvatarCombat_CheckCDTimer_Hook(app::LCAvatarCombat* __this, app::LCAvatarCombat_LCAvatarCombat_SkillInfo* info, MethodInfo* method);
		static void MonoTeamBtn_Update_Hook(app::MonoTeamBtn* __this, MethodInfo* method);
		static void MonoTeamBtn_set_PCKey_Hook(app::MonoTeamBtn* __this, app::String* value, MethodInfo* method);
	};
}