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

// Function Jerky.Jerky_C.UserConstructionScript
struct AJerky_C_UserConstructionScript_Params
{
};

// Function Jerky.Jerky_C.ReceiveOnCompleteUse
struct AJerky_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jerky.Jerky_C.ExecuteUbergraph_Jerky
struct AJerky_C_ExecuteUbergraph_Jerky_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
