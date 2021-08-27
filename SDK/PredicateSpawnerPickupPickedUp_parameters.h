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

// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveTest
struct UPredicateSpawnerPickupPickedUp_C_ReceiveTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveBind
struct UPredicateSpawnerPickupPickedUp_C_ReceiveBind_Params
{
};

// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveUnbind
struct UPredicateSpawnerPickupPickedUp_C_ReceiveUnbind_Params
{
};

// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.OnPickedUp
struct UPredicateSpawnerPickupPickedUp_C_OnPickedUp_Params
{
	class APawn*                                       PickupSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
