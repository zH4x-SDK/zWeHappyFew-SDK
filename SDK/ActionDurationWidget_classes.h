#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ActionDurationWidget.ActionDurationWidget_C
// 0x01E0 (0x0880 - 0x06A0)
class UActionDurationWidget_C : public UActionDurationWidget
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x06A0(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActionDurationWidget.ActionDurationWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_StatusEffectsWarningText_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_CurfewWarningText_Visibility_1();
	struct FText Get_CurfewWarningText_Text_1();
	TEnumAsByte<ESlateVisibility> IsFastTravelActive();
	void UpdateStatDisplay(float OutcomeValue, float WarningThreshold, class UProgressBar* ProgressBar, class UTextBlock* ValueText);
	void WarningPopUpVisibility(class UActionDurationPresenter* Target);
	void GetCurrentPercentageFill(float DrugFill);
	TEnumAsByte<ESlateVisibility> MouseAndKeyboardVisibility();
	TEnumAsByte<ESlateVisibility> Get_BabyParent_Visibility_1();
	void WillBabyKill(bool* WillKill);
	void WillBloodSugarKill(bool* WillKill);
	TEnumAsByte<ESlateVisibility> GetBabySkullVisibility();
	TEnumAsByte<ESlateVisibility> GetBloodSugarSkullVisibility();
	void CanStatKill(TEnumAsByte<ESurvivalNeed> Stat, bool* CanKill);
	void UpdateStatVisibility(TEnumAsByte<ESurvivalNeed> Stat, TArray<class UWidget*>* RelatedWidgets);
	void UpdateStatIconGlow(class UImage* Icon, float Percent);
	void CanFoodPoisoningKill(class UActionDurationPresenter* Target, bool* CanKill);
	TEnumAsByte<ESlateVisibility> GetAdjustTimeInputVisibility();
	void UpdateStatPercentages();
	void UpdateAll();
	void UpdateAcceptButton();
	void WillThirstKill(bool* WillKill);
	void WillHungerKill(bool* WillKill);
	void WillHealthKill(bool* WillKill);
	void WIllSleepKill(bool* WillKill);
	void UpdatePendingDeath();
	void UpdateStatusEffectDisplay();
	struct FText GetJoyPercentageText();
	TEnumAsByte<ESlateVisibility> GetJoySkullVisibility();
	void UpdateDurationDisplay();
	void IncrementTime(float IncrementHours);
	struct FText GetHealthPercentageText();
	struct FText GetSleepPercentageText();
	void Construct();
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_34_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void OnActionSetup(struct FText* InTitleText, struct FText* InAcceptButtonText);
	void BndEvt__DecrementTimeButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IncrementTimeButton_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature();
	void OnDurationChanged();
	void BndEvt__Button_11_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ActionDurationWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
