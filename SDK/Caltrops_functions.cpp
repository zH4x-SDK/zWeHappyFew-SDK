
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

// Function Caltrops.Caltrops_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACaltrops_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Caltrops.Caltrops_C.UserConstructionScript");

	ACaltrops_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Caltrops.Caltrops_C.ReceiveOnHitThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ACaltrops_C::ReceiveOnHitThrow(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Caltrops.Caltrops_C.ReceiveOnHitThrow");

	ACaltrops_C_ReceiveOnHitThrow_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Caltrops.Caltrops_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACaltrops_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Caltrops.Caltrops_C.ReceiveDestroyed");

	ACaltrops_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
