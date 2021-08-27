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

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Binary      = 1,
	EMediaPlayerTrack__Caption     = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaPlayerOverlay
// 0x0028
struct FMediaPlayerOverlay
{
	bool                                               HasPosition;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct MediaAssets.MediaSubtitle
// 0x0030
struct FMediaSubtitle
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
