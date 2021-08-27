
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

// Function RottenPotato.RottenPotato_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARottenPotato_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RottenPotato.RottenPotato_C.UserConstructionScript");

	ARottenPotato_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RottenPotato.RottenPotato_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ARottenPotato_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function RottenPotato.RottenPotato_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	ARottenPotato_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RottenPotato.RottenPotato_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ARottenPotato_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RottenPotato.RottenPotato_C.ReceiveOnCompleteUse");

	ARottenPotato_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RottenPotato.RottenPotato_C.ExecuteUbergraph_RottenPotato
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARottenPotato_C::ExecuteUbergraph_RottenPotato(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RottenPotato.RottenPotato_C.ExecuteUbergraph_RottenPotato");

	ARottenPotato_C_ExecuteUbergraph_RottenPotato_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
