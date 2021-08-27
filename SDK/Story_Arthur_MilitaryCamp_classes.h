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

// BlueprintGeneratedClass Story_Arthur_MilitaryCamp.Story_Arthur_MilitaryCamp_C
// 0x0240 (0x0730 - 0x04F0)
class UStory_Arthur_MilitaryCamp_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x04F0(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Story_Arthur_MilitaryCamp.Story_Arthur_MilitaryCamp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
