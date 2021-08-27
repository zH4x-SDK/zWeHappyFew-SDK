#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlimpsePlayerCamera.GlimpsePlayerCamera_C
// 0x0000 (0x1A70 - 0x1A70)
class AGlimpsePlayerCamera_C : public AGlimpsePlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlimpsePlayerCamera.GlimpsePlayerCamera_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
