
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

// Function BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaitLight_Lantern_WorshipPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C.UserConstructionScript");

	ABaitLight_Lantern_WorshipPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABaitLight_Lantern_WorshipPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C.ReceiveBeginPlay");

	ABaitLight_Lantern_WorshipPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
