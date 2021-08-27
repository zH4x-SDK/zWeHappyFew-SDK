
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

// Function SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASK_Butcher_Exsanguinator_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C.UserConstructionScript");

	ASK_Butcher_Exsanguinator_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASK_Butcher_Exsanguinator_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C.ReceiveBeginPlay");

	ASK_Butcher_Exsanguinator_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
