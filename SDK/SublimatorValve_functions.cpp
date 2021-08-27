
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

// Function SublimatorValve.SublimatorValve_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASublimatorValve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SublimatorValve.SublimatorValve_C.UserConstructionScript");

	ASublimatorValve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SublimatorValve.SublimatorValve_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASublimatorValve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SublimatorValve.SublimatorValve_C.ReceiveBeginPlay");

	ASublimatorValve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
