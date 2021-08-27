
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

// Function InventoryItemImplement.InventoryItemImplement_C.GetKeyboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInventoryItemImplement_C::GetKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.GetKeyboard");

	UInventoryItemImplement_C_GetKeyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemImplement.InventoryItemImplement_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInventoryItemImplement_C::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.GetPlayerController");

	UInventoryItemImplement_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemImplement.InventoryItemImplement_C.IsUseProgressVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInventoryItemImplement_C::IsUseProgressVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.IsUseProgressVisible");

	UInventoryItemImplement_C_IsUseProgressVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemImplement.InventoryItemImplement_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryItemImplement_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.OnDragOver");

	UInventoryItemImplement_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemImplement.InventoryItemImplement_C.Get_EquippedBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UInventoryItemImplement_C::Get_EquippedBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.Get_EquippedBox_Visibility_1");

	UInventoryItemImplement_C_Get_EquippedBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidgetFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::RefreshWidgetFunction(class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidgetFunction");

	UInventoryItemImplement_C_RefreshWidgetFunction_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.FormatForDrag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::FormatForDrag(float Width, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.FormatForDrag");

	UInventoryItemImplement_C_FormatForDrag_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.OnDragDetected");

	UInventoryItemImplement_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function InventoryItemImplement.InventoryItemImplement_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.Tick");

	UInventoryItemImplement_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::RefreshWidget(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidget");

	UInventoryItemImplement_C_RefreshWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.SetUseProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanCancelProgress              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::SetUseProgress(float* progress, bool* CanCancelProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.SetUseProgress");

	UInventoryItemImplement_C_SetUseProgress_Params params;
	params.progress = progress;
	params.CanCancelProgress = CanCancelProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ItemBought
// (Event, Public, BlueprintEvent)

void UInventoryItemImplement_C::ItemBought()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ItemBought");

	UInventoryItemImplement_C_ItemBought_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ItemSold
// (Event, Public, BlueprintEvent)

void UInventoryItemImplement_C::ItemSold()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ItemSold");

	UInventoryItemImplement_C_ItemSold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ItemDropped
// (Event, Public, BlueprintEvent)

void UInventoryItemImplement_C::ItemDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ItemDropped");

	UInventoryItemImplement_C_ItemDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ItemPlaced
// (Event, Public, BlueprintEvent)

void UInventoryItemImplement_C::ItemPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ItemPlaced");

	UInventoryItemImplement_C_ItemPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ItemTaken
// (Event, Public, BlueprintEvent)

void UInventoryItemImplement_C::ItemTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ItemTaken");

	UInventoryItemImplement_C_ItemTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemImplement.InventoryItemImplement_C.ExecuteUbergraph_InventoryItemImplement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemImplement_C::ExecuteUbergraph_InventoryItemImplement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemImplement.InventoryItemImplement_C.ExecuteUbergraph_InventoryItemImplement");

	UInventoryItemImplement_C_ExecuteUbergraph_InventoryItemImplement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
