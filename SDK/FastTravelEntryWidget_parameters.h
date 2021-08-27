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

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetCheckboxHovered
struct UFastTravelEntryWidget_C_SetCheckboxHovered_Params
{
	bool                                               Hovered;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetHighlighted
struct UFastTravelEntryWidget_C_SetHighlighted_Params
{
	bool                                               Highlighted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.SetEnabled
struct UFastTravelEntryWidget_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UFastTravelEntryWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateSelected
struct UFastTravelEntryWidget_C_UpdateSelected_Params
{
	bool*                                              bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.OnSetupEntry
struct UFastTravelEntryWidget_C_OnSetupEntry_Params
{
	struct FName*                                      InDisplayName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bInFound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.UpdateHighlighted
struct UFastTravelEntryWidget_C_UpdateHighlighted_Params
{
	bool*                                              bInHighlighted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UFastTravelEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
struct UFastTravelEntryWidget_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature
struct UFastTravelEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FastTravelEntryWidget.FastTravelEntryWidget_C.ExecuteUbergraph_FastTravelEntryWidget
struct UFastTravelEntryWidget_C_ExecuteUbergraph_FastTravelEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
