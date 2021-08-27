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

// Function HealingBalm.HealingBalm_C.ReceiveCanBeUsed
struct AHealingBalm_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HealingBalm.HealingBalm_C.UserConstructionScript
struct AHealingBalm_C_UserConstructionScript_Params
{
};

// Function HealingBalm.HealingBalm_C.ReceiveOnCompleteUse
struct AHealingBalm_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealingBalm.HealingBalm_C.ExecuteUbergraph_HealingBalm
struct AHealingBalm_C_ExecuteUbergraph_HealingBalm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
