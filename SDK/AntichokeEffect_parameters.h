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

// Function AntichokeEffect.AntichokeEffect_C.OnTick
struct UAntichokeEffect_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AntichokeEffect.AntichokeEffect_C.OnApply
struct UAntichokeEffect_C_OnApply_Params
{
};

// Function AntichokeEffect.AntichokeEffect_C.ExecuteUbergraph_AntichokeEffect
struct UAntichokeEffect_C_ExecuteUbergraph_AntichokeEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
