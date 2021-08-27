
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

// Function EmptyBottle.EmptyBottle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEmptyBottle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmptyBottle.EmptyBottle_C.UserConstructionScript");

	AEmptyBottle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmptyBottle.EmptyBottle_C.ReceiveOnHitThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void AEmptyBottle_C::ReceiveOnHitThrow(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmptyBottle.EmptyBottle_C.ReceiveOnHitThrow");

	AEmptyBottle_C_ReceiveOnHitThrow_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmptyBottle.EmptyBottle_C.ExecuteUbergraph_EmptyBottle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmptyBottle_C::ExecuteUbergraph_EmptyBottle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmptyBottle.EmptyBottle_C.ExecuteUbergraph_EmptyBottle");

	AEmptyBottle_C_ExecuteUbergraph_EmptyBottle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmptyBottle.EmptyBottle_C.ThrownBottle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEmptyBottle_C::ThrownBottle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmptyBottle.EmptyBottle_C.ThrownBottle__DelegateSignature");

	AEmptyBottle_C_ThrownBottle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
