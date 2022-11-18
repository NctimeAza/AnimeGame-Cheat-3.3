#include "pch-il2cpp.h"
#include "SkipEnhanceAnimation.h"

#include "helpers.h"

namespace cheat::feature
{
	static void MoleMole_EquipLevelUpDialogContext_SetupView_Hook(/*MoleMole_EquipLevelUpDialogContext*/ void* __this, MethodInfo* method);
	static void MoleMole_EquipOverviewPageContext_PlayExpAddAnimation_Hook(/*MoleMole_EquipOverviewPageContext*/ void* __this, float startPer, float endPer, /*Action*/ void* callback, MethodInfo* method);
	static void MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow_Hook(/*MoleMole_EquipOverviewPageContext*/ void* __this, /*Action*/ void* refreshViewAction, MethodInfo* method);

	SkipEnhanceAnimation::SkipEnhanceAnimation() : Feature(),
		NF(f_Enabled, "Skip Enhancement Animation", "SkipEnhanceAnimation", false),
		NF(f_ShowLevelUp, "Show Level Up Screen", "SkipEnhanceAnimation", false)
	{
		HookManager::install(app::MoleMole_EquipLevelUpDialogContext_SetupView, MoleMole_EquipLevelUpDialogContext_SetupView_Hook);
		HookManager::install(app::MoleMole_EquipOverviewPageContext_PlayExpAddAnimation, MoleMole_EquipOverviewPageContext_PlayExpAddAnimation_Hook);
		HookManager::install(app::MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow, MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow_Hook);
	}

	const FeatureGUIInfo& SkipEnhanceAnimation::GetGUIInfo() const
	{
		static const FeatureGUIInfo info{"", "World", false };
		return info;
	}

	void SkipEnhanceAnimation::DrawMain()
	{
		ConfigWidget("Skip Enhancement Animation", f_Enabled, "Skip weapon and artifact enhancement animation.");
		if (f_Enabled)
		{
			ImGui::Indent();
			ConfigWidget("Show Level Up Screen", f_ShowLevelUp, "Keep showing the level up screens with information on what was upgraded");
			ImGui::Unindent();
		}
	}

	bool SkipEnhanceAnimation::NeedStatusDraw() const
	{
		return f_Enabled;
	}

	void SkipEnhanceAnimation::DrawStatus()
	{
		ImGui::Text("SkipEnhanceAnimation");
	}

	SkipEnhanceAnimation& SkipEnhanceAnimation::GetInstance()
	{
		static SkipEnhanceAnimation instance;
		return instance;
	}

	void MoleMole_EquipLevelUpDialogContext_SetupView_Hook(/*MoleMole_EquipLevelUpDialogContext*/ void* __this, MethodInfo* method)
	{
		CALL_ORIGIN(MoleMole_EquipLevelUpDialogContext_SetupView_Hook, __this, method);

		auto& skipEnhaceAnimation = SkipEnhanceAnimation::GetInstance();
		if (skipEnhaceAnimation.f_Enabled && !skipEnhaceAnimation.f_ShowLevelUp)
			app::MoleMole_EquipLevelUpDialogContext_ShowReturnedMaterialAndCloseDialog(__this, method);
	}

	void MoleMole_EquipOverviewPageContext_PlayExpAddAnimation_Hook(/*MoleMole_EquipOverviewPageContext*/ void* __this, float startPer, float endPer, /*Action*/ void* callback, MethodInfo* method)
	{
		auto& skipEnhaceAnimation = SkipEnhanceAnimation::GetInstance();
		if (skipEnhaceAnimation.f_Enabled)
			return app::Action_Invoke(callback, method);

		CALL_ORIGIN(MoleMole_EquipOverviewPageContext_PlayExpAddAnimation_Hook, __this, startPer, endPer, callback, method);
	}

	void MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow_Hook(/*MoleMole_EquipOverviewPageContext*/ void* __this, /*Action*/ void* refreshViewAction, MethodInfo* method)
	{
		auto& skipEnhaceAnimation = SkipEnhanceAnimation::GetInstance();
		if (skipEnhaceAnimation.f_Enabled)
			return app::Action_Invoke(refreshViewAction, method);

		CALL_ORIGIN(MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow_Hook, __this, refreshViewAction, method);
	}
}