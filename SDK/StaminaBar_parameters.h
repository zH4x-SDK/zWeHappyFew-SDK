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

// Function StaminaBar.StaminaBar_C.Get_PenaltyBar_Percent_1
struct UStaminaBar_C_Get_PenaltyBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StaminaBar.StaminaBar_C.Construct
struct UStaminaBar_C_Construct_Params
{
};

// Function StaminaBar.StaminaBar_C.OnBuffChanged
struct UStaminaBar_C_OnBuffChanged_Params
{
	bool*                                              bInBuffed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StaminaBar.StaminaBar_C.OnDebuffChanged
struct UStaminaBar_C_OnDebuffChanged_Params
{
	bool*                                              bInDebuffed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StaminaBar.StaminaBar_C.ExecuteUbergraph_StaminaBar
struct UStaminaBar_C_ExecuteUbergraph_StaminaBar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
