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

// Function JoySickness.JoySickness_C.HandleVomit
struct UJoySickness_C_HandleVomit_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoySickness.JoySickness_C.StartVomit
struct UJoySickness_C_StartVomit_Params
{
};

// Function JoySickness.JoySickness_C.OnTick
struct UJoySickness_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoySickness.JoySickness_C.ExecuteUbergraph_JoySickness
struct UJoySickness_C_ExecuteUbergraph_JoySickness_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
