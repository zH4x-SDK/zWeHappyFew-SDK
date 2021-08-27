#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlimpseLoadingScreen.LoadingScreenStyleData
// 0x04A0 (0x04A8 - 0x0008)
struct FLoadingScreenStyleData : public FSlateWidgetStyle
{
	struct FTextBlockStyle                             LoadingTipTextStyle;                                      // 0x0000(0x0178) (Edit)
	struct FSlateFontInfo                              LoadingCompleteFont;                                      // 0x0000(0x0068) (Edit)
	TArray<struct FSlateBrush>                         LoadingScreenImages;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FProgressBarStyle                           LoadingProgressStyle;                                     // 0x0000(0x01B8) (Edit)
	struct FSlateFontInfo                              CaptionFont;                                              // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 CaptionBackground;                                        // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x418];                                     // 0x0090(0x0418) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
