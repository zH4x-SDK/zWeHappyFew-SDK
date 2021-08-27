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

// Function SB_PituitaryExtractor.SB_PituitaryExtractor_C.ReceiveCanBeUsed
struct ASB_PituitaryExtractor_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SB_PituitaryExtractor.SB_PituitaryExtractor_C.UserConstructionScript
struct ASB_PituitaryExtractor_C_UserConstructionScript_Params
{
};

// Function SB_PituitaryExtractor.SB_PituitaryExtractor_C.ReceiveOnCompleteUse
struct ASB_PituitaryExtractor_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SB_PituitaryExtractor.SB_PituitaryExtractor_C.ReceiveTick
struct ASB_PituitaryExtractor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
