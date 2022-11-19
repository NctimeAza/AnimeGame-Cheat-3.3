#include "pch-il2cpp.h"
#include "RSAHook.h"
#include <helpers.h>

namespace cheat::feature
{
	static void RSA_FromXmlString_Hook(app::RSA* __this, app::String* xmlString, MethodInfo* method);

	RSAHook::RSAHook() : Feature(),
		NFEX(f_Enabled, "RSA Hook", "m_RSAHook", "General", true, false)
	{
		HookManager::install(app::RSA_FromXmlString, RSA_FromXmlString_Hook);
	}

	const FeatureGUIInfo& RSAHook::GetGUIInfo() const
	{
		static const FeatureGUIInfo info{ "RSA Hook", "Settings", true };
		return info;
	}

	void RSAHook::DrawMain()
	{
		ConfigWidget(f_Enabled, "4214");
	}

	bool RSAHook::NeedStatusDraw() const
	{
		return f_Enabled;
	}

	void RSAHook::DrawStatus()
	{
		ImGui::Text("RSA Patch");
	}

	RSAHook& RSAHook::GetInstance()
	{
		static RSAHook instance;
		return instance;
	}

	static void RSA_FromXmlString_Hook(app::RSA* __this, app::String* xmlString, MethodInfo* method)
	{
		auto key = il2cppi_to_string(xmlString);
		auto newKey = string_to_il2cppi("<RSAKeyValue><Modulus>xbbx2m1feHyrQ7jP+8mtDF/pyYLrJWKWAdEv3wZrOtjOZzeLGPzsmkcgncgoRhX4dT+1itSMR9j9m0/OwsH2UoF6U32LxCOQWQD1AMgIZjAkJeJvFTrtn8fMQ1701CkbaLTVIjRMlTw8kNXvNA/A9UatoiDmi4TFG6mrxTKZpIcTInvPEpkK2A7Qsp1E4skFK8jmysy7uRhMaYHtPTsBvxP0zn3lhKB3W+HTqpneewXWHjCDfL7Nbby91jbz5EKPZXWLuhXIvR1Cu4tiruorwXJxmXaP1HQZonytECNU/UOzP6GNLdq0eFDE4b04Wjp396551G99YiFP2nqHVJ5OMQ==</Modulus><Exponent>AQAB</Exponent></RSAKeyValue>");

		if (key.rfind("<RSAKeyValue><Modulus>15RBm/vARY0axYksImhsTicpv09OYfS4+wCvmE7") != std::string::npos) // 2nd time fn is called
			memcpy(xmlString, newKey, newKey->fields.length * 2);

		CALL_ORIGIN(RSA_FromXmlString_Hook, __this, xmlString, method);
	}

}
