
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

// Function BuySell_Button.BuySell_Button_C.SetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::SetHidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetHidden");

	UBuySell_Button_C_SetHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.SetPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pressed                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::SetPressed(bool Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetPressed");

	UBuySell_Button_C_SetPressed_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.UpdateDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuySell_Button_C::UpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.UpdateDisplay");

	UBuySell_Button_C_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetEnabled");

	UBuySell_Button_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.PushButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBuySell_Button_C::PushButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.PushButton");

	UBuySell_Button_C_PushButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.SetBuySellText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (Parm)

void UBuySell_Button_C::SetBuySellText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetBuySellText");

	UBuySell_Button_C_SetBuySellText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.SetIsCurrentCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCurrent                      (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::SetIsCurrentCategory(bool IsCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetIsCurrentCategory");

	UBuySell_Button_C_SetIsCurrentCategory_Params params;
	params.IsCurrent = IsCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::SetImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.SetImage");

	UBuySell_Button_C_SetImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuySell_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.Construct");

	UBuySell_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.Tick");

	UBuySell_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBuySell_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBuySell_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBuySell_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBuySell_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.ExecuteUbergraph_BuySell_Button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuySell_Button_C::ExecuteUbergraph_BuySell_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.ExecuteUbergraph_BuySell_Button");

	UBuySell_Button_C_ExecuteUbergraph_BuySell_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuySell_Button_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.OnReleased__DelegateSignature");

	UBuySell_Button_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuySell_Button_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.OnPressed__DelegateSignature");

	UBuySell_Button_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySell_Button.BuySell_Button_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuySell_Button_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySell_Button.BuySell_Button_C.OnClicked__DelegateSignature");

	UBuySell_Button_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
