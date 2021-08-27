
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

// Function BeeNest_Trees.BeeNest_Trees_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABeeNest_Trees_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeNest_Trees.BeeNest_Trees_C.SetEnabled");

	ABeeNest_Trees_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeNest_Trees.BeeNest_Trees_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABeeNest_Trees_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeNest_Trees.BeeNest_Trees_C.UserConstructionScript");

	ABeeNest_Trees_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
