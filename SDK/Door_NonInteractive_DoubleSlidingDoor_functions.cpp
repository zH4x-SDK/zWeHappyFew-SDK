
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

// Function Door_NonInteractive_DoubleSlidingDoor.Door_NonInteractive_DoubleSlidingDoor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADoor_NonInteractive_DoubleSlidingDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_NonInteractive_DoubleSlidingDoor.Door_NonInteractive_DoubleSlidingDoor_C.UserConstructionScript");

	ADoor_NonInteractive_DoubleSlidingDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
