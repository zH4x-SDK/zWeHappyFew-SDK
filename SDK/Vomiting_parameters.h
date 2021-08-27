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

// Function Vomiting.Vomiting_C.EndVomitingBout
struct UVomiting_C_EndVomitingBout_Params
{
};

// Function Vomiting.Vomiting_C.BeginVomitingBout
struct UVomiting_C_BeginVomitingBout_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vomiting.Vomiting_C.OnTick
struct UVomiting_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vomiting.Vomiting_C.ExecuteUbergraph_Vomiting
struct UVomiting_C_ExecuteUbergraph_Vomiting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
