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

// Function Bleeding.Bleeding_C.ResetInfectionTime
struct UBleeding_C_ResetInfectionTime_Params
{
};

// Function Bleeding.Bleeding_C.TickInfection
struct UBleeding_C_TickInfection_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bleeding.Bleeding_C.OnTick
struct UBleeding_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bleeding.Bleeding_C.OnApply
struct UBleeding_C_OnApply_Params
{
};

// Function Bleeding.Bleeding_C.ExecuteUbergraph_Bleeding
struct UBleeding_C_ExecuteUbergraph_Bleeding_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
