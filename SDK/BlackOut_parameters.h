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

// Function BlackOut.BlackOut_C.EndVomitingBout
struct UBlackOut_C_EndVomitingBout_Params
{
};

// Function BlackOut.BlackOut_C.BeginVomitingBout
struct UBlackOut_C_BeginVomitingBout_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlackOut.BlackOut_C.OnApply
struct UBlackOut_C_OnApply_Params
{
};

// Function BlackOut.BlackOut_C.OnRemove
struct UBlackOut_C_OnRemove_Params
{
};

// Function BlackOut.BlackOut_C.OnTick
struct UBlackOut_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlackOut.BlackOut_C.ExecuteUbergraph_BlackOut
struct UBlackOut_C_ExecuteUbergraph_BlackOut_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
