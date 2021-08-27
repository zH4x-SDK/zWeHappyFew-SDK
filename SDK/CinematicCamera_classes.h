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

// Class CinematicCamera.CameraRig_Crane
// 0x0050 (0x0480 - 0x0430)
class ACameraRig_Crane : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0040 (0x0470 - 0x0430)
class ACameraRig_Rail : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraComponent
// 0x00B0 (0x0950 - 0x08A0)
class UCineCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x08A0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x0960 - 0x0920)
class ACineCameraActor : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0920(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
