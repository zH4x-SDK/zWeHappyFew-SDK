
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

// Function Village_BasicDoor.Village_BasicDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillage_BasicDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Village_BasicDoor.Village_BasicDoor_C.UserConstructionScript");

	AVillage_BasicDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
