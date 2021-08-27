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

// BlueprintGeneratedClass SpeakersFlierStack.SpeakersFlierStack_C
// 0x0010 (0x0790 - 0x0780)
class ASpeakersFlierStack_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpeakersFlierStack.SpeakersFlierStack_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
