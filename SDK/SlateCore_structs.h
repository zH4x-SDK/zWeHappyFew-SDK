#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MAX              = 12
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x0000(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x0000(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FBox2D                                      UVRegion;                                                 // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0014(0x007C) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0020
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0078 - 0x0020)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0028
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OutlineMaterial;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparateFillAlpha;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0068
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontOutlineSettings                        OutlineSettings;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FName                                       TypefaceFontName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontName;                                                 // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0001(0x0067) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0710 (0x0718 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x688];                                     // 0x0090(0x0688) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x02A0 (0x02A8 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0008(0x02A0) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0010(0x03D0) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0000(0x03E0) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SelectionChangeSound;                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x420];                                     // 0x0008(0x0420) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0240 (0x0248 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0068) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0090(0x01B8) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x488];                                     // 0x0090(0x0488) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0868 (0x0870 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0068) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x358];                                     // 0x0518(0x0358) MISSED OFFSET
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0170 (0x0178 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0068) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0000(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0090(0x00E8) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0308 (0x0310 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028)
	struct FMargin                                     TextPadding;                                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x300];                                     // 0x0010(0x0300) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0090(0x01B8) MISSED OFFSET
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0430 (0x0438 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0178) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x428];                                     // 0x0010(0x0428) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0248 (0x0250 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0000(0x0090) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0004(0x024C) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0090(0x0128) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05D8 (0x05E0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5D8];                                     // 0x0008(0x05D8) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UFontBulkData*                               BulkDataPtr;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              FontData;                                                 // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0000(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0028
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1030 (0x1038 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0000(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0000(0x0178) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xFA8];                                     // 0x0090(0x0FA8) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0090(0x0098) MISSED OFFSET
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06D8 (0x06E0 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0000(0x02A8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0000(0x0090) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0000(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FlashColor;                                               // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x6B8];                                     // 0x0028(0x06B8) MISSED OFFSET
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x488];                                     // 0x0090(0x0488) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0090(0x0098) MISSED OFFSET
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C10 (0x0C18 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0000(0x0518) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0000(0x0518) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0000(0x0128) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0090) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0xBF0];                                     // 0x0028(0x0BF0) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0000(0x0090) (Edit)
	int16_t                                            Baseline;                                                 // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9E];                                      // 0x0002(0x009E) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0520 (0x0528 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0000(0x0250) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x498];                                     // 0x0090(0x0498) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0B30 (0x0B38 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0000(0x0870) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0000(0x0090) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0000(0x0010) (Edit)
	bool                                               bLeftAlignButtons;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB37];                                     // 0x0001(0x0B37) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0120 (0x0128 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0090(0x0098) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09E8 (0x09F0 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0000(0x0870) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0178) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x878];                                     // 0x0178(0x0878) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0028 - 0x0020)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0050 - 0x0020)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0020 (0x0040 - 0x0020)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0028 - 0x0020)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0040 - 0x0020)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0048 - 0x0040)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
