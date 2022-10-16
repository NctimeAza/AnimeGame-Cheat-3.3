#include "pch-il2cpp.h"
#include "FPSUnlock.h"

#include <helpers.h>
#include <cheat/events.h>

namespace cheat::feature
{
    FPSUnlock::FPSUnlock() : Feature(),
		NF(f_Enabled, "Fps unlock", "Visuals::FPSUnlocker", false),
        NF(f_Fps, "FPS", "Visuals::FPSUnlocker", 240),
        NF(f_Limit, "Limit", "Visuals::FPSUnlocker", false),
        NF(f_FpsLimit, "FPS Limit", "Visuals::FPSUnlocker", 30)
    {
        events::GameUpdateEvent += MY_METHOD_HANDLER(FPSUnlock::OnGameUpdate);
    }

    const FeatureGUIInfo& FPSUnlock::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "FPSUnlock", "Visuals", false };
        return info;
    }

    void FPSUnlock::DrawMain()
    {
        ConfigWidget("", f_Enabled); ImGui::SameLine();
        ConfigWidget(f_Fps, 1, 30, 360, "Unlocks higher framerate.");
        if (f_Enabled)
        {
            ImGui::Indent();
            ConfigWidget("\n", f_Limit);
            ImGui::SameLine();
            ConfigWidget(f_FpsLimit, 1, 5, 360, "Limit framerate while the game window isn't focused.\nThis won't work if the cheat menu is open or if you're in a loading screen.");
            ImGui::Unindent();
        }
    }

    bool FPSUnlock::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void FPSUnlock::DrawStatus()
    {
        ImGui::Text("FPSUnlock [%d]", f_Fps.value());
    }

    FPSUnlock& FPSUnlock::GetInstance()
    {
        static FPSUnlock instance;
        return instance;
    }

    void FPSUnlock::OnGameUpdate()
    {
        static bool _lastEnabledStatus = false;
        static int _originFPS = 30;
        if (_lastEnabledStatus && !f_Enabled)
        {
            app::Application_set_targetFrameRate(_originFPS, nullptr);
        }
        else if (!_lastEnabledStatus && f_Enabled)
        {
            _originFPS = app::Application_get_targetFrameRate(nullptr);
        }
        _lastEnabledStatus = f_Enabled;

        if (f_Enabled)
        {
            auto loadingManager = GET_SINGLETON(MoleMole_LoadingManager);
            if (!app::MoleMole_LoadingManager_IsLoaded(loadingManager, nullptr))
                app::Application_set_targetFrameRate(f_Fps, nullptr);
            else if (!f_Limit)
                app::Application_set_targetFrameRate(f_Fps, nullptr);
            else if (f_Limit)
            {
                if (!app::Application_get_IsFocused(nullptr))
                    app::Application_set_targetFrameRate(f_FpsLimit, nullptr);
                else
                    app::Application_set_targetFrameRate(f_Fps, nullptr);
            }
        }
    }
}