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

// BlueprintGeneratedClass HolyYam.HolyYam_C
// 0x0059 (0x07D9 - 0x0780)
class AHolyYam_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x59];                                      // 0x0780(0x0059) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HolyYam.HolyYam_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
