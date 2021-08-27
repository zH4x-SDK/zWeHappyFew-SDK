
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

// Function LorePickup_Base.LorePickup_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALorePickup_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Base.LorePickup_Base_C.UserConstructionScript");

	ALorePickup_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LorePickup_Base.LorePickup_Base_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PickupSource                   (Parm, ZeroConstructor, IsPlainOldData)

void ALorePickup_Base_C::PickedUp(class APawn* PickupSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Base.LorePickup_Base_C.PickedUp");

	ALorePickup_Base_C_PickedUp_Params params;
	params.PickupSource = PickupSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LorePickup_Base.LorePickup_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ALorePickup_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Base.LorePickup_Base_C.ReceiveBeginPlay");

	ALorePickup_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LorePickup_Base.LorePickup_Base_C.BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ALorePickup_Base_C::BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Base.LorePickup_Base_C.BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature");

	ALorePickup_Base_C_BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LorePickup_Base.LorePickup_Base_C.ExecuteUbergraph_LorePickup_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALorePickup_Base_C::ExecuteUbergraph_LorePickup_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Base.LorePickup_Base_C.ExecuteUbergraph_LorePickup_Base");

	ALorePickup_Base_C_ExecuteUbergraph_LorePickup_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
