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

// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.EndVomitingBout
struct UVomiting_ForCrash_Light_C_EndVomitingBout_Params
{
};

// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.BeginVomitingBout
struct UVomiting_ForCrash_Light_C_BeginVomitingBout_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.OnTick
struct UVomiting_ForCrash_Light_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
