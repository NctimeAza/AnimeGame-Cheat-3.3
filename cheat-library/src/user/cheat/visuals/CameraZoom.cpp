#include "pch-il2cpp.h"
#include "CameraZoom.h"

#include <helpers.h>
#include <cheat/events.h>

namespace cheat::feature
{
    static void SCameraModuleInitialize_Hook(app::SCameraModuleInitialize* __this, double deltaTime, app::CameraShareData* data, MethodInfo* method);

    CameraZoom::CameraZoom() : Feature(),
        NF(f_Enabled, "Camera Zoom", "Visuals::CameraZoom", false),
        NF(f_FixedZoom, "Fixed Zoom", "Visuals::CameraZoom", 0.0f),
        NF(f_MaxZoom, "Max Zoom", "Visuals::CameraZoom", 2.0f),
        NF(f_MinZoom, "Min Zoom", "Visuals::CameraZoom", 0.75f),
        NF(f_ZoomSpeed, "Zoom Speed", "Visuals::CameraZoom", 1.0f)
    {
        HookManager::install(app::MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, SCameraModuleInitialize_Hook);
    }

    const FeatureGUIInfo& CameraZoom::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "CameraZoom", "Visuals", false };
        return info;
    }

    void CameraZoom::DrawMain()
    {
        ImGui::BeginGroupPanel("Camera Zoom");
        {
            ConfigWidget(f_Enabled, "Enables custom camera zoom settings.");
            if (f_Enabled)
            {
                ConfigWidget("Fixed Zoom", f_FixedZoom, 0.01f, 0.0f, 100.0f, "Set a fixed additional zoom value to the camera.");
                ConfigWidget("Max Zoom", f_MaxZoom, 0.01f, 0.1f, 100.0f, "Set the camera's maximum zoom radius ratio.");
                ConfigWidget("Min Zoom", f_MinZoom, 0.01f, 0.1f, 1.0f, "Set the camera's minimum zoom radius ratio.");
                ConfigWidget("Zoom Speed", f_ZoomSpeed, 0.01f, 0.75f, 1.5f, "Set the camera's zoom speed multiplier.\n"
                    "Note: Sensitive and can be buggy. Best left at 1.");
            }
        }
        ImGui::EndGroupPanel();
    }

    bool CameraZoom::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void CameraZoom::DrawStatus()
    {
        ImGui::Text("Camera Zoom [+%.2f | %.2fx]", f_FixedZoom.value(), f_MaxZoom.value());
    }

    CameraZoom& CameraZoom::GetInstance()
    {
        static CameraZoom instance;
        return instance;
    } 

    void SCameraModuleInitialize_Hook(app::SCameraModuleInitialize* __this, double deltaTime, app::CameraShareData* data, MethodInfo* method)
    {
        CameraZoom& cameraZoom = CameraZoom::GetInstance();
        if (cameraZoom.f_Enabled)
        {
            data->additionalRadius = cameraZoom.f_FixedZoom;
            // counteract in-combat zoom-out effect
            data->_maxRadiusExtraRatio = data->isInCombat && cameraZoom.f_MaxZoom > 1
                ? 1 + (0.75 * log(cameraZoom.f_MaxZoom)) : cameraZoom.f_MaxZoom;
            data->_minCameraRadius = cameraZoom.f_MinZoom;
            data->zoomVelocity *= cameraZoom.f_ZoomSpeed;   
        }
        else
        {
            data->additionalRadius = 0;
            data->_maxRadiusExtraRatio = 1;
            data->_minCameraRadius = 1;
        }
        
        CALL_ORIGIN(SCameraModuleInitialize_Hook, __this, deltaTime, data, method);
    }
}

