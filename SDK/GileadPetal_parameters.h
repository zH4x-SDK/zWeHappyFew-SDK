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

// Function GileadPetal.GileadPetal_C.UserConstructionScript
struct AGileadPetal_C_UserConstructionScript_Params
{
};

// Function GileadPetal.GileadPetal_C.OnPicked
struct AGileadPetal_C_OnPicked_Params
{
	class APawn*                                       PickupSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GileadPetal.GileadPetal_C.ReceiveBeginPlay
struct AGileadPetal_C_ReceiveBeginPlay_Params
{
};

// Function GileadPetal.GileadPetal_C.ExecuteUbergraph_GileadPetal
struct AGileadPetal_C_ExecuteUbergraph_GileadPetal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
