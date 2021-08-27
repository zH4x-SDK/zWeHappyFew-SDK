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

// BlueprintGeneratedClass Story_Arthur_Escape.Story_Arthur_Escape_C
// 0x0140 (0x0630 - 0x04F0)
class UStory_Arthur_Escape_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x04F0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Story_Arthur_Escape.Story_Arthur_Escape_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
