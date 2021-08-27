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

// BlueprintGeneratedClass FoodPoisoningCure.FoodPoisoningCure_C
// 0x0014 (0x0884 - 0x0870)
class AFoodPoisoningCure_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0870(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FoodPoisoningCure.FoodPoisoningCure_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
