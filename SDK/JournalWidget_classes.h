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

// WidgetBlueprintGeneratedClass JournalWidget.JournalWidget_C
// 0x0290 (0x0E00 - 0x0B70)
class UJournalWidget_C : public UGlimpseJournalMenu
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x0B70(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalWidget.JournalWidget_C");
		return ptr;
	}


	void Get_Reward_BG(TEnumAsByte<EQuestStatus> QuestStatus, struct FSlateColor* FGColor);
	void Get_Reward_FG(TEnumAsByte<EQuestStatus> QuestStatus, struct FSlateColor* FGColor);
	TEnumAsByte<ESlateVisibility> IsTutorialShowing();
	TEnumAsByte<ESlateVisibility> IsPrimaryCategoryActive();
	void UpdateSafeZone();
	void SetImageColorOld(class UImage* Image, const struct FSlateColor& Color);
	void UpdateCategoryButtons(TEnumAsByte<EQuestListCategory> NewCategory);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
	void BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
	void BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature();
	void OnQuestListCategoryChanged(TEnumAsByte<EQuestListCategory>* Category);
	void OnSetQuestData(struct FText* InJournalTitle, float* QuestProgress, TEnumAsByte<EQuestStatus>* QuestStatus, int* NumSkillPoints, int* NumCurrency, bool* bHasLoot);
	void OnPrimaryListEnabled(bool* bInEnabled);
	void OnSecondaryListEnabled(bool* bInEnabled);
	void OnLoreListEnabled(bool* bInEnabled);
	void OnShowTutorial(struct FName* TutorialKey);
	void OnHideTutorial(struct FName* TutorialKey);
	void BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature();
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature();
	void ExecuteUbergraph_JournalWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
