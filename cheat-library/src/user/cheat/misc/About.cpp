#include "pch-il2cpp.h"
#include "About.h"

#include <helpers.h>
#include <cheat/game/EntityManager.h>

namespace cheat::feature 
{
    const FeatureGUIInfo& About::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "", "About", false };
        return info;
    }

    void About::DrawMain()
    {
        std::optional<ImageLoader::GIFData*> gif = ImageLoader::GetGIF("ANIM_AKEBIBOUNCE");
        if (gif)
        {
            if (gif.value()->is_next_frame())
            {
                ImGui::Image((void*)gif.value()->get_next_frame(), ImVec2(ImGui::GetWindowSize().x / 3.5f, ImGui::GetWindowSize().y / 2.5f));
            }
        }

        ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowSize().x);

        ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi github:");
        TextURL("GitHub link", "https://github.com/Papaya-Group/Akebi-GC/", true, false);

		ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi discord:");
		TextURL("Discord invite link", "https://discord.com/invite/MmV8hNZB9S", true, false);

        ImGui::Text("Founder:");
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), "Callow");
        
		ImGui::Text("Main developer and updater:");
		ImGui::SameLine();
		ImGui::TextColored(ImColor(0, 102, 255, 255), "Taiga");

		ImGui::Text("Main contributors:");
		ImGui::TextColored(ImColor(0, 102, 255, 255), "RyujinZX, WitchGod, m0nkrel, Shichiha, harlanx, andiabrudan, hellomykami, FawazTakhji, RedDango");

		ImGui::Text("Full contributor list:");
		TextURL("Github link", "https://github.com/Papaya-Group/Akebi-GC/graphs/contributors", true, false);

        ImGui::PopTextWrapPos();
    }

    About& About::GetInstance()
    {
        static About instance;
        return instance;
    }
}