
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

// Function DSIR_Machine_01.DSIR_Machine_01_C.CanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void ADSIR_Machine_01_C::CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function DSIR_Machine_01.DSIR_Machine_01_C.CanInteract");

	ADSIR_Machine_01_C_CanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DSIR_Machine_01.DSIR_Machine_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADSIR_Machine_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DSIR_Machine_01.DSIR_Machine_01_C.UserConstructionScript");

	ADSIR_Machine_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
