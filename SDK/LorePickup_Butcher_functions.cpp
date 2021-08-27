
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

// Function LorePickup_Butcher.LorePickup_Butcher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALorePickup_Butcher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Butcher.LorePickup_Butcher_C.UserConstructionScript");

	ALorePickup_Butcher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LorePickup_Butcher.LorePickup_Butcher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ALorePickup_Butcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePickup_Butcher.LorePickup_Butcher_C.ReceiveBeginPlay");

	ALorePickup_Butcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
