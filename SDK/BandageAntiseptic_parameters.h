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

// Function BandageAntiseptic.BandageAntiseptic_C.ReceiveCanBeUsed
struct ABandageAntiseptic_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BandageAntiseptic.BandageAntiseptic_C.UserConstructionScript
struct ABandageAntiseptic_C_UserConstructionScript_Params
{
};

// Function BandageAntiseptic.BandageAntiseptic_C.ReceiveOnCompleteUse
struct ABandageAntiseptic_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
