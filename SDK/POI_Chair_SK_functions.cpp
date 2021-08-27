
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

// Function POI_Chair_SK.POI_Chair_SK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_Chair_SK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_Chair_SK.POI_Chair_SK_C.UserConstructionScript");

	APOI_Chair_SK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_Chair_SK.POI_Chair_SK_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APOI_Chair_SK_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_Chair_SK.POI_Chair_SK_C.ReceiveBeginPlay");

	APOI_Chair_SK_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
