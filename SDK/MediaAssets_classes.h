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

// Class MediaAssets.MediaPlayer
// 0x0148 (0x0170 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void SetVideoTexture(class UMediaTexture* newTexture);
	void SetSoundWave(class UMediaSoundWave* NewSoundWave);
	bool SetRate(float Rate);
	bool SetLooping(bool Looping);
	bool SelectTrack(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL, bool bImportantUrl);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FString GetTrackLanguage(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex);
	struct FTimespan GetTime();
	void GetTexts(TArray<struct FMediaPlayerOverlay>* OutTexts);
	void GetSubtitles(TArray<struct FMediaPlayerOverlay>* OutSubtitles);
	int GetSelectedTrack(TEnumAsByte<EMediaPlayerTrack> TrackType);
	struct FFloatRange GetReverseRates(bool Unthinned);
	float GetRate();
	struct FName GetPlayerName();
	int GetNumTracks(TEnumAsByte<EMediaPlayerTrack> TrackType);
	struct FFloatRange GetForwardRates(bool Unthinned);
	struct FTimespan GetDuration();
	void GetCaptions(TArray<struct FMediaPlayerOverlay>* OutCaptions);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	void RemoveAt(int Index);
	void Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* InOutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	void Add(class UMediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundWave
// 0x00D8 (0x0310 - 0x0238)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0238(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}

};


// Class MediaAssets.MediaSource
// 0x0010 (0x0038 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0040 - 0x0038)
class UPlatformMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.MediaSubtitles
// 0x0010 (0x0038 - 0x0028)
class UMediaSubtitles : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSubtitles");
		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x00E0 (0x01A0 - 0x00C0)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00C0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	int GetWidth();
	int GetHeight();
	float GetAspectRatio();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
