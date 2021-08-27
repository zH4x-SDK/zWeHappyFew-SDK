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

// Function SkillButtonWidget.SkillButtonWidget_C.UpdateSelectedDisplay
struct USkillButtonWidget_C_UpdateSelectedDisplay_Params
{
};

// Function SkillButtonWidget.SkillButtonWidget_C.OnSetupSkillDisplay
struct USkillButtonWidget_C_OnSetupSkillDisplay_Params
{
	struct FSlateBrush*                                SkillBrush;                                               // (Parm)
	bool*                                              InSkillAvailable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InSkillBought;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkillButtonWidget.SkillButtonWidget_C.OnSelectionChanged
struct USkillButtonWidget_C_OnSelectionChanged_Params
{
	bool*                                              bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillButtonWidget.SkillButtonWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct USkillButtonWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SkillButtonWidget.SkillButtonWidget_C.ExecuteUbergraph_SkillButtonWidget
struct USkillButtonWidget_C_ExecuteUbergraph_SkillButtonWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
