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

// Function CommonUIFunctions.CommonUIFunctions_C.GetItemDisplayTierColor
struct UCommonUIFunctions_C_GetItemDisplayTierColor_Params
{
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam1;                                                // (Parm, OutParm)
};

// Function CommonUIFunctions.CommonUIFunctions_C.SetButtonNormalImage
struct UCommonUIFunctions_C_SetButtonNormalImage_Params
{
	class UButton*                                     Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUIFunctions.CommonUIFunctions_C.MakeMaxMargin
struct UCommonUIFunctions_C_MakeMaxMargin_Params
{
	struct FMargin                                     Margin1;                                                  // (Parm)
	struct FMargin                                     Margin2;                                                  // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MaxMargin;                                                // (Parm, OutParm)
};

// Function CommonUIFunctions.CommonUIFunctions_C.GetSafeZoneMargin
struct UCommonUIFunctions_C_GetSafeZoneMargin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BaseScreenSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SafeZoneMargin;                                           // (Parm, OutParm)
};

// Function CommonUIFunctions.CommonUIFunctions_C.SetArrayVisibility
struct UCommonUIFunctions_C_SetArrayVisibility_Params
{
	TArray<class UUserWidget*>                         Widgets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUIFunctions.CommonUIFunctions_C.SetBrushColor
struct UCommonUIFunctions_C_SetBrushColor_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm)
	struct FSlateColor                                 Color;                                                    // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 NewBrush;                                                 // (Parm, OutParm)
};

// Function CommonUIFunctions.CommonUIFunctions_C.SetImageColor
struct UCommonUIFunctions_C_SetImageColor_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
