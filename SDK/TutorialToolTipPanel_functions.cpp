
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

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetKeyboardVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UTutorialToolTipPanel_C::GetKeyboardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetKeyboardVisibility");

	UTutorialToolTipPanel_C_GetKeyboardVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetControllerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UTutorialToolTipPanel_C::GetControllerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetControllerVisibility");

	UTutorialToolTipPanel_C_GetControllerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.On_Gamepad_TutorialText_GetPlayerController_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlimpsePlayerController* UTutorialToolTipPanel_C::On_Gamepad_TutorialText_GetPlayerController_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.On_Gamepad_TutorialText_GetPlayerController_1");

	UTutorialToolTipPanel_C_On_Gamepad_TutorialText_GetPlayerController_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.Get_Title_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutorialToolTipPanel_C::Get_Title_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.Get_Title_Text_1");

	UTutorialToolTipPanel_C_Get_Title_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialToolTipPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.Construct");

	UTutorialToolTipPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void UTutorialToolTipPanel_C::BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature");

	UTutorialToolTipPanel_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToolTipPanel.TutorialToolTipPanel_C.ExecuteUbergraph_TutorialToolTipPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTutorialToolTipPanel_C::ExecuteUbergraph_TutorialToolTipPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToolTipPanel.TutorialToolTipPanel_C.ExecuteUbergraph_TutorialToolTipPanel");

	UTutorialToolTipPanel_C_ExecuteUbergraph_TutorialToolTipPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
