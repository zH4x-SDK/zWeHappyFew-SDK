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

// Function Psychotropic.Psychotropic_C.ShouldAutoRemove
struct UPsychotropic_C_ShouldAutoRemove_Params
{
	class UStatusEffectComponent**                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Psychotropic.Psychotropic_C.OnTick
struct UPsychotropic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Psychotropic.Psychotropic_C.OnApply
struct UPsychotropic_C_OnApply_Params
{
};

// Function Psychotropic.Psychotropic_C.OnRemove
struct UPsychotropic_C_OnRemove_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
