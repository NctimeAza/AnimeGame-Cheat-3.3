#include "pch-il2cpp.h"
#include "BlockWindSeed.h"

#include <cheat/native.h>
#include <helpers.h>

namespace cheat::feature
{
	static void PlayerModule_OnWindSeedClientNotify_Hook(app::MoleMole_PlayerModule* __this, app::Proto_WindSeedClientNotify* notify, MethodInfo* method);
	static void PlayerModule_OnReciveLuaShell_Hook(app::MoleMole_PlayerModule* __this, app::Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method);

	BlockWindSeed::BlockWindSeed() : Feature(),
		NFEX(f_Enabled, "Block WindSeed", "m_BlockWindSeed", "General", false, false)
	{
		HookManager::install(app::MoleMole_PlayerModule_OnWindSeedClientNotify, PlayerModule_OnWindSeedClientNotify_Hook);
		HookManager::install(app::MoleMole_PlayerModule_OnReciveLuaShell, PlayerModule_OnReciveLuaShell_Hook);
	}

	const FeatureGUIInfo& BlockWindSeed::GetGUIInfo() const
	{
		static const FeatureGUIInfo info{ "Block WindSeed", "Settings", true };
		return info;
	}

	void BlockWindSeed::DrawMain()
	{
		ConfigWidget(f_Enabled,
			"Blocks the WindSeed Packet which can cause RCE from malicious servers.");
	}

	bool BlockWindSeed::NeedStatusDraw() const
	{
		return f_Enabled;
	}

	void BlockWindSeed::DrawStatus()
	{
		ImGui::Text("Block WindSeed");
	}

	BlockWindSeed& BlockWindSeed::GetInstance()
	{
		static BlockWindSeed instance;
		return instance;
	}

	void PlayerModule_OnWindSeedClientNotify_Hook(app::MoleMole_PlayerModule* __this, app::Proto_WindSeedClientNotify* notify, MethodInfo* method)
	{
		BlockWindSeed& BlockWindSeed = BlockWindSeed::GetInstance();
		if (BlockWindSeed.f_Enabled)
		{
			LOG_DEBUG("Server sent a WindSeedClientNotify packet!");
			return;
		}

		CALL_ORIGIN(PlayerModule_OnWindSeedClientNotify_Hook, __this, notify, method);
	}

	void PlayerModule_OnReciveLuaShell_Hook(app::MoleMole_PlayerModule* __this, app::Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method)
	{
		BlockWindSeed& BlockWindSeed = BlockWindSeed::GetInstance();
		if (BlockWindSeed.f_Enabled)
		{
			LOG_DEBUG("Server sent a PlayerLuaShellNotify packet!");
			return;
		}

		CALL_ORIGIN(PlayerModule_OnReciveLuaShell_Hook, __this, playerLuaShellNotify, method);
	}
}
