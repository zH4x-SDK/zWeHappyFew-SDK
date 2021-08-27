
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

// Function CellarHatch.CellarHatch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACellarHatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CellarHatch.CellarHatch_C.UserConstructionScript");

	ACellarHatch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CellarHatch.CellarHatch_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACellarHatch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CellarHatch.CellarHatch_C.ReceiveBeginPlay");

	ACellarHatch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
