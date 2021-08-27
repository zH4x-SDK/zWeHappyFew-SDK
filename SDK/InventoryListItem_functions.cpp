
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

// Function InventoryListItem.InventoryListItem_C.Grow
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryListItem_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.Grow");

	UInventoryListItem_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.Shrink
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryListItem_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.Shrink");

	UInventoryListItem_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UInventoryListItem_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.OnMouseButtonDown");

	UInventoryListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryListItem.InventoryListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.Tick");

	UInventoryListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.RefreshWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListItem_C::RefreshWidget(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.RefreshWidget");

	UInventoryListItem_C_RefreshWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.ItemSold
// (Event, Public, BlueprintEvent)

void UInventoryListItem_C::ItemSold()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.ItemSold");

	UInventoryListItem_C_ItemSold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.ItemBought
// (Event, Public, BlueprintEvent)

void UInventoryListItem_C::ItemBought()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.ItemBought");

	UInventoryListItem_C_ItemBought_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.SetUseProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanCancelProgress              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListItem_C::SetUseProgress(float* progress, bool* CanCancelProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.SetUseProgress");

	UInventoryListItem_C_SetUseProgress_Params params;
	params.progress = progress;
	params.CanCancelProgress = CanCancelProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
// (BlueprintEvent)

void UInventoryListItem_C::BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");

	UInventoryListItem_C_BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature
// (BlueprintEvent)

void UInventoryListItem_C::BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature");

	UInventoryListItem_C_BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryListItem.InventoryListItem_C.ExecuteUbergraph_InventoryListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListItem_C::ExecuteUbergraph_InventoryListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryListItem.InventoryListItem_C.ExecuteUbergraph_InventoryListItem");

	UInventoryListItem_C_ExecuteUbergraph_InventoryListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
