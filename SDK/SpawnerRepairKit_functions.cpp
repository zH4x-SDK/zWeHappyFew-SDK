
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

// Function SpawnerRepairKit.SpawnerRepairKit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawnerRepairKit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnerRepairKit.SpawnerRepairKit_C.UserConstructionScript");

	ASpawnerRepairKit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnerRepairKit.SpawnerRepairKit_C.ReceiveOnCompleteUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpawnerRepairKit_C::ReceiveOnCompleteUse(class APawn* UseSource, class AActor* UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnerRepairKit.SpawnerRepairKit_C.ReceiveOnCompleteUse");

	ASpawnerRepairKit_C_ReceiveOnCompleteUse_Params params;
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
