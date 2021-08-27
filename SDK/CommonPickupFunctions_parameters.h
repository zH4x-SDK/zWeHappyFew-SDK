#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CommonPickupFunctions.CommonPickupFunctions_C.CanHealingItemBeUsed
struct UCommonPickupFunctions_C_CanHealingItemBeUsed_Params
{
	class AActor*                                      HealingTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              StatusEffectsToCheck;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    CanUseItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
