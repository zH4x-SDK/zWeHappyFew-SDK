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

// Function EmptyBottle.EmptyBottle_C.UserConstructionScript
struct AEmptyBottle_C_UserConstructionScript_Params
{
};

// Function EmptyBottle.EmptyBottle_C.ReceiveOnHitThrow
struct AEmptyBottle_C_ReceiveOnHitThrow_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmptyBottle.EmptyBottle_C.ExecuteUbergraph_EmptyBottle
struct AEmptyBottle_C_ExecuteUbergraph_EmptyBottle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmptyBottle.EmptyBottle_C.ThrownBottle__DelegateSignature
struct AEmptyBottle_C_ThrownBottle__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
