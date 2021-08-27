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

// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// 0x029C (0x0A6C - 0x07D0)
class UStatusWidget_C : public UGlimpseStatusMenu
{
public:
	unsigned char                                      UnknownData00[0x29C];                                     // 0x07D0(0x029C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C");
		return ptr;
	}


	struct FText Get_ThirstDurationSeconds_Text_1();
	struct FText Get_ThirstDurationMinutes_Text_1();
	struct FText Get_HungerDurationSeconds_Text_1();
	struct FText Get_HungerDurationMinutes_Text_1();
	struct FText Get_SleepDurationMinute_Text_2();
	struct FText Get_SleepDurationSeconds_Text_1();
	struct FText Get_SleepDurationMinute_Text_1();
	void SetGlowAnimation(int State);
	void UpdateSafeZone();
	void SetTextValueScale(float CurrentValue, float ValueScale, class UTextBlock* TextWidget);
	void UpdateEffectList(TEnumAsByte<EEffectListType> NewParam);
	void SetTextFraction(float CurrentValue, float MaxValue, class UTextBlock* TextWidget);
	void SetTextPercent(float CurrentValue, float MaxValue, class UTextBlock* TextWidget);
	void Construct();
	void OnHungerChanged(float* InCurrentValue, float* InTotalValue);
	void OnHealthChanged(float* InCurrentValue, float* InTotalValue);
	void OnDrugLevelChanged(float* InCurrentValue, float* InTotalValue);
	void OnCrashLevelChanged(float* CrashLevel);
	void OnThirstChanged(float* InCurrentValue, float* InTotalValue);
	void OnSleepChanged(float* InCurrentValue, float* InTotalValue);
	void OnEncumberanceChanged(float* InCurrentValue, float* InTotalValue);
	void OnArmorChanged(float* InCurrentValue);
	void OnMoveSpeedChanged(float* InCurrentValue, float* InMaxValue);
	void BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
	void OnEffectListChanged(TEnumAsByte<EEffectListType>* InListType);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void ExecuteUbergraph_StatusWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
