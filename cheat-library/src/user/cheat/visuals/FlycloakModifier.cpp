#include "pch-il2cpp.h"
#include "FlycloakModifier.h"

#include <cheat/game/filters.h>

namespace cheat::feature
{

    FlycloakModifier::FlycloakModifier() : Feature(),
        NFP(f_Enabled, "FlycloakModifier", "Flycloak Modifier", false),
        NF(f_FlycloakType, "FlycloakModifer", FlycloakModifier::FlycloakType::FirstFlight)
    {}

    FlycloakModifier& FlycloakModifier::GetInstance()
    {
        static FlycloakModifier Instance;
        return Instance;
    }

    const FeatureGUIInfo& FlycloakModifier::GetGUIInfo() const
    {
        TRANSLATED_GROUP_INFO("Flycloak Modifier", "Visuals");
        return info;
    }

    void FlycloakModifier::DrawMain()
    {
        ConfigWidget(_TR("Enabled"), f_Enabled, _TR("Change The Wings. Change character to apply."));
        ConfigWidget(_TR("Flycloak Type"), f_FlycloakType, _TR("Select The Type Of Wings."));
    }

    bool FlycloakModifier::NeedStatusDraw() const
    {
        return f_Enabled->enabled();
    }

    void FlycloakModifier::DrawStatus()
    {
        ImGui::Text(_TR("Flycloak Modifier"));
        ImGui::Text("%s", Translator::RuntimeTranslate(magic_enum::enum_name(f_FlycloakType.value().value()).data()).c_str());
    }

    uint32_t FlycloakModifier::GetFlycloakType()
    {
        return flycloakType.at(f_FlycloakType.value());
    }

}