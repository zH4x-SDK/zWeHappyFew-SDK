
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

// Function ActionDurationWidget.ActionDurationWidget_C.Get_StatusEffectsWarningText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::Get_StatusEffectsWarningText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.Get_StatusEffectsWarningText_Visibility_1");

	UActionDurationWidget_C_Get_StatusEffectsWarningText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::Get_CurfewWarningText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Visibility_1");

	UActionDurationWidget_C_Get_CurfewWarningText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UActionDurationWidget_C::Get_CurfewWarningText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Text_1");

	UActionDurationWidget_C_Get_CurfewWarningText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.IsFastTravelActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::IsFastTravelActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.IsFastTravelActive");

	UActionDurationWidget_C_IsFastTravelActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutcomeValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          WarningThreshold               (Parm, ZeroConstructor, IsPlainOldData)
// class UProgressBar*            ProgressBar                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              ValueText                      (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::UpdateStatDisplay(float OutcomeValue, float WarningThreshold, class UProgressBar* ProgressBar, class UTextBlock* ValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatDisplay");

	UActionDurationWidget_C_UpdateStatDisplay_Params params;
	params.OutcomeValue = OutcomeValue;
	params.WarningThreshold = WarningThreshold;
	params.ProgressBar = ProgressBar;
	params.ValueText = ValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WarningPopUpVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionDurationPresenter* Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WarningPopUpVisibility(class UActionDurationPresenter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WarningPopUpVisibility");

	UActionDurationWidget_C_WarningPopUpVisibility_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetCurrentPercentageFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DrugFill                       (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::GetCurrentPercentageFill(float DrugFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetCurrentPercentageFill");

	UActionDurationWidget_C_GetCurrentPercentageFill_Params params;
	params.DrugFill = DrugFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.MouseAndKeyboardVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::MouseAndKeyboardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.MouseAndKeyboardVisibility");

	UActionDurationWidget_C_MouseAndKeyboardVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.Get_BabyParent_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::Get_BabyParent_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.Get_BabyParent_Visibility_1");

	UActionDurationWidget_C_Get_BabyParent_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WillBabyKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WillBabyKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WillBabyKill");

	UActionDurationWidget_C_WillBabyKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WillBloodSugarKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WillBloodSugarKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WillBloodSugarKill");

	UActionDurationWidget_C_WillBloodSugarKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetBabySkullVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::GetBabySkullVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetBabySkullVisibility");

	UActionDurationWidget_C_GetBabySkullVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetBloodSugarSkullVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::GetBloodSugarSkullVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetBloodSugarSkullVisibility");

	UActionDurationWidget_C_GetBloodSugarSkullVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.CanStatKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESurvivalNeed>     Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanKill                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::CanStatKill(TEnumAsByte<ESurvivalNeed> Stat, bool* CanKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.CanStatKill");

	UActionDurationWidget_C_CanStatKill_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanKill != nullptr)
		*CanKill = params.CanKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESurvivalNeed>     Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         RelatedWidgets                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActionDurationWidget_C::UpdateStatVisibility(TEnumAsByte<ESurvivalNeed> Stat, TArray<class UWidget*>* RelatedWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatVisibility");

	UActionDurationWidget_C_UpdateStatVisibility_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelatedWidgets != nullptr)
		*RelatedWidgets = params.RelatedWidgets;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatIconGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::UpdateStatIconGlow(class UImage* Icon, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatIconGlow");

	UActionDurationWidget_C_UpdateStatIconGlow_Params params;
	params.Icon = Icon;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.CanFoodPoisoningKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionDurationPresenter* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanKill                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::CanFoodPoisoningKill(class UActionDurationPresenter* Target, bool* CanKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.CanFoodPoisoningKill");

	UActionDurationWidget_C_CanFoodPoisoningKill_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanKill != nullptr)
		*CanKill = params.CanKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetAdjustTimeInputVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::GetAdjustTimeInputVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetAdjustTimeInputVisibility");

	UActionDurationWidget_C_GetAdjustTimeInputVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatPercentages
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdateStatPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatPercentages");

	UActionDurationWidget_C_UpdateStatPercentages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateAll
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateAll");

	UActionDurationWidget_C_UpdateAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateAcceptButton
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdateAcceptButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateAcceptButton");

	UActionDurationWidget_C_UpdateAcceptButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WillThirstKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WillThirstKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WillThirstKill");

	UActionDurationWidget_C_WillThirstKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WillHungerKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WillHungerKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WillHungerKill");

	UActionDurationWidget_C_WillHungerKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WillHealthKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WillHealthKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WillHealthKill");

	UActionDurationWidget_C_WillHealthKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.WIllSleepKill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WillKill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::WIllSleepKill(bool* WillKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.WIllSleepKill");

	UActionDurationWidget_C_WIllSleepKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillKill != nullptr)
		*WillKill = params.WillKill;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdatePendingDeath
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdatePendingDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdatePendingDeath");

	UActionDurationWidget_C_UpdatePendingDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatusEffectDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdateStatusEffectDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatusEffectDisplay");

	UActionDurationWidget_C_UpdateStatusEffectDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetJoyPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UActionDurationWidget_C::GetJoyPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetJoyPercentageText");

	UActionDurationWidget_C_GetJoyPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetJoySkullVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UActionDurationWidget_C::GetJoySkullVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetJoySkullVisibility");

	UActionDurationWidget_C_GetJoySkullVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.UpdateDurationDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionDurationWidget_C::UpdateDurationDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.UpdateDurationDisplay");

	UActionDurationWidget_C_UpdateDurationDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.IncrementTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IncrementHours                 (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::IncrementTime(float IncrementHours)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.IncrementTime");

	UActionDurationWidget_C_IncrementTime_Params params;
	params.IncrementHours = IncrementHours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetHealthPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UActionDurationWidget_C::GetHealthPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetHealthPercentageText");

	UActionDurationWidget_C_GetHealthPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.GetSleepPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UActionDurationWidget_C::GetSleepPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.GetSleepPercentageText");

	UActionDurationWidget_C_GetSleepPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionDurationWidget.ActionDurationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionDurationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.Construct");

	UActionDurationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionDurationWidget_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UActionDurationWidget_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionDurationWidget_C::BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UActionDurationWidget_C_BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.OnActionSetup
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InTitleText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  InAcceptButtonText             (ConstParm, Parm, OutParm, ReferenceParm)

void UActionDurationWidget_C::OnActionSetup(struct FText* InTitleText, struct FText* InAcceptButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.OnActionSetup");

	UActionDurationWidget_C_OnActionSetup_Params params;
	params.InTitleText = InTitleText;
	params.InAcceptButtonText = InAcceptButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionDurationWidget_C::BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature");

	UActionDurationWidget_C_BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionDurationWidget_C::BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature");

	UActionDurationWidget_C_BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.OnDurationChanged
// (Event, Public, BlueprintEvent)

void UActionDurationWidget_C::OnDurationChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.OnDurationChanged");

	UActionDurationWidget_C_OnDurationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionDurationWidget_C::BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature");

	UActionDurationWidget_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDurationWidget.ActionDurationWidget_C.ExecuteUbergraph_ActionDurationWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionDurationWidget_C::ExecuteUbergraph_ActionDurationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDurationWidget.ActionDurationWidget_C.ExecuteUbergraph_ActionDurationWidget");

	UActionDurationWidget_C_ExecuteUbergraph_ActionDurationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
