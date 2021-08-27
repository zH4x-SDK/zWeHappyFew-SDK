
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

// Function DLCIcon.DLCIcon_C.SetIconColourOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (Parm, ZeroConstructor, IsPlainOldData)

void UDLCIcon_C::SetIconColourOpacity(const struct FLinearColor& Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.SetIconColourOpacity");

	UDLCIcon_C_SetIconColourOpacity_Params params;
	params.Colour = Colour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (Parm)

void UDLCIcon_C::SetImage(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.SetImage");

	UDLCIcon_C_SetImage_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.SetStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (Parm)

void UDLCIcon_C::SetStatusText(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.SetStatusText");

	UDLCIcon_C_SetStatusText_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLCIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.Construct");

	UDLCIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLCIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDLCIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDLCIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLCIcon_C::OnSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.OnSelected");

	UDLCIcon_C_OnSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.ChangeIconState
// (BlueprintCallable, BlueprintEvent)

void UDLCIcon_C::ChangeIconState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.ChangeIconState");

	UDLCIcon_C_ChangeIconState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.ExecuteUbergraph_DLCIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLCIcon_C::ExecuteUbergraph_DLCIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.ExecuteUbergraph_DLCIcon");

	UDLCIcon_C_ExecuteUbergraph_DLCIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCIcon.DLCIcon_C.OnIconClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDLCIcon_C::OnIconClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCIcon.DLCIcon_C.OnIconClicked__DelegateSignature");

	UDLCIcon_C_OnIconClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
