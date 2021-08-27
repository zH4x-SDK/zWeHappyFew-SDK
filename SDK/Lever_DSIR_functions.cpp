
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

// Function Lever_DSIR.Lever_DSIR_C.CanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void ALever_DSIR_C::CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lever_DSIR.Lever_DSIR_C.CanInteract");

	ALever_DSIR_C_CanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
