#include "pch-il2cpp.h"
#include "QuestTeleport.h"

#include <cheat/game/util.h>
#include <cheat/teleport/MapTeleport.h>

#include <cheat/GenshinCM.h>

namespace cheat::feature
{
	QuestTeleport::QuestTeleport() : Feature(),
		NFP(f_QuestTP, "QuestTeleport", "QuestTP", false),
		NF(f_Key, "QuestTeleport", Hotkey('V'))
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
		ConfigWidget(_TR("QuestTP"), f_QuestTP, _TR("Teleport to QuestPoint.(Does not work for some Quest Areas) \n Press the V key to track the Quest, then press the hotkey to teleport."));
		if (f_QuestTP->enabled()) {
			ConfigWidget(_TR("QuestTpKey"), f_Key, true);
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
		if (Layer3){	//Prevent that damn RuntimeError
        auto Transform = app::GameObject_GetComponentByName(Layer3, string_to_il2cppi("Transform"), nullptr);	
        auto MarkCount = app::Transform_get_childCount(reinterpret_cast<app::Transform*>(Transform), nullptr);

        for (int i = 0; i < MarkCount; i++) {		//See TextureChanger.cpp Line 89
            auto MarkComponent = app::Transform_GetChild(reinterpret_cast<app::Transform*>(Transform), i, nullptr);	
			if (MarkComponent) {
				auto MarkGameObject = app::Component_1_get_gameObject(reinterpret_cast<app::Component_1*>(MarkComponent), nullptr);
				auto QuestComponent = app::GameObject_GetComponentByName(MarkGameObject, string_to_il2cppi("MonoMapMark"), nullptr);

				if (QuestComponent) {
					auto questType = app::MoleMole_Config_MarkIconType__Enum::MarkQuest;
					auto questTypeCommission = app::MoleMole_Config_MarkIconType__Enum::MarkDailyTask;
					auto questRandom = app::MoleMole_Config_MarkIconType__Enum::MarkRandomTask;
					auto questArea = app::MoleMole_Config_MarkIconType__Enum::MarkQuestArea;
					auto questArea_1 = app::MoleMole_Config_MarkIconType__Enum::MarkDangerousQuestArea;
					auto MarkType = app::MonoMapMark_get_iconType(reinterpret_cast<app::MonoMapMark*>(QuestComponent), nullptr);

					if (MarkType == questType || MarkType == questArea || MarkType == questTypeCommission || MarkType == questRandom || MarkType == questArea_1) {
						auto LevelMapPos = app::MonoMapMark_get_levelMapPos(reinterpret_cast<app::MonoMapMark*>(QuestComponent), nullptr);
						auto height = (reinterpret_cast<app::MonoMapMark*>(QuestComponent))->fields.height;
						auto WorldPos = app::Miscs_GenWorldPos(LevelMapPos, nullptr);
						WorldPos.y = height;
						//Prevent error Pos caused by error when obtaining quest point.(e.g x = 4294967294)
						if (f_QuestTP && WorldPos.x != 0.0f && WorldPos.z != 0.0f && WorldPos.x <= 20000.0f && WorldPos.z <= 20000.0f && WorldPos.x >= -20000.0f && WorldPos.z >= -20000.0f && WorldPos.y<1000.0f && WorldPos.y > -1000.0f) {
							teleport.TeleportTo(WorldPos);
							//LOG_DEBUG("QuestPointPosition: x=%f, y=%f z=%f", WorldPos.x, WorldPos.y, WorldPos.z);
						}
						Layer3 = nullptr;
						}
					}
			   }
		   }
       }
   }
}