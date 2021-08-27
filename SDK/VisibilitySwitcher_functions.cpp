
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

// Function VisibilitySwitcher.VisibilitySwitcher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVisibilitySwitcher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VisibilitySwitcher.VisibilitySwitcher_C.UserConstructionScript");

	AVisibilitySwitcher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisibilitySwitcher.VisibilitySwitcher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AVisibilitySwitcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VisibilitySwitcher.VisibilitySwitcher_C.ReceiveBeginPlay");

	AVisibilitySwitcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
