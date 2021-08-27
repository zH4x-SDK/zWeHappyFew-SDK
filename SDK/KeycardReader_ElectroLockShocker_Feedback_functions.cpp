
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

// Function KeycardReader_ElectroLockShocker_Feedback.KeycardReader_ElectroLockShocker_Feedback_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AKeycardReader_ElectroLockShocker_Feedback_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeycardReader_ElectroLockShocker_Feedback.KeycardReader_ElectroLockShocker_Feedback_C.UserConstructionScript");

	AKeycardReader_ElectroLockShocker_Feedback_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeycardReader_ElectroLockShocker_Feedback.KeycardReader_ElectroLockShocker_Feedback_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AKeycardReader_ElectroLockShocker_Feedback_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeycardReader_ElectroLockShocker_Feedback.KeycardReader_ElectroLockShocker_Feedback_C.ReceiveBeginPlay");

	AKeycardReader_ElectroLockShocker_Feedback_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
