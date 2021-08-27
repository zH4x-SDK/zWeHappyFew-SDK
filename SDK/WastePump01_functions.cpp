
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

// Function WastePump01.WastePump01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWastePump01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WastePump01.WastePump01_C.UserConstructionScript");

	AWastePump01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WastePump01.WastePump01_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWastePump01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WastePump01.WastePump01_C.ReceiveBeginPlay");

	AWastePump01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
