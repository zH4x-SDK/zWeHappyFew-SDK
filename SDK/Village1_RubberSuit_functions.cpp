
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

// Function Village1_RubberSuit.Village1_RubberSuit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillage1_RubberSuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Village1_RubberSuit.Village1_RubberSuit_C.UserConstructionScript");

	AVillage1_RubberSuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Village1_RubberSuit.Village1_RubberSuit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AVillage1_RubberSuit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Village1_RubberSuit.Village1_RubberSuit_C.ReceiveBeginPlay");

	AVillage1_RubberSuit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
