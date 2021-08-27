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

// Function Phlash_v2.Phlash_v2_C.ReceiveCanBeUsed
struct APhlash_v2_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phlash_v2.Phlash_v2_C.UserConstructionScript
struct APhlash_v2_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
