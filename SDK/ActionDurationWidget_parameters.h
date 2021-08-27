#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ActionDurationWidget.ActionDurationWidget_C.Get_StatusEffectsWarningText_Visibility_1
struct UActionDurationWidget_C_Get_StatusEffectsWarningText_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Visibility_1
struct UActionDurationWidget_C_Get_CurfewWarningText_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.Get_CurfewWarningText_Text_1
struct UActionDurationWidget_C_Get_CurfewWarningText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.IsFastTravelActive
struct UActionDurationWidget_C_IsFastTravelActive_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatDisplay
struct UActionDurationWidget_C_UpdateStatDisplay_Params
{
	float                                              OutcomeValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WarningThreshold;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                ProgressBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ValueText;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WarningPopUpVisibility
struct UActionDurationWidget_C_WarningPopUpVisibility_Params
{
	class UActionDurationPresenter*                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetCurrentPercentageFill
struct UActionDurationWidget_C_GetCurrentPercentageFill_Params
{
	float                                              DrugFill;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.MouseAndKeyboardVisibility
struct UActionDurationWidget_C_MouseAndKeyboardVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.Get_BabyParent_Visibility_1
struct UActionDurationWidget_C_Get_BabyParent_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WillBabyKill
struct UActionDurationWidget_C_WillBabyKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WillBloodSugarKill
struct UActionDurationWidget_C_WillBloodSugarKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetBabySkullVisibility
struct UActionDurationWidget_C_GetBabySkullVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetBloodSugarSkullVisibility
struct UActionDurationWidget_C_GetBloodSugarSkullVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.CanStatKill
struct UActionDurationWidget_C_CanStatKill_Params
{
	TEnumAsByte<ESurvivalNeed>                         Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanKill;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatVisibility
struct UActionDurationWidget_C_UpdateStatVisibility_Params
{
	TEnumAsByte<ESurvivalNeed>                         Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             RelatedWidgets;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatIconGlow
struct UActionDurationWidget_C_UpdateStatIconGlow_Params
{
	class UImage*                                      Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.CanFoodPoisoningKill
struct UActionDurationWidget_C_CanFoodPoisoningKill_Params
{
	class UActionDurationPresenter*                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanKill;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetAdjustTimeInputVisibility
struct UActionDurationWidget_C_GetAdjustTimeInputVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatPercentages
struct UActionDurationWidget_C_UpdateStatPercentages_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateAll
struct UActionDurationWidget_C_UpdateAll_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateAcceptButton
struct UActionDurationWidget_C_UpdateAcceptButton_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.WillThirstKill
struct UActionDurationWidget_C_WillThirstKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WillHungerKill
struct UActionDurationWidget_C_WillHungerKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WillHealthKill
struct UActionDurationWidget_C_WillHealthKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.WIllSleepKill
struct UActionDurationWidget_C_WIllSleepKill_Params
{
	bool                                               WillKill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdatePendingDeath
struct UActionDurationWidget_C_UpdatePendingDeath_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateStatusEffectDisplay
struct UActionDurationWidget_C_UpdateStatusEffectDisplay_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetJoyPercentageText
struct UActionDurationWidget_C_GetJoyPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetJoySkullVisibility
struct UActionDurationWidget_C_GetJoySkullVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.UpdateDurationDisplay
struct UActionDurationWidget_C_UpdateDurationDisplay_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.IncrementTime
struct UActionDurationWidget_C_IncrementTime_Params
{
	float                                              IncrementHours;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetHealthPercentageText
struct UActionDurationWidget_C_GetHealthPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.GetSleepPercentageText
struct UActionDurationWidget_C_GetSleepPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.Construct
struct UActionDurationWidget_C_Construct_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UActionDurationWidget_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UActionDurationWidget_C_BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.OnActionSetup
struct UActionDurationWidget_C_OnActionSetup_Params
{
	struct FText*                                      InTitleText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      InAcceptButtonText;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature
struct UActionDurationWidget_C_BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature
struct UActionDurationWidget_C_BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.OnDurationChanged
struct UActionDurationWidget_C_OnDurationChanged_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature
struct UActionDurationWidget_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ActionDurationWidget.ActionDurationWidget_C.ExecuteUbergraph_ActionDurationWidget
struct UActionDurationWidget_C_ExecuteUbergraph_ActionDurationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
