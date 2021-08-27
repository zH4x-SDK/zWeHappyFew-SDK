
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

// Function SilentShoes.SilentShoes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASilentShoes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.UserConstructionScript");

	ASilentShoes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASilentShoes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.ReceiveBeginPlay");

	ASilentShoes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.OnEquip_Event_1");

	ASilentShoes_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.OnUnequip_Event_1");

	ASilentShoes_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.ReceiveTick");

	ASilentShoes_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	ASilentShoes_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature(class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature");

	ASilentShoes_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SilentShoes.SilentShoes_C.ExecuteUbergraph_SilentShoes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASilentShoes_C::ExecuteUbergraph_SilentShoes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SilentShoes.SilentShoes_C.ExecuteUbergraph_SilentShoes");

	ASilentShoes_C_ExecuteUbergraph_SilentShoes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
