
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

// Function Teleporter_Brodcasttower.Teleporter_Brodcasttower_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeleporter_Brodcasttower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_Brodcasttower.Teleporter_Brodcasttower_C.UserConstructionScript");

	ATeleporter_Brodcasttower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
