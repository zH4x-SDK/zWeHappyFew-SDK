
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

// Function Village2_TheSpeaker.Village2_TheSpeaker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillage2_TheSpeaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Village2_TheSpeaker.Village2_TheSpeaker_C.UserConstructionScript");

	AVillage2_TheSpeaker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Village2_TheSpeaker.Village2_TheSpeaker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AVillage2_TheSpeaker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Village2_TheSpeaker.Village2_TheSpeaker_C.ReceiveBeginPlay");

	AVillage2_TheSpeaker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
