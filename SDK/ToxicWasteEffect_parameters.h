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

// Function ToxicWasteEffect.ToxicWasteEffect_C.OnTick
struct UToxicWasteEffect_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToxicWasteEffect.ToxicWasteEffect_C.OnApply
struct UToxicWasteEffect_C_OnApply_Params
{
};

// Function ToxicWasteEffect.ToxicWasteEffect_C.OnRemove
struct UToxicWasteEffect_C_OnRemove_Params
{
};

// Function ToxicWasteEffect.ToxicWasteEffect_C.OwnerPlayerStartFastTravel
struct UToxicWasteEffect_C_OwnerPlayerStartFastTravel_Params
{
};

// Function ToxicWasteEffect.ToxicWasteEffect_C.ExecuteUbergraph_ToxicWasteEffect
struct UToxicWasteEffect_C_ExecuteUbergraph_ToxicWasteEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
