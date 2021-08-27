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

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateBackground
struct UStatusEffectDetailsWidget_C_UpdateBackground_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Get_NotificationIcon_Visibility_1
struct UStatusEffectDetailsWidget_C_Get_NotificationIcon_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateSelected
struct UStatusEffectDetailsWidget_C_UpdateSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateStatusDisplay
struct UStatusEffectDetailsWidget_C_UpdateStatusDisplay_Params
{
	TEnumAsByte<EStatusEffectType>                     StatusType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.UpdateText
struct UStatusEffectDetailsWidget_C_UpdateText_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.Construct
struct UStatusEffectDetailsWidget_C_Construct_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnIconChanged
struct UStatusEffectDetailsWidget_C_OnIconChanged_Params
{
	struct FSlateBrush*                                InIcon;                                                   // (Parm)
	bool*                                              bInHasIcon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnNameChanged
struct UStatusEffectDetailsWidget_C_OnNameChanged_Params
{
	struct FText*                                      InEffectName;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnDescriptionChanged
struct UStatusEffectDetailsWidget_C_OnDescriptionChanged_Params
{
	struct FText*                                      InEffectDescription;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.OnStatusChanged
struct UStatusEffectDetailsWidget_C_OnStatusChanged_Params
{
	TEnumAsByte<EStatusEffectType>*                    InStatusType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.SetSelected
struct UStatusEffectDetailsWidget_C_SetSelected_Params
{
	bool*                                              bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
struct UStatusEffectDetailsWidget_C_BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StatusEffectDetailsWidget.StatusEffectDetailsWidget_C.ExecuteUbergraph_StatusEffectDetailsWidget
struct UStatusEffectDetailsWidget_C_ExecuteUbergraph_StatusEffectDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
