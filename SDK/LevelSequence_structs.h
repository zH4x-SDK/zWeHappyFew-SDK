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

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	struct FString                                     ComponentName;                                            // 0x0000(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequencePlaybackSettings
// 0x0008
struct FLevelSequencePlaybackSettings
{
	int                                                LoopCount;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0048
struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              MasterTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       CurrentShotName;                                          // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              CurrentShotLocalTime;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FLevelSequenceSnapshotSettings              Settings;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// 0x0020
struct FLevelSequenceObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
