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

// WidgetBlueprintGeneratedClass InventorySubMenu.InventorySubMenu_C
// 0x07B0 (0x11C0 - 0x0A10)
class UInventorySubMenu_C : public UGlimpseInventoryMenu
{
public:
	unsigned char                                      UnknownData00[0x7B0];                                     // 0x0A10(0x07B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventorySubMenu.InventorySubMenu_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> IsStashTipempty();
	struct FText GetPneumaticTip();
	void SetAllTabActive();
	TEnumAsByte<ESlateVisibility> Get_SwitchInventoryDisplay_Visibility_1();
	TEnumAsByte<ESlateVisibility> GetSubCategorySwitchPromptVisibility();
	TEnumAsByte<ESlateVisibility> Get_HorizontalBox_24_Visibility_1();
	void UpdateBuySellTransactionButton();
	TEnumAsByte<ESlateVisibility> Get_InputBindingStash_Visibility_1();
	TEnumAsByte<ESlateVisibility> GetVisibility_SwitchViewedItemsButton();
	TEnumAsByte<ESlateVisibility> Get_MoveCraftingBindings_Visibility_1();
	TEnumAsByte<ESlateVisibility> IsVendingMachineShowing();
	TEnumAsByte<ESlateVisibility> IsContainerVisible();
	void ResetBackgroundsAndSilhouettes();
	void CallingQuickslotDisplay();
	void SetBarterSilhouette();
	void SetPlayerSilhouette();
	void SetContainerSilhouette();
	void UpdateSafeZone();
	struct FText GetBuySell();
	TEnumAsByte<ESlateVisibility> Get_InputBindingDisplaysInventory_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_InputBindingBarter_Visibility_1();
	struct FText Get_TextBlock_10_Text_1();
	TEnumAsByte<ESlateVisibility> GetCancelBindingVisibility();
	float Get_EncumberanceBar_Percent_1();
	void UpdateCanBuySellDisplay();
	void SetSortByActive();
	void SetBackgroundImage();
	struct FText GetSwitchItemsText();
	TEnumAsByte<ESlateVisibility> Get_SwitchItems_Visibility();
	TEnumAsByte<ESlateVisibility> Get_DropText_Visibility();
	TEnumAsByte<ESlateVisibility> Get_HorizontalBox_0_Visibility_1();
	void UpdateConsumablePanelMode();
	void MoneyShiftComplete();
	void ResetBarterTill();
	void MoveBarterTill(float New_Amount, float Previous_Amount);
	void MovePlayerMoney();
	void UpdateCategoryDisplay();
	struct FLinearColor Get_Fill_Color_and_Opacity_0();
	void ShowHighlightOnSelectedEquipSlots();
	void IsSelectedItemInPlayersItems(bool* IsInItems);
	struct FText GetPlayerInventoryWeightText();
	class AGlimpsePlayerController* OnGetPlayerController_1();
	struct FText GetCurrencyTotalText();
	float Get_WeightBar_Percent_1();
	void HookUpClassVariables();
	void Construct();
	void OnMenuShown();
	void OnPlayerItemsShown();
	void OnBarterItemsShown();
	void OnContainerItemsShown();
	void OnBarterCharacterCurrencyChanged(float* PreviousAmount, float* NewAmount);
	void OnNoItemsInPlayerInventory();
	void OnNoItemsInContainer();
	void OnNoItemsInBarter();
	void OnShowError(struct FText* ErrorMsg);
	void OnHideEmptyMessage();
	void BndEvt__CategoryButton_ALL_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonFood_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonQuest_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonTools_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonWear_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void OnPlayerCurrencyChanged(float* PreviousAmount, float* NewAmount);
	void BndEvt__BuySellButton_Widget_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature();
	void OnCategoryChanged();
	void OnPlayerWeightChanged(float* PreviousAmount, float* NewAmount);
	void BndEvt__SortBY_Toggle_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
	void OnSelectedItemChanged(bool* transactionPossible);
	void OnSort();
	void OnSetContainerImage();
	void OnSetCharacterImage();
	void BndEvt__Sell_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__Buy_Button_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_146_OnPressed__DelegateSignature();
	void BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_167_OnReleased__DelegateSignature();
	void OnTransactionInputChanged(bool* Pressed);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__Category_Button_Drugs_K2Node_ComponentBoundEvent_140_OnClicked__DelegateSignature();
	void BndEvt__Category_Button_Crafting_K2Node_ComponentBoundEvent_177_OnClicked__DelegateSignature();
	void BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_112_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_622_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_651_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_814_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_881_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_InventorySubMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
