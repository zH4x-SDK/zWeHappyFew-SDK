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

// WidgetBlueprintGeneratedClass SkillTree.SkillTree_C
// 0x01D8 (0x0A88 - 0x08B0)
class USkillTree_C : public UGlimpseSkillTreeMenu
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x08B0(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree.SkillTree_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> IsBuying();
	TEnumAsByte<ESlateVisibility> Get_InputBindingDisplays_Visibility_1();
	TEnumAsByte<ESlateVisibility> TutorialShowing();
	bool TryHideTutorialTip();
	TEnumAsByte<ESlateVisibility> GetVisibility_1();
	void UpdateSafeZone();
	void UpdateSkillCostDisplay();
	void SetEnableConfirmBuyPopup(bool Enable);
	void CheckTutorialState();
	TEnumAsByte<ESlateVisibility> Get_BuySkillButton_Visibility_1();
	void SetupSkillCategories();
	void Construct();
	void OnSkillChanged(class UGlimpseSkill** Skill, bool* bSkillAvailable, bool* bSkillBought);
	void BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void OnSkillPointsChanged(int* SkillPoints);
	void OnSkillBought();
	void OnSkillMenuShown();
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature();
	void BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature();
	void BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature();
	void BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature();
	void OnSetEnableBuy(bool* bEnable);
	void OnSkillChangedBlueprintCall();
	void ExecuteUbergraph_SkillTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
