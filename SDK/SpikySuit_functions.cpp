
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

// Function SpikySuit.SpikySuit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpikySuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikySuit.SpikySuit_C.UserConstructionScript");

	ASpikySuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikySuit.SpikySuit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASpikySuit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikySuit.SpikySuit_C.ReceiveBeginPlay");

	ASpikySuit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
