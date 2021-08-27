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

// Function Yam.Yam_C.UserConstructionScript
struct AYam_C_UserConstructionScript_Params
{
};

// Function Yam.Yam_C.ReceiveOnCompleteUse
struct AYam_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yam.Yam_C.ExecuteUbergraph_Yam
struct AYam_C_ExecuteUbergraph_Yam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
