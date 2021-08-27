
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

// Function Banger.Banger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABanger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger.Banger_C.UserConstructionScript");

	ABanger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Banger.Banger_C.ReceiveOnHitThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ABanger_C::ReceiveOnHitThrow(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger.Banger_C.ReceiveOnHitThrow");

	ABanger_C_ReceiveOnHitThrow_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Banger.Banger_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ABanger_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger.Banger_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	ABanger_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Banger.Banger_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void ABanger_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature(class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger.Banger_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature");

	ABanger_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Banger.Banger_C.ExecuteUbergraph_Banger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABanger_C::ExecuteUbergraph_Banger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger.Banger_C.ExecuteUbergraph_Banger");

	ABanger_C_ExecuteUbergraph_Banger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
