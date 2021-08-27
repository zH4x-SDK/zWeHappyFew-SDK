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

// Function SkillDescription.SkillDescription_C.GetControllerVisibility
struct USkillDescription_C_GetControllerVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.GetPopUp
struct USkillDescription_C_GetPopUp_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.Get_SkillInfoNameFinal_Text_1
struct USkillDescription_C_Get_SkillInfoNameFinal_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillDescription.SkillDescription_C.Get_SkillInfoName_Text_1
struct USkillDescription_C_Get_SkillInfoName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillDescription.SkillDescription_C.GetInfoSpecsPanel
struct USkillDescription_C_GetInfoSpecsPanel_Params
{
	class UVerticalBox*                                Panel;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.Get_SkillInfoDescFinal_Text_1
struct USkillDescription_C_Get_SkillInfoDescFinal_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillDescription.SkillDescription_C.Get_SkillInfoDesc_Text_1
struct USkillDescription_C_Get_SkillInfoDesc_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillDescription.SkillDescription_C.UpdateDescriptionPanel
struct USkillDescription_C_UpdateDescriptionPanel_Params
{
	class UGlimpseSkill*                               Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DescriptionNew;                                           // (Parm)
	struct FText                                       DescriptionOld;                                           // (Parm)
};

// Function SkillDescription.SkillDescription_C.Construct
struct USkillDescription_C_Construct_Params
{
};

// Function SkillDescription.SkillDescription_C.Tick
struct USkillDescription_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.OnAnimationFinished
struct USkillDescription_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.OnAnimationStarted
struct USkillDescription_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature
struct USkillDescription_C_BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature_Params
{
};

// Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature
struct USkillDescription_C_BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature_Params
{
};

// Function SkillDescription.SkillDescription_C.ButtonHovered
struct USkillDescription_C_ButtonHovered_Params
{
};

// Function SkillDescription.SkillDescription_C.ExecuteUbergraph_SkillDescription
struct USkillDescription_C_ExecuteUbergraph_SkillDescription_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillDescription.SkillDescription_C.BuyButtonHovered__DelegateSignature
struct USkillDescription_C_BuyButtonHovered__DelegateSignature_Params
{
};

// Function SkillDescription.SkillDescription_C.CancelButtonPushed__DelegateSignature
struct USkillDescription_C_CancelButtonPushed__DelegateSignature_Params
{
};

// Function SkillDescription.SkillDescription_C.BuyButtonPushed__DelegateSignature
struct USkillDescription_C_BuyButtonPushed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
