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

// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_InputBindingDisplays_Visibility_1
struct UCraftingMenuWidget_C_Get_InputBindingDisplays_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_TutorialCategoryGlow_Visibility_1
struct UCraftingMenuWidget_C_Get_TutorialCategoryGlow_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.HideCraftingTutorial
struct UCraftingMenuWidget_C_HideCraftingTutorial_Params
{
	struct FName*                                      TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateSafeZone
struct UCraftingMenuWidget_C_UpdateSafeZone_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.GetCraftingProgress
struct UCraftingMenuWidget_C_GetCraftingProgress_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeStatusEffectSizeBox_Visibility_1
struct UCraftingMenuWidget_C_Get_RecipeStatusEffectSizeBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeSpecSizeBox_Visibility_1
struct UCraftingMenuWidget_C_Get_RecipeSpecSizeBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateCategoryButtons
struct UCraftingMenuWidget_C_UpdateCategoryButtons_Params
{
	TEnumAsByte<EPickupCategory>                       NewCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.Construct
struct UCraftingMenuWidget_C_Construct_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCategoryChanged
struct UCraftingMenuWidget_C_OnCategoryChanged_Params
{
	TEnumAsByte<EPickupCategory>*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnSetCanCraft
struct UCraftingMenuWidget_C_OnSetCanCraft_Params
{
	bool*                                              bCanCraft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWarning;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      CraftError;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingError
struct UCraftingMenuWidget_C_OnCraftingError_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnItemChanged
struct UCraftingMenuWidget_C_OnItemChanged_Params
{
	struct FText*                                      ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               AmountInInventory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.Tick
struct UCraftingMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.ShowCraftingTutorial
struct UCraftingMenuWidget_C_ShowCraftingTutorial_Params
{
	struct FName*                                      TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnViewportResize_Event_1
struct UCraftingMenuWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature
struct UCraftingMenuWidget_C_BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature_Params
{
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingSuccess
struct UCraftingMenuWidget_C_OnCraftingSuccess_Params
{
	struct FName*                                      RecipeKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingMenuWidget.CraftingMenuWidget_C.ExecuteUbergraph_CraftingMenuWidget
struct UCraftingMenuWidget_C_ExecuteUbergraph_CraftingMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
