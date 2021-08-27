
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

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryDropSlotImplement_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnDragDetected");

	UInventoryDropSlotImplement_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryDropSlotImplement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.Construct");

	UInventoryDropSlotImplement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetDisplayImage
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D**             newTexture                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryDropSlotImplement_C::SetDisplayImage(class UTexture2D** newTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetDisplayImage");

	UInventoryDropSlotImplement_C_SetDisplayImage_Params params;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotUnMatchSelected
// (Event, Public, BlueprintEvent)

void UInventoryDropSlotImplement_C::OnSlotUnMatchSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotUnMatchSelected");

	UInventoryDropSlotImplement_C_OnSlotUnMatchSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnNonSlottableSelected
// (Event, Public, BlueprintEvent)

void UInventoryDropSlotImplement_C::OnNonSlottableSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnNonSlottableSelected");

	UInventoryDropSlotImplement_C_OnNonSlottableSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotMatchesSelected
// (Event, Public, BlueprintEvent)

void UInventoryDropSlotImplement_C::OnSlotMatchesSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotMatchesSelected");

	UInventoryDropSlotImplement_C_OnSlotMatchesSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryDropSlotImplement_C::SetPickup(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetPickup");

	UInventoryDropSlotImplement_C_SetPickup_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.UpdateFocusHighlight
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Highlighted                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryDropSlotImplement_C::UpdateFocusHighlight(bool* Highlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.UpdateFocusHighlight");

	UInventoryDropSlotImplement_C_UpdateFocusHighlight_Params params;
	params.Highlighted = Highlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ExecuteUbergraph_InventoryDropSlotImplement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryDropSlotImplement_C::ExecuteUbergraph_InventoryDropSlotImplement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ExecuteUbergraph_InventoryDropSlotImplement");

	UInventoryDropSlotImplement_C_ExecuteUbergraph_InventoryDropSlotImplement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.HideHighlight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInventoryDropSlotImplement_C::HideHighlight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.HideHighlight__DelegateSignature");

	UInventoryDropSlotImplement_C_HideHighlight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ShowHighlight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInventoryDropSlotImplement_C::ShowHighlight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ShowHighlight__DelegateSignature");

	UInventoryDropSlotImplement_C_ShowHighlight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
