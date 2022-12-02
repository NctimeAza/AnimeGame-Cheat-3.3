#include "pch-il2cpp.h"
#include "QuestTeleport.h"

#include <cheat/game/util.h>
#include <cheat/teleport/MapTeleport.h>

#include <cheat/GenshinCM.h>

namespace cheat::feature
{
	QuestTeleport::QuestTeleport() : Feature(),
		NFP(f_QuestTP, "Func::Test", "tp", false),
		NF(f_Key, "Func::Test", Hotkey('None'))
	{
		f_Key.value().PressedEvent += MY_METHOD_HANDLER(QuestTeleport::QuestPointTeleport);
	}	

	const FeatureGUIInfo& QuestTeleport::GetGUIInfo() const
	{
		TRANSLATED_GROUP_INFO("Quest Teleport", "Teleport");
		return info;
	}

	void QuestTeleport::DrawMain()
	{
		ConfigWidget(_TR("QuestTP"), f_QuestTP, _TR("Teleport to QuestPoint. \n Press the V key to track the Quest, then press the hotkey to teleport."));
		if (f_QuestTP->enabled()) {
			ConfigWidget(_TR("QuestTp"), f_Key, true);
		}
	}

	bool QuestTeleport::NeedStatusDraw() const
	{
		return f_QuestTP->enabled();
	}

	void QuestTeleport::DrawStatus()
	{
		ImGui::Text(_TR("QuestTeleport"));
	}

	QuestTeleport& QuestTeleport::GetInstance()
	{
		static QuestTeleport instance;
		return instance;
	}

    void QuestTeleport::QuestPointTeleport()
    {
        auto& teleport = MapTeleport::GetInstance();
        auto Layer3 = app::GameObject_Find(string_to_il2cppi("/Canvas/Pages/InLevelMainPage/GrpMainPage/MapInfo/GrpMiniMap/GrpMap/MarkContainer/Layer3"), nullptr);
        auto Transform = app::GameObject_GetComponentByName(Layer3, string_to_il2cppi("Transform"), nullptr);
        auto MarkCount = app::Transform_get_childCount(reinterpret_cast<app::Transform*>(Transform), nullptr);

        for (int i = 0; i < MarkCount; i++) {
            auto MarkComponent = app::Transform_GetChild(reinterpret_cast<app::Transform*>(Transform), i, nullptr);
            if (MarkComponent) {
                auto MarkGameObject = app::Component_1_get_gameObject(reinterpret_cast<app::Component_1*>(MarkComponent), nullptr);

                auto QuestComponent = app::GameObject_GetComponentByName(MarkGameObject, string_to_il2cppi("MonoMapMark"), nullptr);
                if (QuestComponent) {
                    auto questType = app::MoleMole_Config_MarkIconType__Enum::MarkQuest;
                    auto MarkType = app::MonoMapMark_get_iconType(reinterpret_cast<app::MonoMapMark*>(QuestComponent), nullptr);
                    if (MarkType == questType) {
                        auto LevelMapPos = app::MonoMapMark_get_levelMapPos(reinterpret_cast<app::MonoMapMark*>(QuestComponent), nullptr);
                        auto height = (reinterpret_cast<app::MonoMapMark*>(QuestComponent))->fields.height;
                        auto WorldPos = app::Miscs_GenWorldPos(LevelMapPos, nullptr);
                        WorldPos.y = height;
                        if (f_QuestTP && WorldPos.x != 0.0f && WorldPos.y != 0.0f && WorldPos.x <= 20000.0f && WorldPos.y <= 20000.0f && WorldPos.x >= -20000.0f && WorldPos.y >= -20000.0f) {
                            teleport.TeleportTo(WorldPos);
                            LOG_DEBUG("QuestPointPosition: x=%f, y=%f z=%f", WorldPos.x, WorldPos.y, WorldPos.z);
                        }
                        Layer3 = nullptr;
                    }

                }

            }

        }
    }
}