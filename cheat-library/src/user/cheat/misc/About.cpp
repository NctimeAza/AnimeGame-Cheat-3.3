#include "pch-il2cpp.h"
#include "About.h"

#include <helpers.h>
#include <cheat/game/EntityManager.h>
#include <cheat/events.h>
#include <regex>

int timer = 0;

namespace cheat::feature 
{
    About::About() : Feature()
    {
        std::string syslang = setlocale(LC_ALL, "");
        if (std::regex_search(syslang, std::regex("^Arabic_")))
            lang = "ArabicW";
        else if (std::regex_search(syslang, std::regex("^Chinese (Simplified)_")))
            lang = "ZHCN";
        else if (std::regex_search(syslang, std::regex("^Chinese (Traditional)_")))
            lang = "ZHTW";
        else if (std::regex_search(syslang, std::regex("^Filipino_")))
            lang = "FilipinoW";
        else if (std::regex_search(syslang, std::regex("^Japanese_")))
            lang = "JapaneseW";
        else if (std::regex_search(syslang, std::regex("^Malay_")))
            lang = "MalayW";
        else if (std::regex_search(syslang, std::regex("^Portuguese_")))
            lang = "PortugueseW";
        else if (std::regex_search(syslang, std::regex("^Russian_")))
            lang = "RussianW";
        else if (std::regex_search(syslang, std::regex("^Vietnamese_")))
            lang = "VietnameseW";
		else
			lang = "EnglishW";
        events::GameUpdateEvent += MY_METHOD_HANDLER(About::OnGameUpdate);
    }
    const FeatureGUIInfo& About::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "", "About", false };
        return info;
    }

    void About::DrawMain()
    {
        ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi github:");
        TextURL("Github link", "https://github.com/Papaya-Group/Akebi-GC", true, false);

		ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi discord:");
		TextURL("Discord invite link", "https://discord.com/invite/MmV8hNZB9S", true, false);

        ImGui::Text("Founder:");
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), "Callow");
        
		ImGui::Text("Main developer and updater:");
		ImGui::SameLine();
		ImGui::TextColored(ImColor(0, 102, 255, 255), "Taiga");

		ImGui::Text("Main contributors:");
		ImGui::TextColored(ImColor(0, 102, 255, 255), "RyujinZX, WitchGod, m0nkrel, Shichiha, harlanx, andiabrudan, hellomykami");

		ImGui::Text("Full contributor list:");
		TextURL("Github link", "https://github.com/Akebi-Group/Papaya-GC/graphs/contributors", true, false);
    }

    void About::OnGameUpdate()
    {
        if (show)
        {
            width = app::Screen_get_width(nullptr);
            height = app::Screen_get_height(nullptr);
            timer++;
            if (timer > 2100)
               show = false;
        }
    }

    About& About::GetInstance()
    {
        static About instance;
        return instance;
    }
}