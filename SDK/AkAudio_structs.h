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

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
