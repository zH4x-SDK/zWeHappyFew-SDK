
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

// Function ConfirmationButton.ConfirmationButton_C.ShowButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void UConfirmationButton_C::ShowButton(bool Show, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.ShowButton");

	UConfirmationButton_C_ShowButton_Params params;
	params.Show = Show;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.OpenToolTip
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationButton_C::OpenToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.OpenToolTip");

	UConfirmationButton_C_OpenToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.Update Display
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationButton_C::Update_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.Update Display");

	UConfirmationButton_C_Update_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.Set Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationButton_C::Set_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.Set Enabled");

	UConfirmationButton_C_Set_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationButton_C::Hidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.Hidden");

	UConfirmationButton_C_Hidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.SetConfirmationText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Confirmation_Text              (Parm)

void UConfirmationButton_C::SetConfirmationText(const struct FText& Confirmation_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.SetConfirmationText");

	UConfirmationButton_C_SetConfirmationText_Params params;
	params.Confirmation_Text = Confirmation_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmationButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.Construct");

	UConfirmationButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmationButton_C::BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UConfirmationButton_C_BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.ExecuteUbergraph_ConfirmationButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationButton_C::ExecuteUbergraph_ConfirmationButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.ExecuteUbergraph_ConfirmationButton");

	UConfirmationButton_C_ExecuteUbergraph_ConfirmationButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationButton.ConfirmationButton_C.ButtonPushed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfirmationButton_C::ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationButton.ConfirmationButton_C.ButtonPushed__DelegateSignature");

	UConfirmationButton_C_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
