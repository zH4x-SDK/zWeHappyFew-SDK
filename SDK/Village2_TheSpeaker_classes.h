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

// BlueprintGeneratedClass Village2_TheSpeaker.Village2_TheSpeaker_C
// 0x0011 (0x2001 - 0x1FF0)
class AVillage2_TheSpeaker_C : public AGlimpseWorkerNPC_C
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x1FF0(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village2_TheSpeaker.Village2_TheSpeaker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
