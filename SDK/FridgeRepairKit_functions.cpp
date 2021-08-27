
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

// Function FridgeRepairKit.FridgeRepairKit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFridgeRepairKit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FridgeRepairKit.FridgeRepairKit_C.UserConstructionScript");

	AFridgeRepairKit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FridgeRepairKit.FridgeRepairKit_C.ReceiveOnCompleteUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AFridgeRepairKit_C::ReceiveOnCompleteUse(class APawn* UseSource, class AActor* UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FridgeRepairKit.FridgeRepairKit_C.ReceiveOnCompleteUse");

	AFridgeRepairKit_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
