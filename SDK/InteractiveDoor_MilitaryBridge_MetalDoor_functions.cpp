
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

// Function InteractiveDoor_MilitaryBridge_MetalDoor.InteractiveDoor_MilitaryBridge_MetalDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInteractiveDoor_MilitaryBridge_MetalDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveDoor_MilitaryBridge_MetalDoor.InteractiveDoor_MilitaryBridge_MetalDoor_C.UserConstructionScript");

	AInteractiveDoor_MilitaryBridge_MetalDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
