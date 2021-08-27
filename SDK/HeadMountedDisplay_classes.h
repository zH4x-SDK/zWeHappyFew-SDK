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

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0020 (0x0750 - 0x0730)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	bool IsTracked();
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0030 (0x0120 - 0x00F0)
class UVRNotificationsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}


	void VRNotificationsDelegate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
