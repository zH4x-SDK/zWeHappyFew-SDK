
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

// Function AtomizerSleeptite.AtomizerSleeptite_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtomizerSleeptite_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtomizerSleeptite.AtomizerSleeptite_C.UserConstructionScript");

	AAtomizerSleeptite_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtomizerSleeptite.AtomizerSleeptite_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAtomizerSleeptite_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtomizerSleeptite.AtomizerSleeptite_C.ReceiveBeginPlay");

	AAtomizerSleeptite_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtomizerSleeptite.AtomizerSleeptite_C.Spray
// (BlueprintCallable, BlueprintEvent)

void AAtomizerSleeptite_C::Spray()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtomizerSleeptite.AtomizerSleeptite_C.Spray");

	AAtomizerSleeptite_C_Spray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
