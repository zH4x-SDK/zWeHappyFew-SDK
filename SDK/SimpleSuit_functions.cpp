
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

// Function SimpleSuit.SimpleSuit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASimpleSuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSuit.SimpleSuit_C.UserConstructionScript");

	ASimpleSuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSuit.SimpleSuit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASimpleSuit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSuit.SimpleSuit_C.ReceiveBeginPlay");

	ASimpleSuit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
