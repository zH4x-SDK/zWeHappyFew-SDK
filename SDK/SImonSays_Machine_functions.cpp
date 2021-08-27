
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

// Function SImonSays_Machine.SImonSays_Machine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASImonSays_Machine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SImonSays_Machine.SImonSays_Machine_C.UserConstructionScript");

	ASImonSays_Machine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
