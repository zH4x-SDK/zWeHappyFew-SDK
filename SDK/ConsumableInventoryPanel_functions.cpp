
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

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.PlaySwitchSFX
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableInventoryPanel_C::PlaySwitchSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.PlaySwitchSFX");

	UConsumableInventoryPanel_C_PlaySwitchSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ShowEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsumableInventoryPanel_C::ShowEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ShowEmpty");

	UConsumableInventoryPanel_C_ShowEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.MoveDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsumableInventoryPanel_C::MoveDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.MoveDetails");

	UConsumableInventoryPanel_C_MoveDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsumableInventoryPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Construct");

	UConsumableInventoryPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UConsumableInventoryPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Tick");

	UConsumableInventoryPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.RefreshWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableInventoryPanel_C::RefreshWidget(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.RefreshWidget");

	UConsumableInventoryPanel_C_RefreshWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ExecuteUbergraph_ConsumableInventoryPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UConsumableInventoryPanel_C::ExecuteUbergraph_ConsumableInventoryPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ExecuteUbergraph_ConsumableInventoryPanel");

	UConsumableInventoryPanel_C_ExecuteUbergraph_ConsumableInventoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
