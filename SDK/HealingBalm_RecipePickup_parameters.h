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

// Function HealingBalm_RecipePickup.HealingBalm_RecipePickup_C.UserConstructionScript
struct AHealingBalm_RecipePickup_C_UserConstructionScript_Params
{
};

// Function HealingBalm_RecipePickup.HealingBalm_RecipePickup_C.OnCompleteUse__DelegateSignature
struct AHealingBalm_RecipePickup_C_OnCompleteUse__DelegateSignature_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
