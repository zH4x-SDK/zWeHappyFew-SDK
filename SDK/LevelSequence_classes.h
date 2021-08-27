#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class LevelSequence.LevelSequence
// 0x00A8 (0x00D0 - 0x0028)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0138 (0x0160 - 0x0028)
class ULevelSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings);
	void ChangePlaybackDirection();
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0020 (0x0048 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0030 (0x0460 - 0x0430)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SequenceStreamComplete();
	class ULevelSequence* GetSequence(bool Load);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0050 (0x0288 - 0x0238)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0238(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
