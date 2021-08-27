
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

// Function GileadPetal.GileadPetal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGileadPetal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GileadPetal.GileadPetal_C.UserConstructionScript");

	AGileadPetal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GileadPetal.GileadPetal_C.OnPicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PickupSource                   (Parm, ZeroConstructor, IsPlainOldData)

void AGileadPetal_C::OnPicked(class APawn* PickupSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GileadPetal.GileadPetal_C.OnPicked");

	AGileadPetal_C_OnPicked_Params params;
	params.PickupSource = PickupSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GileadPetal.GileadPetal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGileadPetal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GileadPetal.GileadPetal_C.ReceiveBeginPlay");

	AGileadPetal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GileadPetal.GileadPetal_C.ExecuteUbergraph_GileadPetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGileadPetal_C::ExecuteUbergraph_GileadPetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GileadPetal.GileadPetal_C.ExecuteUbergraph_GileadPetal");

	AGileadPetal_C_ExecuteUbergraph_GileadPetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
