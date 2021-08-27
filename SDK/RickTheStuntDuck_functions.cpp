
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

// Function RickTheStuntDuck.RickTheStuntDuck_C.OnDurationComplete
// (Protected, BlueprintCallable, BlueprintEvent)

void ARickTheStuntDuck_C::OnDurationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.OnDurationComplete");

	ARickTheStuntDuck_C_OnDurationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.TickActiveEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::TickActiveEffect(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.TickActiveEffect");

	ARickTheStuntDuck_C_TickActiveEffect_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.Activate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Thrower                        (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::Activate(class APawn* Thrower)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.Activate");

	ARickTheStuntDuck_C_Activate_Params params;
	params.Thrower = Thrower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.Deactivate
// (Protected, BlueprintCallable, BlueprintEvent)

void ARickTheStuntDuck_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.Deactivate");

	ARickTheStuntDuck_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARickTheStuntDuck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.UserConstructionScript");

	ARickTheStuntDuck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveOnHitThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::ReceiveOnHitThrow(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveOnHitThrow");

	ARickTheStuntDuck_C_ReceiveOnHitThrow_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveTick");

	ARickTheStuntDuck_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature");

	ARickTheStuntDuck_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RickTheStuntDuck.RickTheStuntDuck_C.ExecuteUbergraph_RickTheStuntDuck
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARickTheStuntDuck_C::ExecuteUbergraph_RickTheStuntDuck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RickTheStuntDuck.RickTheStuntDuck_C.ExecuteUbergraph_RickTheStuntDuck");

	ARickTheStuntDuck_C_ExecuteUbergraph_RickTheStuntDuck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
