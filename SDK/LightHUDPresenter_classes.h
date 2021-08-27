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

// BlueprintGeneratedClass LightHUDPresenter.LightHUDPresenter_C
// 0x0008 (0x08A8 - 0x08A0)
class ALightHUDPresenter_C : public AGlimpseHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightHUDPresenter.LightHUDPresenter_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
