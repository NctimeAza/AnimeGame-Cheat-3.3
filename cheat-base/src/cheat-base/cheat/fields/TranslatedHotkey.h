#pragma once
#include <cheat-base/cheat/fields/NamedHotkey.h>

namespace cheat
{
	class TranslatedHotkey : public NamedHotkey
	{
	public:
		TranslatedHotkey(const std::string& name, bool enabled);
		TranslatedHotkey(const std::string& name, const Hotkey& hotkey);

		std::string name() final;
	};

}