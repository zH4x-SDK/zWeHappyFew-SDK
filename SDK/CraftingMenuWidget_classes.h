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

// WidgetBlueprintGeneratedClass CraftingMenuWidget.CraftingMenuWidget_C
// 0x0238 (0x10D8 - 0x0EA0)
class UCraftingMenuWidget_C : public UGlimpseCraftingMenu
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0EA0(0x0238) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingMenuWidget.CraftingMenuWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_InputBindingDisplays_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_TutorialCategoryGlow_Visibility_1();
	bool HideCraftingTutorial(struct FName* TutorialKey);
	void UpdateSafeZone();
	struct FText GetCraftingProgress();
	TEnumAsByte<ESlateVisibility> Get_RecipeStatusEffectSizeBox_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_RecipeSpecSizeBox_Visibility_1();
	void UpdateCategoryButtons(TEnumAsByte<EPickupCategory> NewCategory);
	void Construct();
	void BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void OnCategoryChanged(TEnumAsByte<EPickupCategory>* Category);
	void BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature();
	void OnSetCanCraft(bool* bCanCraft, bool* bWarning, struct FText* CraftError);
	void OnCraftingError();
	void OnItemChanged(struct FText* ItemName, int* AmountInInventory);
	void BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ShowCraftingTutorial(struct FName* TutorialKey);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature();
	void BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature();
	void OnCraftingSuccess(struct FName* RecipeKey);
	void ExecuteUbergraph_CraftingMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
