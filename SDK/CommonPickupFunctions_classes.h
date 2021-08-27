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

// BlueprintGeneratedClass CommonPickupFunctions.CommonPickupFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UCommonPickupFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommonPickupFunctions.CommonPickupFunctions_C");
		return ptr;
	}


	void STATIC_CanHealingItemBeUsed(class AActor* HealingTarget, bool CheckHealth, class UObject* __WorldContext, TArray<class UClass*>* StatusEffectsToCheck, TEnumAsByte<EUsageDeniedReason>* CanUseItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
