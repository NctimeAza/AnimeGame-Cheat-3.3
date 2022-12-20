#include "pch-il2cpp.h"
#include "About.h"

#include <cheat/game/util.h>
#include <cheat/events.h>
#include <regex>

namespace cheat::feature 
{
    About::About() : Feature(),
        NF(f_IsFirstTime, "About", true)
    {
        std::string syslang = setlocale(LC_ALL, "");
        if (syslang.starts_with("Arabic_"))
            lang = "ArabicW";
        else if (syslang.starts_with("Chinese (Simplified)_"))
            lang = "ZHCN";
        else if (syslang.starts_with("Chinese (Traditional)_"))
            lang = "ZHTW";
        else if (syslang.starts_with("Filipino_"))
            lang = "FilipinoW";
        else if (syslang.starts_with("Japanese_"))
            lang = "JapaneseW";
        else if (syslang.starts_with("Malay_"))
            lang = "MalayW";
        else if (syslang.starts_with("Portuguese_"))
            lang = "PortugueseW";
        else if (syslang.starts_with("Russian_"))
            lang = "RussianW";
        else if (syslang.starts_with("Vietnamese_"))
            lang = "VietnameseW";
		else
			lang = "EnglishW";

        width = app::Screen_get_width(nullptr);
        height = app::Screen_get_height(nullptr);

        if ((float)width / (float)height > 2) { width_picture = width * 0.305; height_picture = height * 0.13; }          // 21:9
        else if ((float)width / (float)height > 1.6) { width_picture = width * 0.4; height_picture = height * 0.13; }     // 16:9
        else if ((float)width / (float)height > 1.4) { width_picture = width * 0.4; height_picture = height * 0.117; }    // 16:10
        else { width_picture = width * 0.4; height_picture = height * 0.0975; }                                           // 4:3

        timer = util::GetCurrentTimeMillisec();

        events::GameUpdateEvent += MY_METHOD_HANDLER(About::OnGameUpdate);
    }
    const FeatureGUIInfo& About::GetGUIInfo() const
    {
        TRANSLATED_MODULE_INFO("About");
        return info;
    }

    void About::DrawMain()
    {
        std::optional<ImageLoader::GIFData*> gif = ImageLoader::GetGIF("ANIM_AKEBIBOUNCE");
        if (gif)
        {
			gif.value()->render(ImVec2(ImGui::GetWindowSize().x / 3.5f, ImGui::GetWindowSize().y / 2.5f));
        }

        ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowSize().x);

        ImGui::TextColored(ImColor(28, 202, 214, 255), _TR("Akebi github:"));
        TextURL(_TR("GitHub link"), "https://github.com/Papaya-Group/Akebi-GC/", true, false);

		ImGui::TextColored(ImColor(28, 202, 214, 255), _TR("Akebi discord:"));
		TextURL(_TR("Discord invite link"), "https://discord.com/invite/MmV8hNZB9S", true, false);

        ImGui::Text(_TR("Founder:"));
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), "Callow");
        
		ImGui::Text(_TR("Main developer and updater:"));
		ImGui::SameLine();
		ImGui::TextColored(ImColor(0, 102, 255, 255), "Taiga74164");

		ImGui::Text(_TR("Main contributors:"));
		ImGui::TextColored(ImColor(0, 102, 255, 255), "RyujinZX, WitchGod, m0nkrel, harlanx, andiabrudan, hellomykami, NctimeAza, FawazTakhji, RedDango, RainAfterDark");

		ImGui::Text(_TR("Full contributor list:"));
		TextURL(_TR("GitHub link"), "https://github.com/Papaya-Group/Akebi-GC/graphs/contributors", true, false);

        ImGui::Text(_TR("Translators list:"));
        ImGui::Text(_TR("  Russian:"));
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - phenacemide#2436");
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - AMOGUSS#0530");
        ImGui::Text(_TR("  Chinese:"));
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - Word.exe#1377");
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - ShinaKaria#9760");
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - black_zero#3327");
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - (ZH-TW) xTaiwanPingLord#9960");
        ImGui::TextColored(ImColor(0, 102, 255, 255), "    - (Proofread) inkay#5122");
        ImGui::PopTextWrapPos();
    }

    void About::OnGameUpdate()
    {
        if (show)
        {
            if (int(util::GetCurrentTimeMillisec() - timer) > (int)60000)
                show = false;
        }
    }

    About& About::GetInstance()
    {
        static About instance;
        return instance;
    }

    void About::ShowInGameScamWarning()
    {
        if (!game::IsInGame())
            return;
        auto warning = GetScamWarningW();
        game::ShowInGameGeneralDialog(warning.first, warning.second, app::GeneralDialogContext_GeneralDialogType__Enum::SINGLE_BUTTON);
        m_IsScamWarningShowed = true;
        f_IsFirstTime = false;
        return;
    }

    std::pair<std::wstring, std::wstring> About::GetScamWarningW()
    {
        auto lang = app::Application_get_systemLanguage(nullptr);

        switch (lang)
        {
            case app::SystemLanguage__Enum::ChineseSimplified:
                return std::make_pair(L"<i>欺诈警告！</i>", L"这是一个<color=#a80000ff>公开、免费使用</color>的辅助。\n如果你是付费购买的，那么你被骗了。\n<size=20>更多相关消息，请查看菜单中的\"关于\"</size>");
            case app::SystemLanguage__Enum::ChineseTraditional:
                return std::make_pair(L"<i>欺詐警告！</i>", L"這是一個<color=#a80000ff>公開、免費使用</color>的輔助。\n如果你是付費購買的，那麼你被騙了。\n<size=20>更多相關消息，請查看菜單中的\"關於\"</size>");
            case app::SystemLanguage__Enum::Japanese:
                return std::make_pair(L"<i>詐欺警告！</i>", L"これは<color=#a80000ff>公開されており、無料で使用できます</color>。\nお金を払ったら詐欺です。\n<size=20>詳細については、メニューの \"概要\" を確認してください</size>");
            case app::SystemLanguage__Enum::Portuguese:
                return std::make_pair(L"<i>Alerta de fraude!</i>", L"Este é um auxílio <color=#a80000ff>público, de uso gratuito</color>. \nSe você pagou, foi enganado. \n<size=20>Para obter mais informações, consulte \"Sobre\" no menu</size>");
            case app::SystemLanguage__Enum::Russian:
                return std::make_pair(L"<i>Предупреждение о мошенничестве!</i>", L"Это <color=#a80000ff>общедоступное бесплатное</color> пособие. \nЕсли вы заплатили за это, вас обманули. \n<size=20>Дополнительную информацию см. в разделе \"О программе\"</size>.");
            case app::SystemLanguage__Enum::Vietnamese:
                return std::make_pair(L"<i>Cảnh báo lừa đảo!</i>", L"Đây là hỗ trợ <color=#a80000ff>công khai, miễn phí sử dụng</color>. \nNếu bạn đã trả tiền cho nó, bạn đã bị lừa đảo. \n<size=20>Để biết thêm thông tin, vui lòng kiểm tra \"Giới thiệu\" trong menu</size>");
            default:
                return std::make_pair(L"<i>Scammed Warning!</i>", L"This cheat is <color=#a80000ff>Free to ues</color>.\nIf you've bought it, you've been scammed.\n<size=20>For more info check the \"about\" tab</size>");
        }
    }

}