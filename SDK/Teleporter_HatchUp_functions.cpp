
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

// Function Teleporter_HatchUp.Teleporter_HatchUp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleporter_HatchUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_HatchUp.Teleporter_HatchUp_C.UserConstructionScript");

	ATeleporter_HatchUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Teleporter_HatchUp.Teleporter_HatchUp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ATeleporter_HatchUp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Teleporter_HatchUp.Teleporter_HatchUp_C.ReceiveBeginPlay");

	ATeleporter_HatchUp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
