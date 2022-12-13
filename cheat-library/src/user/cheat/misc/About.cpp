#include "pch-il2cpp.h"
#include "About.h"

#include <cheat/game/util.h>
#include <cheat/events.h>
#include <regex>

namespace cheat::feature 
{
    About::About() : Feature()
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
		ImGui::TextColored(ImColor(0, 102, 255, 255), "RyujinZX, WitchGod, m0nkrel, harlanx, andiabrudan, hellomykami, NctimeAza, FawazTakhji, RedDango");

		ImGui::Text(_TR("Full contributor list:"));
		TextURL(_TR("Github link"), "https://github.com/Papaya-Group/Akebi-GC/graphs/contributors", true, false);

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
}