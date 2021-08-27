
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

// Function HideyThing_PottedTree.HideyThing_PottedTree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHideyThing_PottedTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HideyThing_PottedTree.HideyThing_PottedTree_C.UserConstructionScript");

	AHideyThing_PottedTree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HideyThing_PottedTree.HideyThing_PottedTree_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHideyThing_PottedTree_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HideyThing_PottedTree.HideyThing_PottedTree_C.ReceiveBeginPlay");

	AHideyThing_PottedTree_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
