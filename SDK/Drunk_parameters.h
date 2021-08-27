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

// Function Drunk.Drunk_C.ShouldAutoRemove
struct UDrunk_C_ShouldAutoRemove_Params
{
	class UStatusEffectComponent**                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Drunk.Drunk_C.OnApply
struct UDrunk_C_OnApply_Params
{
};

// Function Drunk.Drunk_C.OnRemove
struct UDrunk_C_OnRemove_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
