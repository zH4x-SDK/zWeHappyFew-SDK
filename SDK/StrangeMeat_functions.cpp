
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

// Function StrangeMeat.StrangeMeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStrangeMeat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StrangeMeat.StrangeMeat_C.UserConstructionScript");

	AStrangeMeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StrangeMeat.StrangeMeat_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AStrangeMeat_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StrangeMeat.StrangeMeat_C.CustomEvent_1");

	AStrangeMeat_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StrangeMeat.StrangeMeat_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AStrangeMeat_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StrangeMeat.StrangeMeat_C.ReceiveOnCompleteUse");

	AStrangeMeat_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StrangeMeat.StrangeMeat_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void AStrangeMeat_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function StrangeMeat.StrangeMeat_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature");

	AStrangeMeat_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StrangeMeat.StrangeMeat_C.ExecuteUbergraph_StrangeMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStrangeMeat_C::ExecuteUbergraph_StrangeMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StrangeMeat.StrangeMeat_C.ExecuteUbergraph_StrangeMeat");

	AStrangeMeat_C_ExecuteUbergraph_StrangeMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
