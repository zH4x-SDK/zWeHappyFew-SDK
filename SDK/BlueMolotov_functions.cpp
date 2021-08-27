
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

// Function BlueMolotov.BlueMolotov_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABlueMolotov_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueMolotov.BlueMolotov_C.UserConstructionScript");

	ABlueMolotov_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueMolotov.BlueMolotov_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ABlueMolotov_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueMolotov.BlueMolotov_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	ABlueMolotov_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueMolotov.BlueMolotov_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void ABlueMolotov_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature(class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueMolotov.BlueMolotov_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature");

	ABlueMolotov_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueMolotov.BlueMolotov_C.ExecuteUbergraph_BlueMolotov
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABlueMolotov_C::ExecuteUbergraph_BlueMolotov(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueMolotov.BlueMolotov_C.ExecuteUbergraph_BlueMolotov");

	ABlueMolotov_C_ExecuteUbergraph_BlueMolotov_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
