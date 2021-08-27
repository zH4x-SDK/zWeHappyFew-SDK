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

// Function SkillTree.SkillTree_C.IsBuying
struct USkillTree_C_IsBuying_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.Get_InputBindingDisplays_Visibility_1
struct USkillTree_C_Get_InputBindingDisplays_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.TutorialShowing
struct USkillTree_C_TutorialShowing_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.TryHideTutorialTip
struct USkillTree_C_TryHideTutorialTip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.GetVisibility_1
struct USkillTree_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.UpdateSafeZone
struct USkillTree_C_UpdateSafeZone_Params
{
};

// Function SkillTree.SkillTree_C.UpdateSkillCostDisplay
struct USkillTree_C_UpdateSkillCostDisplay_Params
{
};

// Function SkillTree.SkillTree_C.SetEnableConfirmBuyPopup
struct USkillTree_C_SetEnableConfirmBuyPopup_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.CheckTutorialState
struct USkillTree_C_CheckTutorialState_Params
{
};

// Function SkillTree.SkillTree_C.Get_BuySkillButton_Visibility_1
struct USkillTree_C_Get_BuySkillButton_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.SetupSkillCategories
struct USkillTree_C_SetupSkillCategories_Params
{
};

// Function SkillTree.SkillTree_C.Construct
struct USkillTree_C_Construct_Params
{
};

// Function SkillTree.SkillTree_C.OnSkillChanged
struct USkillTree_C_OnSkillChanged_Params
{
	class UGlimpseSkill**                              Skill;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkillAvailable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkillBought;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct USkillTree_C_BndEvt__BuySkillButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SkillTree.SkillTree_C.OnSkillPointsChanged
struct USkillTree_C_OnSkillPointsChanged_Params
{
	int*                                               SkillPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.OnSkillBought
struct USkillTree_C_OnSkillBought_Params
{
};

// Function SkillTree.SkillTree_C.OnSkillMenuShown
struct USkillTree_C_OnSkillMenuShown_Params
{
};

// Function SkillTree.SkillTree_C.OnViewportResize_Event_1
struct USkillTree_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature
struct USkillTree_C_BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_9_BuyButtonPushed__DelegateSignature_Params
{
};

// Function SkillTree.SkillTree_C.BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature
struct USkillTree_C_BndEvt__SkillDescriptionPanel_K2Node_ComponentBoundEvent_10_CancelButtonPushed__DelegateSignature_Params
{
};

// Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature
struct USkillTree_C_BndEvt__ConfirmationButton_21_K2Node_ComponentBoundEvent_11_ButtonPushed__DelegateSignature_Params
{
};

// Function SkillTree.SkillTree_C.BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
struct USkillTree_C_BndEvt__ConfirmationButton_C_2_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params
{
};

// Function SkillTree.SkillTree_C.OnSetEnableBuy
struct USkillTree_C_OnSetEnableBuy_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTree.SkillTree_C.OnSkillChangedBlueprintCall
struct USkillTree_C_OnSkillChangedBlueprintCall_Params
{
};

// Function SkillTree.SkillTree_C.ExecuteUbergraph_SkillTree
struct USkillTree_C_ExecuteUbergraph_SkillTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
