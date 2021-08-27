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

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEntryText
struct UMapLegendEntryWidget_C_SetEntryText_Params
{
	struct FText                                       EntryText;                                                // (Parm)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateDisplayColors
struct UMapLegendEntryWidget_C_UpdateDisplayColors_Params
{
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEnabled
struct UMapLegendEntryWidget_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.Construct
struct UMapLegendEntryWidget_C_Construct_Params
{
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.Tick
struct UMapLegendEntryWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetupEntry
struct UMapLegendEntryWidget_C_SetupEntry_Params
{
	struct FText*                                      EntryText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D**                                 EntryIcon;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 SecondaryEntryIcon;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EntryEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UMapLegendEntryWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateEntryEnabled
struct UMapLegendEntryWidget_C_UpdateEntryEnabled_Params
{
	bool*                                              bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateSelected
struct UMapLegendEntryWidget_C_UpdateSelected_Params
{
	bool*                                              bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UMapLegendEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UMapLegendEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.OnCultureChanged
struct UMapLegendEntryWidget_C_OnCultureChanged_Params
{
	struct FText*                                      EntryText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.ExecuteUbergraph_MapLegendEntryWidget
struct UMapLegendEntryWidget_C_ExecuteUbergraph_MapLegendEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
