#include "pch-il2cpp.h"
#include "AutoCook.h"

#include <helpers.h>
#include <cheat/events.h>

namespace cheat::feature
{
    namespace GameObject {
        app::GameObject* Profirency = nullptr;
    }

    namespace Components {
        app::Component_1* Profirency = nullptr;
    }

    static std::map<AutoCook::CookQuality, uint32_t> qualities{ {AutoCook::CookQuality::Suspicious, 1u}, {AutoCook::CookQuality::Normal, 2u}, {AutoCook::CookQuality::Delicious, 3u} };

    static void PlayerModule_RequestPlayerCook(app::MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method);
    static void PlayerModule_OnPlayerCookRsp(app::MoleMole_PlayerModule* __this, app::PlayerCookRsp* rsp, MethodInfo* method);
    static void CookingQtePageContext_UpdateProficiency(app::CookingQtePageContext* __this, MethodInfo* method);

    AutoCook::AutoCook() : Feature(),
        NF(f_Enabled, "Standart Cooking", "AutoCook", false),
        NF(f_FastProficiency, "Fast Proficiency", "AutoCook", false),
        NF(f_CountField, "Count Item", "AutoCook", 1),
        NF(f_QualityField, "Quality", "AutoCook", AutoCook::CookQuality::Normal)
    {
        HookManager::install(app::MoleMole_PlayerModule_RequestPlayerCook, PlayerModule_RequestPlayerCook);
        HookManager::install(app::MoleMole_PlayerModule_OnPlayerCookRsp, PlayerModule_OnPlayerCookRsp);
        HookManager::install(app::MoleMole_CookingQtePageContext_UpdateProficiency, CookingQtePageContext_UpdateProficiency);
    }

    const FeatureGUIInfo& AutoCook::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "AutoCook", "World", true };
        return info;
    }

    void AutoCook::DrawMain()
    {
        ConfigWidget(f_Enabled, "Fast Cooking if the recipe has fast cooking open. \n" \
            "If fast cooking is closed, you in addition need to turn on Fast Proficiency.");
        ConfigWidget(f_FastProficiency, "Quickly prepare an unstudied recipe to the maximum possible.");
        ConfigWidget("Count Item", f_CountField, 1, 1, 100,
            "How much to cook at a time.\n" \
            "(For standard mode only.)");
        ConfigWidget(f_QualityField, "Select the quality of cook result.");
    }

    bool AutoCook::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void AutoCook::DrawStatus()
    {
        if (f_FastProficiency)
            ImGui::Text("Auto Cooking [Proficiency]");
        else
            ImGui::Text("Auto Cooking [Standart, %s]", 
                f_QualityField.value() == AutoCook::CookQuality::Suspicious ? "Suspicious" : f_QualityField.value() == AutoCook::CookQuality::Normal ? "Normal" : "Delicious"
            );
    }

    AutoCook& AutoCook::GetInstance()
    {
        static AutoCook instance;
        return instance;
    }

    // Auto Cooking | RyujinZX#6666

    std::vector<std::string> split(std::string& s, char delimeter)
    {
        std::stringstream ss(s);
        std::string item;
        std::vector<std::string> tokens;
        while (std::getline(ss, item, delimeter))
        {
            tokens.push_back(item);
        }
        return tokens;
    }

    static void PlayerModule_RequestPlayerCook(app::MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method)
    {
        AutoCook& autoCook = AutoCook::GetInstance();
        if (autoCook.f_Enabled || autoCook.f_FastProficiency)
        {
            autoCook.CookFoodMaxNum = app::MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum(recipeId, nullptr);

            // To prevent possible crashes
            if (!qualities.count(autoCook.f_QualityField.value()))
                autoCook.f_QualityField.value() = AutoCook::CookQuality::Normal;

            qteQuality = qualities.find(autoCook.f_QualityField.value())->second;

            if (!autoCook.f_FastProficiency && autoCook.f_Enabled) {
                count = static_cast<uint32_t>(autoCook.f_CountField);
                if (autoCook.f_CountField > autoCook.CookFoodMaxNum)
                    count = static_cast<uint32_t>(autoCook.CookFoodMaxNum);

                return CALL_ORIGIN(PlayerModule_RequestPlayerCook, __this, recipeId, avatarId, qteQuality, count, method);
            }

            if (autoCook.f_Enabled && autoCook.f_FastProficiency) {
                count = 1;

                GameObject::Profirency = app::GameObject_Find(string_to_il2cppi("/Canvas/Pages/CookingPage/GrpCooking/GrpTab/GrpItemTips/CookingItemTip/Viewport/ItemTips_Cooking(Clone)/Content/GrpProficiency/Level/"), nullptr);
                auto RectTransform = app::GameObject_GetComponentByName(GameObject::Profirency, string_to_il2cppi("RectTransform"), nullptr);
                auto TransformChild = app::Transform_GetChild(reinterpret_cast<app::Transform*>(RectTransform), 0, nullptr);
                auto TextComponent = app::Component_1_GetComponent_1(reinterpret_cast<app::Component_1*>(TransformChild), string_to_il2cppi("Text"), nullptr);

                if (TextComponent != nullptr) {
                    auto Text_str = app::Text_get_text(reinterpret_cast<app::Text*>(TextComponent), nullptr);
                    auto ProficiencyStr = il2cppi_to_string(Text_str).erase(0, il2cppi_to_string(Text_str).find_first_of(" ."));
                    std::vector<std::string> FinalProficiency = split(ProficiencyStr, '/');
                    autoCook.CookCount = std::stoi(FinalProficiency[1]) - std::stoi(FinalProficiency[0]);
                }

                if (autoCook.CookCount == 0)
                    autoCook.CookCount = 1;

                if (autoCook.CookCount > autoCook.CookFoodMaxNum)
                    autoCook.CookCount = autoCook.CookFoodMaxNum;

                for (int i = 1; i <= autoCook.CookCount; i++) {
                    CALL_ORIGIN(PlayerModule_RequestPlayerCook, __this, recipeId, avatarId, qteQuality, count, method);
                }
            }
        }
        else {
            return CALL_ORIGIN(PlayerModule_RequestPlayerCook, __this, recipeId, avatarId, qteQuality, count, method);
        }
    }

    static void PlayerModule_OnPlayerCookRsp(app::MoleMole_PlayerModule* __this, app::PlayerCookRsp* rsp, MethodInfo* method) {
        AutoCook& autoCook = AutoCook::GetInstance();
        if (autoCook.f_Enabled || autoCook.f_FastProficiency)
        {
            // To prevent possible crashes
            if (!qualities.count(autoCook.f_QualityField.value()))
                autoCook.f_QualityField.value() = AutoCook::CookQuality::Normal;

            rsp->fields.qteQuality_ = qualities.find(autoCook.f_QualityField.value())->second;
            rsp->fields.cookCount_ = static_cast<uint32_t>(autoCook.f_CountField);
            if (autoCook.f_FastProficiency)
                rsp->fields.cookCount_ = 1;
            // if (rsp->fields.recipeData_ != nullptr)
            //     rsp->fields.recipeData_->fields.proficiency_ = autoCook.CookCount;   
        }

        return CALL_ORIGIN(PlayerModule_OnPlayerCookRsp, __this, rsp, method);
    }

    static void CookingQtePageContext_UpdateProficiency(app::CookingQtePageContext* __this, MethodInfo* method) {
        AutoCook& autoCook = AutoCook::GetInstance();
        if (autoCook.f_Enabled || autoCook.f_FastProficiency)
        {
            __this->fields._pageMono->fields._qteTime = 0;
            __this->fields._pageMono->fields._autoQteTime = 0;
            app::MoleMole_CookingQtePageContext_CloseItemGotPanel(__this, nullptr); // Auto Close Panel
        }
        return CALL_ORIGIN(CookingQtePageContext_UpdateProficiency, __this, method);
    }
}