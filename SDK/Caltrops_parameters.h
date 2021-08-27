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

// Function Caltrops.Caltrops_C.UserConstructionScript
struct ACaltrops_C_UserConstructionScript_Params
{
};

// Function Caltrops.Caltrops_C.ReceiveOnHitThrow
struct ACaltrops_C_ReceiveOnHitThrow_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Caltrops.Caltrops_C.ReceiveDestroyed
struct ACaltrops_C_ReceiveDestroyed_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
