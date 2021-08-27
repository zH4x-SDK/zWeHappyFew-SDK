
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

// Function Teleporter_Locked.Teleporter_Locked_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleporter_Locked_C::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_Locked.Teleporter_Locked_C.SetLocked");

	ATeleporter_Locked_C_SetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
