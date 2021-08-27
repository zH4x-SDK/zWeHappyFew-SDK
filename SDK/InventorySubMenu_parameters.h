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

// Function InventorySubMenu.InventorySubMenu_C.IsStashTipempty
struct UInventorySubMenu_C_IsStashTipempty_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.GetPneumaticTip
struct UInventorySubMenu_C_GetPneumaticTip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.SetAllTabActive
struct UInventorySubMenu_C_SetAllTabActive_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.Get_SwitchInventoryDisplay_Visibility_1
struct UInventorySubMenu_C_Get_SwitchInventoryDisplay_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.GetSubCategorySwitchPromptVisibility
struct UInventorySubMenu_C_GetSubCategorySwitchPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_HorizontalBox_24_Visibility_1
struct UInventorySubMenu_C_Get_HorizontalBox_24_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.UpdateBuySellTransactionButton
struct UInventorySubMenu_C_UpdateBuySellTransactionButton_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.Get_InputBindingStash_Visibility_1
struct UInventorySubMenu_C_Get_InputBindingStash_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.GetVisibility_SwitchViewedItemsButton
struct UInventorySubMenu_C_GetVisibility_SwitchViewedItemsButton_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_MoveCraftingBindings_Visibility_1
struct UInventorySubMenu_C_Get_MoveCraftingBindings_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.IsVendingMachineShowing
struct UInventorySubMenu_C_IsVendingMachineShowing_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.IsContainerVisible
struct UInventorySubMenu_C_IsContainerVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.ResetBackgroundsAndSilhouettes
struct UInventorySubMenu_C_ResetBackgroundsAndSilhouettes_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.CallingQuickslotDisplay
struct UInventorySubMenu_C_CallingQuickslotDisplay_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.SetBarterSilhouette
struct UInventorySubMenu_C_SetBarterSilhouette_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.SetPlayerSilhouette
struct UInventorySubMenu_C_SetPlayerSilhouette_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.SetContainerSilhouette
struct UInventorySubMenu_C_SetContainerSilhouette_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.UpdateSafeZone
struct UInventorySubMenu_C_UpdateSafeZone_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.GetBuySell
struct UInventorySubMenu_C_GetBuySell_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_InputBindingDisplaysInventory_Visibility_1
struct UInventorySubMenu_C_Get_InputBindingDisplaysInventory_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_InputBindingBarter_Visibility_1
struct UInventorySubMenu_C_Get_InputBindingBarter_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_TextBlock_10_Text_1
struct UInventorySubMenu_C_Get_TextBlock_10_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.GetCancelBindingVisibility
struct UInventorySubMenu_C_GetCancelBindingVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_EncumberanceBar_Percent_1
struct UInventorySubMenu_C_Get_EncumberanceBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.UpdateCanBuySellDisplay
struct UInventorySubMenu_C_UpdateCanBuySellDisplay_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.SetSortByActive
struct UInventorySubMenu_C_SetSortByActive_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.SetBackgroundImage
struct UInventorySubMenu_C_SetBackgroundImage_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.GetSwitchItemsText
struct UInventorySubMenu_C_GetSwitchItemsText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.Get SwitchItems Visibility
struct UInventorySubMenu_C_Get_SwitchItems_Visibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_DropText Visibility
struct UInventorySubMenu_C_Get_DropText_Visibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_HorizontalBox_0_Visibility_1
struct UInventorySubMenu_C_Get_HorizontalBox_0_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.UpdateConsumablePanelMode
struct UInventorySubMenu_C_UpdateConsumablePanelMode_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.MoneyShiftComplete
struct UInventorySubMenu_C_MoneyShiftComplete_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.ResetBarterTill
struct UInventorySubMenu_C_ResetBarterTill_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.MoveBarterTill
struct UInventorySubMenu_C_MoveBarterTill_Params
{
	float                                              New_Amount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Previous_Amount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.MovePlayerMoney
struct UInventorySubMenu_C_MovePlayerMoney_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.UpdateCategoryDisplay
struct UInventorySubMenu_C_UpdateCategoryDisplay_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.Get Fill Color and Opacity 0
struct UInventorySubMenu_C_Get_Fill_Color_and_Opacity_0_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.ShowHighlightOnSelectedEquipSlots
struct UInventorySubMenu_C_ShowHighlightOnSelectedEquipSlots_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.IsSelectedItemInPlayersItems
struct UInventorySubMenu_C_IsSelectedItemInPlayersItems_Params
{
	bool                                               IsInItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.GetPlayerInventoryWeightText
struct UInventorySubMenu_C_GetPlayerInventoryWeightText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.OnGetPlayerController_1
struct UInventorySubMenu_C_OnGetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.GetCurrencyTotalText
struct UInventorySubMenu_C_GetCurrencyTotalText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventorySubMenu.InventorySubMenu_C.Get_WeightBar_Percent_1
struct UInventorySubMenu_C_Get_WeightBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.HookUpClassVariables
struct UInventorySubMenu_C_HookUpClassVariables_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.Construct
struct UInventorySubMenu_C_Construct_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnMenuShown
struct UInventorySubMenu_C_OnMenuShown_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnPlayerItemsShown
struct UInventorySubMenu_C_OnPlayerItemsShown_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnBarterItemsShown
struct UInventorySubMenu_C_OnBarterItemsShown_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnContainerItemsShown
struct UInventorySubMenu_C_OnContainerItemsShown_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnBarterCharacterCurrencyChanged
struct UInventorySubMenu_C_OnBarterCharacterCurrencyChanged_Params
{
	float*                                             PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.OnNoItemsInPlayerInventory
struct UInventorySubMenu_C_OnNoItemsInPlayerInventory_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnNoItemsInContainer
struct UInventorySubMenu_C_OnNoItemsInContainer_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnNoItemsInBarter
struct UInventorySubMenu_C_OnNoItemsInBarter_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnShowError
struct UInventorySubMenu_C_OnShowError_Params
{
	struct FText*                                      ErrorMsg;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function InventorySubMenu.InventorySubMenu_C.OnHideEmptyMessage
struct UInventorySubMenu_C_OnHideEmptyMessage_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButton_ALL_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButton_ALL_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonFood_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonFood_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonQuest_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonQuest_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonTools_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonTools_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__CategoryButtonWear_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__CategoryButtonWear_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnPlayerCurrencyChanged
struct UInventorySubMenu_C_OnPlayerCurrencyChanged_Params
{
	float*                                             PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__BuySellButton_Widget_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__BuySellButton_Widget_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnCategoryChanged
struct UInventorySubMenu_C_OnCategoryChanged_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnPlayerWeightChanged
struct UInventorySubMenu_C_OnPlayerWeightChanged_Params
{
	float*                                             PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__SortBY_Toggle_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__SortBY_Toggle_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnSelectedItemChanged
struct UInventorySubMenu_C_OnSelectedItemChanged_Params
{
	bool*                                              transactionPossible;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.OnSort
struct UInventorySubMenu_C_OnSort_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnSetContainerImage
struct UInventorySubMenu_C_OnSetContainerImage_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnSetCharacterImage
struct UInventorySubMenu_C_OnSetCharacterImage_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Sell_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Sell_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Buy_Button_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Buy_Button_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_146_OnPressed__DelegateSignature
struct UInventorySubMenu_C_BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_146_OnPressed__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_167_OnReleased__DelegateSignature
struct UInventorySubMenu_C_BndEvt__BuySellTransactionButton_K2Node_ComponentBoundEvent_167_OnReleased__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.OnTransactionInputChanged
struct UInventorySubMenu_C_OnTransactionInputChanged_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.OnViewportResize_Event_1
struct UInventorySubMenu_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Category_Button_Drugs_K2Node_ComponentBoundEvent_140_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Category_Button_Drugs_K2Node_ComponentBoundEvent_140_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Category_Button_Crafting_K2Node_ComponentBoundEvent_177_OnClicked__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Category_Button_Crafting_K2Node_ComponentBoundEvent_177_OnClicked__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_112_OnButtonReleasedEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_PlaceAll_K2Node_ComponentBoundEvent_112_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_622_OnButtonHoverEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_622_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_651_OnButtonHoverEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_651_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_814_OnButtonPressedEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_814_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_881_OnButtonReleasedEvent__DelegateSignature
struct UInventorySubMenu_C_BndEvt__Button_SwitchItemViewed_K2Node_ComponentBoundEvent_881_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function InventorySubMenu.InventorySubMenu_C.ExecuteUbergraph_InventorySubMenu
struct UInventorySubMenu_C_ExecuteUbergraph_InventorySubMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
