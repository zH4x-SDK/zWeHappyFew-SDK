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

// Function NightOwlEffect.NightOwlEffect_C.ShouldAutoRemove
struct UNightOwlEffect_C_ShouldAutoRemove_Params
{
	class UStatusEffectComponent**                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NightOwlEffect.NightOwlEffect_C.ShouldAutoApply
struct UNightOwlEffect_C_ShouldAutoApply_Params
{
	class UStatusEffectComponent**                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
