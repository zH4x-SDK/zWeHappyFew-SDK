
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

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetCheckboxHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hovered                        (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::SetCheckboxHovered(bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetCheckboxHovered");

	UFastTravelEntryWidget_C_SetCheckboxHovered_Params params;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetHighlighted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Highlighted                    (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::SetHighlighted(bool Highlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetHighlighted");

	UFastTravelEntryWidget_C_SetHighlighted_Params params;
	params.Highlighted = Highlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetEnabled");

	UFastTravelEntryWidget_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFastTravelEntryWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFastTravelEntryWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::UpdateSelected(bool* bInSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateSelected");

	UFastTravelEntryWidget_C_UpdateSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.OnSetupEntry
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  InDisplayName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bInFound                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInActive                      (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::OnSetupEntry(struct FName* InDisplayName, bool* bInFound, bool* bInActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.OnSetupEntry");

	UFastTravelEntryWidget_C_OnSetupEntry_Params params;
	params.InDisplayName = InDisplayName;
	params.bInFound = bInFound;
	params.bInActive = bInActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateHighlighted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInHighlighted                 (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::UpdateHighlighted(bool* bInHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateHighlighted");

	UFastTravelEntryWidget_C_UpdateHighlighted_Params params;
	params.bInHighlighted = bInHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFastTravelEntryWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UFastTravelEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	UFastTravelEntryWidget_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFastTravelEntryWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature");

	UFastTravelEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelEntryWidget.FastTravelEntryWidget_C.ExecuteUbergraph_FastTravelEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelEntryWidget_C::ExecuteUbergraph_FastTravelEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelEntryWidget.FastTravelEntryWidget_C.ExecuteUbergraph_FastTravelEntryWidget");

	UFastTravelEntryWidget_C_ExecuteUbergraph_FastTravelEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
