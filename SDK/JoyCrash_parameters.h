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

// Function JoyCrash.JoyCrash_C.OnVomit
struct UJoyCrash_C_OnVomit_Params
{
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JoyCrash.JoyCrash_C.ApplyVomiting
struct UJoyCrash_C_ApplyVomiting_Params
{
};

// Function JoyCrash.JoyCrash_C.OnApply
struct UJoyCrash_C_OnApply_Params
{
};

// Function JoyCrash.JoyCrash_C.OnRemove
struct UJoyCrash_C_OnRemove_Params
{
};

// Function JoyCrash.JoyCrash_C.OnTick
struct UJoyCrash_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
