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

// BlueprintGeneratedClass FogHarvesterComponent.FogHarvesterComponent_C
// 0x0020 (0x07A0 - 0x0780)
class AFogHarvesterComponent_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0780(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FogHarvesterComponent.FogHarvesterComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
