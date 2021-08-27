
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

// Function Gramophone_VictoriaHouse.Gramophone_VictoriaHouse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGramophone_VictoriaHouse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gramophone_VictoriaHouse.Gramophone_VictoriaHouse_C.UserConstructionScript");

	AGramophone_VictoriaHouse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gramophone_VictoriaHouse.Gramophone_VictoriaHouse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGramophone_VictoriaHouse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gramophone_VictoriaHouse.Gramophone_VictoriaHouse_C.ReceiveBeginPlay");

	AGramophone_VictoriaHouse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
