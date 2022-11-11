#pragma once

#include <string>

namespace cheat 
{
	struct FeatureGUIInfo
	{
		std::string name;
		std::string moduleName;
		bool isGroup;
	};

	class Feature
	{
	public:
		// GUI handlers
		virtual const FeatureGUIInfo& GetGUIInfo() const = 0;
		
		virtual void DrawMain() = 0;

		virtual bool NeedStatusDraw() const { return false; };
		virtual void DrawStatus() { };
		
		virtual bool NeedInfoDraw() const { return false; };
		virtual void DrawInfo() { };

		virtual void DrawExternal() { };

	protected:
		virtual ~Feature() = default;
	};
}


