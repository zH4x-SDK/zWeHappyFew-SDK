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

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// 0x0008
struct FCaptureProtocolID
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	uint32_t                                           ResX;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResY;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0048
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (Edit, Config)
	bool                                               bCreateTemporaryCopiesOfLevels;                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      GameModeOverride;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     OutputFormat;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bOverwriteExisting;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseRelativeFrameNumbers;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      ZeroPadFrameNumbers;                                      // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                FrameRate;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x0000(0x0008) (Edit, Config)
	bool                                               bEnableTextureStreaming;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowHUD;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
