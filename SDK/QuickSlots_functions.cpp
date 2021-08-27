
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

// Function QuickSlots.QuickSlots_C.SetNewQuickslotPickupAndActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActiveSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuickSlots_C::SetNewQuickslotPickupAndActive(class AGlimpsePickup* Pickup, bool IsActiveSlot, int slotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.SetNewQuickslotPickupAndActive");

	UQuickSlots_C_SetNewQuickslotPickupAndActive_Params params;
	params.Pickup = Pickup;
	params.IsActiveSlot = IsActiveSlot;
	params.slotNumber = slotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.UpdateDurability
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickSlots_C::UpdateDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.UpdateDurability");

	UQuickSlots_C_UpdateDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.OnGetPlayerController_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlimpsePlayerController* UQuickSlots_C::OnGetPlayerController_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.OnGetPlayerController_1");

	UQuickSlots_C_OnGetPlayerController_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuickSlots.QuickSlots_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickSlots_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.Construct");

	UQuickSlots_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UQuickSlots_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.Tick");

	UQuickSlots_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.OnRefresh
// (Event, Public, BlueprintEvent)

void UQuickSlots_C::OnRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.OnRefresh");

	UQuickSlots_C_OnRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.OnQuickslotCycled
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           I                              (Parm, ZeroConstructor, IsPlainOldData)

void UQuickSlots_C::OnQuickslotCycled(int* I)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.OnQuickslotCycled");

	UQuickSlots_C_OnQuickslotCycled_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.OnQuickslotUseStart
// (Event, Public, BlueprintEvent)

void UQuickSlots_C::OnQuickslotUseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.OnQuickslotUseStart");

	UQuickSlots_C_OnQuickslotUseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.OnSwitchActiveSlot
// (Event, Public, BlueprintEvent)

void UQuickSlots_C::OnSwitchActiveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.OnSwitchActiveSlot");

	UQuickSlots_C_OnSwitchActiveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickSlots.QuickSlots_C.ExecuteUbergraph_QuickSlots
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuickSlots_C::ExecuteUbergraph_QuickSlots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickSlots.QuickSlots_C.ExecuteUbergraph_QuickSlots");

	UQuickSlots_C_ExecuteUbergraph_QuickSlots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
