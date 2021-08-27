
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

// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.CanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractionResult> ACommunityMessageBoard_SpeakersCorner_C::CanInteract(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.CanInteract");

	ACommunityMessageBoard_SpeakersCorner_C_CanInteract_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommunityMessageBoard_SpeakersCorner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.UserConstructionScript");

	ACommunityMessageBoard_SpeakersCorner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACommunityMessageBoard_SpeakersCorner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.ReceiveBeginPlay");

	ACommunityMessageBoard_SpeakersCorner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
