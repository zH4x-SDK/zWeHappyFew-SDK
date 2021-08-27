
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

// Function HolyYam.HolyYam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHolyYam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HolyYam.HolyYam_C.UserConstructionScript");

	AHolyYam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HolyYam.HolyYam_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHolyYam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HolyYam.HolyYam_C.ReceiveBeginPlay");

	AHolyYam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
