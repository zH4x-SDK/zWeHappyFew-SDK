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

// Function MapLegendWidget.MapLegendWidget_C.OnMouseMove_1
struct UMapLegendWidget_C_OnMouseMove_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapLegendWidget.MapLegendWidget_C.SetImageHeight
struct UMapLegendWidget_C_SetImageHeight_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendWidget.MapLegendWidget_C.SetExpanded
struct UMapLegendWidget_C_SetExpanded_Params
{
	bool                                               Expanded;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendWidget.MapLegendWidget_C.Construct
struct UMapLegendWidget_C_Construct_Params
{
};

// Function MapLegendWidget.MapLegendWidget_C.Tick
struct UMapLegendWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UMapLegendWidget_C_BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapLegendWidget.MapLegendWidget_C.OnLegendActive
struct UMapLegendWidget_C_OnLegendActive_Params
{
	bool*                                              bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendWidget.MapLegendWidget_C.UpdateMapName
struct UMapLegendWidget_C_UpdateMapName_Params
{
	struct FText*                                      InMapName;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MapLegendWidget.MapLegendWidget_C.OnAnimationFinished
struct UMapLegendWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapLegendWidget.MapLegendWidget_C.CustomEvent_1
struct UMapLegendWidget_C_CustomEvent_1_Params
{
};

// Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UMapLegendWidget_C_BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapLegendWidget.MapLegendWidget_C.ExecuteUbergraph_MapLegendWidget
struct UMapLegendWidget_C_ExecuteUbergraph_MapLegendWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
