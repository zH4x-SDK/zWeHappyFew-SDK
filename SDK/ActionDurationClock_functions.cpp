
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

// Function ActionDurationClock.ActionDurationClock_C.UpdateSkullDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationClock_C::UpdateSkullDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.UpdateSkullDisplay");

	UActionDurationClock_C_UpdateSkullDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationClock.ActionDurationClock_C.SetPendingDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeathIsPending                 (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationClock_C::SetPendingDeath(bool DeathIsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.SetPendingDeath");

	UActionDurationClock_C_SetPendingDeath_Params params;
	params.DeathIsPending = DeathIsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationClock.ActionDurationClock_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentTimeHours               (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewTimeHours                   (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationClock_C::SetTime(float CurrentTimeHours, float NewTimeHours)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.SetTime");

	UActionDurationClock_C_SetTime_Params params;
	params.CurrentTimeHours = CurrentTimeHours;
	params.NewTimeHours = NewTimeHours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationClock.ActionDurationClock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionDurationClock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.Construct");

	UActionDurationClock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationClock.ActionDurationClock_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationClock_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.Tick");

	UActionDurationClock_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationClock.ActionDurationClock_C.ExecuteUbergraph_ActionDurationClock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationClock_C::ExecuteUbergraph_ActionDurationClock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationClock.ActionDurationClock_C.ExecuteUbergraph_ActionDurationClock");

	UActionDurationClock_C_ExecuteUbergraph_ActionDurationClock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
