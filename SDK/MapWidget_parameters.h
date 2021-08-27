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

// Function MapWidget.MapWidget_C.Get_SelectLegendEntryInputDisplay_Visibility_2
struct UMapWidget_C_Get_SelectLegendEntryInputDisplay_Visibility_2_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.GetControllerVisibility
struct UMapWidget_C_GetControllerVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.GetVisibility_1
struct UMapWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Get_SelectLegendIconInputDisplay_Visibility_1
struct UMapWidget_C_Get_SelectLegendIconInputDisplay_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Get_SelectLegendEntryInputDisplay_Visibility_1
struct UMapWidget_C_Get_SelectLegendEntryInputDisplay_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.UpdateSafeZone
struct UMapWidget_C_UpdateSafeZone_Params
{
};

// Function MapWidget.MapWidget_C.MapOverlayMapMove
struct UMapWidget_C_MapOverlayMapMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapWidget.MapWidget_C.Get_TravelInputParent_Visibility_1
struct UMapWidget_C_Get_TravelInputParent_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Get_TextBlock_1_Text_1
struct UMapWidget_C_Get_TextBlock_1_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapWidget.MapWidget_C.Get_ScrollInputBox_Visibility_1
struct UMapWidget_C_Get_ScrollInputBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Get_SelectLocationBox_Visibility_1
struct UMapWidget_C_Get_SelectLocationBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Get_TravelInputBox_Visibility_1
struct UMapWidget_C_Get_TravelInputBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.Construct
struct UMapWidget_C_Construct_Params
{
};

// Function MapWidget.MapWidget_C.Tick
struct UMapWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.BndEvt__MapZoomSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
struct UMapWidget_C_BndEvt__MapZoomSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.OnMapDisplayType
struct UMapWidget_C_OnMapDisplayType_Params
{
	TEnumAsByte<EMapDisplayMode>*                      InDisplayMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.OnFastTravelClickDenied
struct UMapWidget_C_OnFastTravelClickDenied_Params
{
	TEnumAsByte<EFastTravelDeniedReason>*              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.OnViewportResize_Event_1
struct UMapWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapWidget.MapWidget_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct UMapWidget_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MapWidget.MapWidget_C.BndEvt__ZoomIn_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
struct UMapWidget_C_BndEvt__ZoomIn_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MapWidget.MapWidget_C.BndEvt__ZoomIn_K2Node_ComponentBoundEvent_63_OnButtonReleasedEvent__DelegateSignature
struct UMapWidget_C_BndEvt__ZoomIn_K2Node_ComponentBoundEvent_63_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MapWidget.MapWidget_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_80_OnButtonReleasedEvent__DelegateSignature
struct UMapWidget_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_80_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MapWidget.MapWidget_C.OnMenuShown
struct UMapWidget_C_OnMenuShown_Params
{
};

// Function MapWidget.MapWidget_C.ExecuteUbergraph_MapWidget
struct UMapWidget_C_ExecuteUbergraph_MapWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
