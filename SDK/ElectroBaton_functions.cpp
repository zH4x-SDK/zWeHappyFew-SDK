
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

// Function ElectroBaton.ElectroBaton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AElectroBaton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.UserConstructionScript");

	AElectroBaton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectroBaton.ElectroBaton_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AElectroBaton_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.OnEquip_Event_1");

	AElectroBaton_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectroBaton.ElectroBaton_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AElectroBaton_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.ReceiveBeginPlay");

	AElectroBaton_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectroBaton.ElectroBaton_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AElectroBaton_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.OnUnequip_Event_1");

	AElectroBaton_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectroBaton.ElectroBaton_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void AElectroBaton_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	AElectroBaton_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectroBaton.ElectroBaton_C.ExecuteUbergraph_ElectroBaton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectroBaton_C::ExecuteUbergraph_ElectroBaton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectroBaton.ElectroBaton_C.ExecuteUbergraph_ElectroBaton");

	AElectroBaton_C_ExecuteUbergraph_ElectroBaton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
