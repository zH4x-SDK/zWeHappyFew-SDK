
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

// Function BASE_Manual.BASE_Manual_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABASE_Manual_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_Manual.BASE_Manual_C.UserConstructionScript");

	ABASE_Manual_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BASE_Manual.BASE_Manual_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ABASE_Manual_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_Manual.BASE_Manual_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature");

	ABASE_Manual_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BASE_Manual.BASE_Manual_C.ExecuteUbergraph_BASE_Manual
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABASE_Manual_C::ExecuteUbergraph_BASE_Manual(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_Manual.BASE_Manual_C.ExecuteUbergraph_BASE_Manual");

	ABASE_Manual_C_ExecuteUbergraph_BASE_Manual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
