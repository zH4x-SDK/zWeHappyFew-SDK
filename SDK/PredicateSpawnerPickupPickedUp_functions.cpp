
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveTest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPredicateSpawnerPickupPickedUp_C::ReceiveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveTest");

	UPredicateSpawnerPickupPickedUp_C_ReceiveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveBind
// (Event, Public, BlueprintEvent)

void UPredicateSpawnerPickupPickedUp_C::ReceiveBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveBind");

	UPredicateSpawnerPickupPickedUp_C_ReceiveBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveUnbind
// (Event, Public, BlueprintEvent)

void UPredicateSpawnerPickupPickedUp_C::ReceiveUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.ReceiveUnbind");

	UPredicateSpawnerPickupPickedUp_C_ReceiveUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.OnPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PickupSource                   (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UPredicateSpawnerPickupPickedUp_C::OnPickedUp(class APawn* PickupSource, class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C.OnPickedUp");

	UPredicateSpawnerPickupPickedUp_C_OnPickedUp_Params params;
	params.PickupSource = PickupSource;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
