#include "pch-il2cpp.h"
#include "RSAPatch.h"
#include <helpers.h>

namespace cheat::feature
{
	static void RSA_FromXmlString_Hook(app::RSA* __this, app::String* xmlString, MethodInfo* method);

	RSAPatch::RSAPatch() : Feature(),
		NFP(f_Enabled, "General::RSAPatch", "RSA Patch", false)
	{
		HookManager::install(app::RSA_FromXmlString, RSA_FromXmlString_Hook);
	}

	const FeatureGUIInfo& RSAPatch::GetGUIInfo() const
	{
		TRANSLATED_MODULE_INFO("Settings");
		return info;
	}

	void RSAPatch::DrawMain()
	{
		ConfigWidget(_TR("RSA Patch"), f_Enabled, _TR("Runtime patcher. Only use it on private servers."));
	}

	bool RSAPatch::NeedStatusDraw() const
	{
		return f_Enabled->enabled();
	}

	void RSAPatch::DrawStatus()
	{
		ImGui::Text(_TR("RSA Patch"));
	}

	RSAPatch& RSAPatch::GetInstance()
	{
		static RSAPatch instance;
		return instance;
	}

	static void RSA_FromXmlString_Hook(app::RSA* __this, app::String* xmlString, MethodInfo* method)
	{
		auto& rsaPatch = RSAPatch::GetInstance();
		auto key = il2cppi_to_string(xmlString);
		auto newKey = string_to_il2cppi("<RSAKeyValue><Modulus>xbbx2m1feHyrQ7jP+8mtDF/pyYLrJWKWAdEv3wZrOtjOZzeLGPzsmkcgncgoRhX4dT+1itSMR9j9m0/OwsH2UoF6U32LxCOQWQD1AMgIZjAkJeJvFTrtn8fMQ1701CkbaLTVIjRMlTw8kNXvNA/A9UatoiDmi4TFG6mrxTKZpIcTInvPEpkK2A7Qsp1E4skFK8jmysy7uRhMaYHtPTsBvxP0zn3lhKB3W+HTqpneewXWHjCDfL7Nbby91jbz5EKPZXWLuhXIvR1Cu4tiruorwXJxmXaP1HQZonytECNU/UOzP6GNLdq0eFDE4b04Wjp396551G99YiFP2nqHVJ5OMQ==</Modulus><Exponent>AQAB</Exponent></RSAKeyValue>");

		if (rsaPatch.f_Enabled->enabled() && (key.rfind("<RSAKeyValue><Modulus>15RBm/vARY0axYksImhsTicpv09OYfS4+wCvmE7") != std::string::npos || key.rfind("<RSAKeyValue><Modulus>lCwdYrveozYYcKOSz4cjBfORvd6POZSxsM9JybW") != std::string::npos)) // 2nd time fn is called
			memcpy(xmlString, newKey, newKey->fields.length * 2);

		CALL_ORIGIN(RSA_FromXmlString_Hook, __this, xmlString, method);
	}

}