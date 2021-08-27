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

// Function Burning.Burning_C.OnTick
struct UBurning_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Burning.Burning_C.OnApply
struct UBurning_C_OnApply_Params
{
};

// Function Burning.Burning_C.OnRemove
struct UBurning_C_OnRemove_Params
{
};

// Function Burning.Burning_C.ExecuteUbergraph_Burning
struct UBurning_C_ExecuteUbergraph_Burning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
