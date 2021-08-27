
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

// Function Teleporter_OlliesLadder.Teleporter_OlliesLadder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleporter_OlliesLadder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_OlliesLadder.Teleporter_OlliesLadder_C.UserConstructionScript");

	ATeleporter_OlliesLadder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleporter_OlliesLadder.Teleporter_OlliesLadder_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ATeleporter_OlliesLadder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_OlliesLadder.Teleporter_OlliesLadder_C.ReceiveBeginPlay");

	ATeleporter_OlliesLadder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
