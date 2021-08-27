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

// Function SunshineEffect.SunshineEffect_C.OnGetCustomPercent
struct USunshineEffect_C_OnGetCustomPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SunshineEffect.SunshineEffect_C.ShouldAutoRemove
struct USunshineEffect_C_ShouldAutoRemove_Params
{
	class UStatusEffectComponent**                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SunshineEffect.SunshineEffect_C.OnApply
struct USunshineEffect_C_OnApply_Params
{
};

// Function SunshineEffect.SunshineEffect_C.OnRemove
struct USunshineEffect_C_OnRemove_Params
{
};

// Function SunshineEffect.SunshineEffect_C.ExecuteUbergraph_SunshineEffect
struct USunshineEffect_C_ExecuteUbergraph_SunshineEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
