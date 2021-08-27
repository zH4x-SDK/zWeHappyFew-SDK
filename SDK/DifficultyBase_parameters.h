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

// Function DifficultyBase.DifficultyBase_C.ShouldAutoRemove_1
struct UDifficultyBase_C_ShouldAutoRemove_1_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DifficultyBase.DifficultyBase_C.ShouldAutoApply_1
struct UDifficultyBase_C_ShouldAutoApply_1_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DifficultyBase.DifficultyBase_C.SetAutoNatives
struct UDifficultyBase_C_SetAutoNatives_Params
{
};

// Function DifficultyBase.DifficultyBase_C.ExecuteUbergraph_DifficultyBase
struct UDifficultyBase_C_ExecuteUbergraph_DifficultyBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
