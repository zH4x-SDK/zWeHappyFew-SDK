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

// BlueprintGeneratedClass Hazard_Bees.Hazard_Bees_C
// 0x011D (0x054D - 0x0430)
class AHazard_Bees_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x11D];                                     // 0x0430(0x011D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Bees.Hazard_Bees_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
