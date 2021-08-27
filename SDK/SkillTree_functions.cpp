
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

// Function SkillTree.SkillTree_C.IsBuying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillTree_C::IsBuying()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.IsBuying");

	USkillTree_C_IsBuying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.Get_InputBindingDisplays_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillTree_C::Get_InputBindingDisplays_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.Get_InputBindingDisplays_Visibility_1");

	USkillTree_C_Get_InputBindingDisplays_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.TutorialShowing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillTree_C::TutorialShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.TutorialShowing");

	USkillTree_C_TutorialShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.TryHideTutorialTip
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkillTree_C::TryHideTutorialTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.TryHideTutorialTip");

	USkillTree_C_TryHideTutorialTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillTree_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.GetVisibility_1");

	USkillTree_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.UpdateSafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTree_C::UpdateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.UpdateSafeZone");

	USkillTree_C_UpdateSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.UpdateSkillCostDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTree_C::UpdateSkillCostDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.UpdateSkillCostDisplay");

	USkillTree_C_UpdateSkillCostDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.SetEnableConfirmBuyPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::SetEnableConfirmBuyPopup(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.SetEnableConfirmBuyPopup");

	USkillTree_C_SetEnableConfirmBuyPopup_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.CheckTutorialState
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTree_C::CheckTutorialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.CheckTutorialState");

	USkillTree_C_CheckTutorialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.Get_BuySkillButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillTree_C::Get_BuySkillButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.Get_BuySkillButton_Visibility_1");

	USkillTree_C_Get_BuySkillButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillTree.SkillTree_C.SetupSkillCategories
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTree_C::SetupSkillCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.SetupSkillCategories");

	USkillTree_C_SetupSkillCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.Construct");

	USkillTree_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSkillChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGlimpseSkill**          Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkillAvailable                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkillBought                   (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::OnSkillChanged(class UGlimpseSkill** Skill, bool* bSkillAvailable, bool* bSkillBought)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSkillChanged");

	USkillTree_C_OnSkillChanged_Params params;
	params.Skill = Skill;
	params.bSkillAvailable = bSkillAvailable;
	params.bSkillBought = bSkillBought;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillTree_C::BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	USkillTree_C_BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSkillPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           SkillPoints                    (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::OnSkillPointsChanged(int* SkillPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSkillPointsChanged");

	USkillTree_C_OnSkillPointsChanged_Params params;
	params.SkillPoints = SkillPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSkillBought
// (Event, Protected, BlueprintEvent)

void USkillTree_C::OnSkillBought()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSkillBought");

	USkillTree_C_OnSkillBought_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSkillMenuShown
// (Event, Protected, BlueprintEvent)

void USkillTree_C::OnSkillMenuShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSkillMenuShown");

	USkillTree_C_OnSkillMenuShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnViewportResize_Event_1");

	USkillTree_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillTree_C::BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature");

	USkillTree_C_BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillTree_C::BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature");

	USkillTree_C_BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillTree_C::BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature");

	USkillTree_C_BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillTree_C::BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature");

	USkillTree_C_BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSetEnableBuy
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::OnSetEnableBuy(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSetEnableBuy");

	USkillTree_C_OnSetEnableBuy_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.OnSkillChangedBlueprintCall
// (BlueprintCallable, BlueprintEvent)

void USkillTree_C::OnSkillChangedBlueprintCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.OnSkillChangedBlueprintCall");

	USkillTree_C_OnSkillChangedBlueprintCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTree.SkillTree_C.ExecuteUbergraph_SkillTree
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillTree_C::ExecuteUbergraph_SkillTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTree.SkillTree_C.ExecuteUbergraph_SkillTree");

	USkillTree_C_ExecuteUbergraph_SkillTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
