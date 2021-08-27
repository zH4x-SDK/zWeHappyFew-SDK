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

// Function Rock.Rock_C.UserConstructionScript
struct ARock_C_UserConstructionScript_Params
{
};

// Function Rock.Rock_C.ReceiveOnHitThrow
struct ARock_C_ReceiveOnHitThrow_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rock.Rock_C.ExecuteUbergraph_Rock
struct ARock_C_ExecuteUbergraph_Rock_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
