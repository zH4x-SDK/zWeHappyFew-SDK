
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

// Function BeeCannon.BeeCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABeeCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeCannon.BeeCannon_C.UserConstructionScript");

	ABeeCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeCannon.BeeCannon_C.OnChargeComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ABeeCannon_C::OnChargeComplete(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeCannon.BeeCannon_C.OnChargeComplete");

	ABeeCannon_C_OnChargeComplete_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeCannon.BeeCannon_C.OnChargeCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ABeeCannon_C::OnChargeCancelled(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeCannon.BeeCannon_C.OnChargeCancelled");

	ABeeCannon_C_OnChargeCancelled_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeCannon.BeeCannon_C.OnCharging
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ChargePercent                  (Parm, ZeroConstructor, IsPlainOldData)

void ABeeCannon_C::OnCharging(class APawn** InstigatorPawn, float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeCannon.BeeCannon_C.OnCharging");

	ABeeCannon_C_OnCharging_Params params;
	params.InstigatorPawn = InstigatorPawn;
	params.ChargePercent = ChargePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeCannon.BeeCannon_C.OnChargeBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ABeeCannon_C::OnChargeBegin(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeCannon.BeeCannon_C.OnChargeBegin");

	ABeeCannon_C_OnChargeBegin_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
