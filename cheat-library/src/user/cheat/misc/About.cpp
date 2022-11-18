#include "pch-il2cpp.h"
#include "About.h"

#include <helpers.h>
#include <cheat/game/EntityManager.h>

namespace cheat::feature 
{
    const FeatureGUIInfo& About::GetGUIInfo() const
    {
        TRANSLATED_MODULE_INFO("About");
        return info;
    }

    void About::DrawMain()
    {
        ImGui::TextColored(ImColor(28, 202, 214, 255), _TR("Akebi github:"));
        TextURL(_TR("Github link"), "https://github.com/Papaya-Group/Akebi-GC", true, false);

		ImGui::TextColored(ImColor(28, 202, 214, 255), _TR("Akebi discord:"));
		TextURL(_TR("Discord invite link"), "https://discord.com/invite/MmV8hNZB9S", true, false);

        ImGui::Text(_TR("Founder:"));
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), "Callow");
        
		ImGui::Text(_TR("Main developer and updater:"));
		ImGui::SameLine();
		ImGui::TextColored(ImColor(0, 102, 255, 255), "Taiga");

		ImGui::Text(_TR("Main contributors:"));
		ImGui::TextColored(ImColor(0, 102, 255, 255), "RyujinZX, WitchGod, m0nkrel, Shichiha, harlanx, andiabrudan, hellomykami");

		ImGui::Text(_TR("Full contributor list:"));
		TextURL(_TR("Github link"), "https://github.com/Akebi-Group/Papaya-GC/graphs/contributors", true, false);
    }

    About& About::GetInstance()
    {
        static About instance;
        return instance;
    }
}