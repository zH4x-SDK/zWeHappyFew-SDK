
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

// Function NewGameStartButton.NewGameStartButton_C.SetActiveOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActiveOption                 (Parm, ZeroConstructor, IsPlainOldData)

void UNewGameStartButton_C::SetActiveOption(bool IsActiveOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.SetActiveOption");

	UNewGameStartButton_C_SetActiveOption_Params params;
	params.IsActiveOption = IsActiveOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm)

void UNewGameStartButton_C::SetButtonText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.SetButtonText");

	UNewGameStartButton_C_SetButtonText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewGameStartButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.Construct");

	UNewGameStartButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewGameStartButton_C::BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UNewGameStartButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.OnSetActiveOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UNewGameStartButton_C::OnSetActiveOption(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.OnSetActiveOption");

	UNewGameStartButton_C_OnSetActiveOption_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNewGameStartButton_C::BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UNewGameStartButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.ExecuteUbergraph_NewGameStartButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewGameStartButton_C::ExecuteUbergraph_NewGameStartButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.ExecuteUbergraph_NewGameStartButton");

	UNewGameStartButton_C_ExecuteUbergraph_NewGameStartButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewGameStartButton.NewGameStartButton_C.OnClickedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNewGameStartButton_C::OnClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewGameStartButton.NewGameStartButton_C.OnClickedEvent__DelegateSignature");

	UNewGameStartButton_C_OnClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
