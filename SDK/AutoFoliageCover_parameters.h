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

// Function AutoFoliageCover.AutoFoliageCover_C.ShouldAutoRemove_1
struct UAutoFoliageCover_C_ShouldAutoRemove_1_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoFoliageCover.AutoFoliageCover_C.ShouldAutoApply_1
struct UAutoFoliageCover_C_ShouldAutoApply_1_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
