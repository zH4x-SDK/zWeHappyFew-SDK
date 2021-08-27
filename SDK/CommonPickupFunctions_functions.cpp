
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CommonPickupFunctions.CommonPickupFunctions_C.CanHealingItemBeUsed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HealingTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckHealth                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          StatusEffectsToCheck           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUsageDeniedReason> CanUseItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonPickupFunctions_C::STATIC_CanHealingItemBeUsed(class AActor* HealingTarget, bool CheckHealth, class UObject* __WorldContext, TArray<class UClass*>* StatusEffectsToCheck, TEnumAsByte<EUsageDeniedReason>* CanUseItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonPickupFunctions.CommonPickupFunctions_C.CanHealingItemBeUsed");

	UCommonPickupFunctions_C_CanHealingItemBeUsed_Params params;
	params.HealingTarget = HealingTarget;
	params.CheckHealth = CheckHealth;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusEffectsToCheck != nullptr)
		*StatusEffectsToCheck = params.StatusEffectsToCheck;
	if (CanUseItem != nullptr)
		*CanUseItem = params.CanUseItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
