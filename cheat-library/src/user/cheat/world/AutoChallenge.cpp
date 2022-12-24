#include "pch-il2cpp.h"
#include "AutoChallenge.h"

#include <cheat/events.h>
#include <cheat/game/EntityManager.h>
#include <cheat/game/filters.h>

namespace cheat::feature
{
    const double eps = 1e-8;
#define Equ(a, b) (fabs((a)-(b))<(eps))

	AutoChallenge::AutoChallenge() : Feature(),
		NFP(f_Enabled, "AutoChallenge", "Auto Challenge", false),
		NFP(f_BombDestroy, "AutoChallenge", "Destroy Bomb", false),
		NF(f_Delay, "AutoChallenge", 1000),
		NF(f_Range, "AutoChallenge", 20.f)
	{
		events::GameUpdateEvent += MY_METHOD_HANDLER(AutoChallenge::OnGameUpdate);
	}

	const FeatureGUIInfo& AutoChallenge::GetGUIInfo() const
	{
		TRANSLATED_GROUP_INFO("Auto Challenge", "World");
		return info;
	}

	void AutoChallenge::DrawMain()
	{
		ConfigWidget(_TR("Enabled"), f_Enabled, _TR("Auto collect time challenge item"));
		ImGui::SameLine();
		ConfigWidget(_TR("Destroy Bomb"), f_BombDestroy, _TR("Auto destroy bombbarrel"));
		ImGui::SameLine();
		ImGui::TextColored(ImColor(255, 165, 0, 255), _TR("I haven't tested how high the risk is"));
		ImGui::SetNextItemWidth(200.f);
		ConfigWidget(_TR("Range"), f_Range, 0.1f, 0.f, 300.f, _TR("Collect range."));
		ImGui::SameLine();
		ImGui::SetNextItemWidth(200.f);
		ConfigWidget(_TR("Delay"), f_Delay, 1, 0, 2000, _TR("Collect delay."));
	}

	bool AutoChallenge::NeedStatusDraw() const
	{
		return f_Enabled->enabled();
	}

	void AutoChallenge::DrawStatus()
	{
		ImGui::Text("%s [%.01fm]", _TR("Challenge"), f_Range.value());
	}

	AutoChallenge& AutoChallenge::GetInstance()
	{
		static AutoChallenge instance;
		return instance;
	}

	void AutoChallenge::OnGameUpdate()
	{
		static uint64_t lastTime = 0;
		auto timestamp = app::MoleMole_TimeUtil_get_LocalNowMsTimeStamp(nullptr);

		if (!f_Enabled->enabled() || lastTime + f_Delay > timestamp)
			return;

		auto& entityManager = game::EntityManager::instance();
		auto avatarEntity = entityManager.avatar();

		for (auto& entity : entityManager.entities(game::filters::puzzle::TimeTrialChallengeCollection))
		{
			if (avatarEntity->distance(entity) > f_Range)
				continue;

			auto combat = entity->combat();
			if (combat != nullptr)
			{
				if (entity->name().find("SkillObj_EmptyGadget") != std::string::npos)
				{
					auto combatProp = combat->fields._combatProperty_k__BackingField;
					auto maxHP = app::MoleMole_SafeFloat_get_Value(combatProp->fields.maxHP, nullptr);
					auto level = app::MoleMole_SafeFloat_get_Value(combatProp->fields.level, nullptr);

					// so many entities named "SkillObj_EmptyGadget", but the collection's hp is 99999.f
					// the Rock is lv.84 . the Electric is lv.90 . cant find wind
                    if (Equ(maxHP, 99999.0f) && (Equ(level, 84.0f) || Equ(level, 90.0f)))
					{
						entity->setRelativePosition(avatarEntity->relativePosition());
					}
				}
				else
				{
					entity->setRelativePosition(avatarEntity->relativePosition());
				}
			}
		}
	}
}