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

// Function DiabetesHealthTick.DiabetesHealthTick_C.ResetInfectionTime
struct UDiabetesHealthTick_C_ResetInfectionTime_Params
{
};

// Function DiabetesHealthTick.DiabetesHealthTick_C.TickInfection
struct UDiabetesHealthTick_C_TickInfection_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiabetesHealthTick.DiabetesHealthTick_C.OnTick
struct UDiabetesHealthTick_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiabetesHealthTick.DiabetesHealthTick_C.OnApply
struct UDiabetesHealthTick_C_OnApply_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
