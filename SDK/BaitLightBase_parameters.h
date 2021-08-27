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

// Function BaitLightBase.BaitLightBase_C.SetVisibility
struct ABaitLightBase_C_SetVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaitLightBase.BaitLightBase_C.SetIntensity
struct ABaitLightBase_C_SetIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaitLightBase.BaitLightBase_C.UserConstructionScript
struct ABaitLightBase_C_UserConstructionScript_Params
{
};

// Function BaitLightBase.BaitLightBase_C.ReceiveBeginPlay
struct ABaitLightBase_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
