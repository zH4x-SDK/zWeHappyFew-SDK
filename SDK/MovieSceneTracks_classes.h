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

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (0x0050 - 0x0040)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0018 (0x0068 - 0x0050)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (0x00D0 - 0x0050)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0050(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0440 (0x0480 - 0x0040)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x440];                                     // 0x0040(0x0440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0098 (0x00D8 - 0x0040)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0040(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0018 (0x0058 - 0x0040)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (0x00C0 - 0x0040)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilitySection
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneVisibilitySection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0078 (0x00B8 - 0x0040)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0040(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0028 (0x0068 - 0x0040)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (0x0050 - 0x0040)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01E8 (0x0228 - 0x0040)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0040(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0068 (0x00A8 - 0x0040)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0040(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0080 (0x00C0 - 0x0040)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (0x00D8 - 0x00C0)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0018 (0x0058 - 0x0040)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0028 (0x0050 - 0x0028)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (0x0070 - 0x0040)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0008 (0x0040 - 0x0038)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x00B0 - 0x0040)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x0050 - 0x0050)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0028 (0x0068 - 0x0040)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x0048 - 0x0028)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (0x00C0 - 0x0040)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubSection
// 0x0058 (0x0098 - 0x0040)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0018 (0x00B0 - 0x0098)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01F0 (0x0230 - 0x0040)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0040(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
