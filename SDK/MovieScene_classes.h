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

// Class MovieScene.MovieScene
// 0x0080 (0x00A8 - 0x0028)
class UMovieScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSequence : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrack : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
