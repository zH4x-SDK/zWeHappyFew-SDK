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

// BlueprintGeneratedClass Quest_SpeakersCorner.Quest_SpeakersCorner_C
// 0x0231 (0x0721 - 0x04F0)
class UQuest_SpeakersCorner_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x231];                                     // 0x04F0(0x0231) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SpeakersCorner.Quest_SpeakersCorner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
