
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

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UStatusEffectDetailsWidget_C::UpdateBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateBackground");

	UStatusEffectDetailsWidget_C_UpdateBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Get_NotificationIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UStatusEffectDetailsWidget_C::Get_NotificationIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Get_NotificationIcon_Visibility_1");

	UStatusEffectDetailsWidget_C_Get_NotificationIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::UpdateSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateSelected");

	UStatusEffectDetailsWidget_C_UpdateSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateStatusDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStatusEffectType> StatusType                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::UpdateStatusDisplay(TEnumAsByte<EStatusEffectType> StatusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateStatusDisplay");

	UStatusEffectDetailsWidget_C_UpdateStatusDisplay_Params params;
	params.StatusType = StatusType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatusEffectDetailsWidget_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateText");

	UStatusEffectDetailsWidget_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusEffectDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Construct");

	UStatusEffectDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnIconChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            InIcon                         (Parm)
// bool*                          bInHasIcon                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::OnIconChanged(struct FSlateBrush* InIcon, bool* bInHasIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnIconChanged");

	UStatusEffectDetailsWidget_C_OnIconChanged_Params params;
	params.InIcon = InIcon;
	params.bInHasIcon = bInHasIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnNameChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InEffectName                   (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectDetailsWidget_C::OnNameChanged(struct FText* InEffectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnNameChanged");

	UStatusEffectDetailsWidget_C_OnNameChanged_Params params;
	params.InEffectName = InEffectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnDescriptionChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InEffectDescription            (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectDetailsWidget_C::OnDescriptionChanged(struct FText* InEffectDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnDescriptionChanged");

	UStatusEffectDetailsWidget_C_OnDescriptionChanged_Params params;
	params.InEffectDescription = InEffectDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStatusEffectType>* InStatusType                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::OnStatusChanged(TEnumAsByte<EStatusEffectType>* InStatusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnStatusChanged");

	UStatusEffectDetailsWidget_C_OnStatusChanged_Params params;
	params.InStatusType = InStatusType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::SetSelected(bool* bInSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.SetSelected");

	UStatusEffectDetailsWidget_C_SetSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStatusEffectDetailsWidget_C::BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStatusEffectDetailsWidget_C::BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStatusEffectDetailsWidget_C::BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");

	UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.ExecuteUbergraph_StatusEffectDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectDetailsWidget_C::ExecuteUbergraph_StatusEffectDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.ExecuteUbergraph_StatusEffectDetailsWidget");

	UStatusEffectDetailsWidget_C_ExecuteUbergraph_StatusEffectDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
