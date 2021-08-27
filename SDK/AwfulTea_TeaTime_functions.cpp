
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

// Function AwfulTea_TeaTime.AwfulTea_TeaTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAwfulTea_TeaTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AwfulTea_TeaTime.AwfulTea_TeaTime_C.UserConstructionScript");

	AAwfulTea_TeaTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AwfulTea_TeaTime.AwfulTea_TeaTime_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void AAwfulTea_TeaTime_C::BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function AwfulTea_TeaTime.AwfulTea_TeaTime_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature");

	AAwfulTea_TeaTime_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
