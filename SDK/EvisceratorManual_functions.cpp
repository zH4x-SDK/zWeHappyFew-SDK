
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

// Function EvisceratorManual.EvisceratorManual_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEvisceratorManual_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvisceratorManual.EvisceratorManual_C.UserConstructionScript");

	AEvisceratorManual_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EvisceratorManual.EvisceratorManual_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AEvisceratorManual_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvisceratorManual.EvisceratorManual_C.ReceiveBeginPlay");

	AEvisceratorManual_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
