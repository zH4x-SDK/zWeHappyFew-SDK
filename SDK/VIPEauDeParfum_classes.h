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

// BlueprintGeneratedClass VIPEauDeParfum.VIPEauDeParfum_C
// 0x0010 (0x0880 - 0x0870)
class AVIPEauDeParfum_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0870(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VIPEauDeParfum.VIPEauDeParfum_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
