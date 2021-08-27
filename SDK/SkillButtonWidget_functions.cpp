
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

// Function SkillButtonWidget.SkillButtonWidget_C.UpdateSelectedDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void USkillButtonWidget_C::UpdateSelectedDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.UpdateSelectedDisplay");

	USkillButtonWidget_C_UpdateSelectedDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.OnSetupSkillDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            SkillBrush                     (Parm)
// bool*                          InSkillAvailable               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InSkillBought                  (Parm, ZeroConstructor, IsPlainOldData)

void USkillButtonWidget_C::OnSetupSkillDisplay(struct FSlateBrush* SkillBrush, bool* InSkillAvailable, bool* InSkillBought)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.OnSetupSkillDisplay");

	USkillButtonWidget_C_OnSetupSkillDisplay_Params params;
	params.SkillBrush = SkillBrush;
	params.InSkillAvailable = InSkillAvailable;
	params.InSkillBought = InSkillBought;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkillButtonWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkillButtonWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void USkillButtonWidget_C::OnSelectionChanged(bool* bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.OnSelectionChanged");

	USkillButtonWidget_C_OnSelectionChanged_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillButtonWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillButtonWidget.SkillButtonWidget_C.ExecuteUbergraph_SkillButtonWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillButtonWidget_C::ExecuteUbergraph_SkillButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillButtonWidget.SkillButtonWidget_C.ExecuteUbergraph_SkillButtonWidget");

	USkillButtonWidget_C_ExecuteUbergraph_SkillButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
