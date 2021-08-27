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

// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensorAspectRatio;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0014
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFocalLength;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFStop;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFStop;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFocusDistance;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0018
struct FCameraTrackingFocusSettings
{
	class AActor*                                      ActorToTrack;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                         // 0x0000(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0030
struct FCameraFocusSettings
{
	TEnumAsByte<ECameraFocusMethod>                    FocusMethod;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualFocusDistance;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bSmoothFocusChanges : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	float                                              FocusSmoothingInterpSpeed;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusOffset;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0030
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisible, Transient)
	float                                              LookAtTrackingInterpSpeed;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToTrack;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
