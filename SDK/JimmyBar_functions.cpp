
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

// Function JimmyBar.JimmyBar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJimmyBar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JimmyBar.JimmyBar_C.UserConstructionScript");

	AJimmyBar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JimmyBar.JimmyBar_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AJimmyBar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JimmyBar.JimmyBar_C.ReceiveBeginPlay");

	AJimmyBar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
