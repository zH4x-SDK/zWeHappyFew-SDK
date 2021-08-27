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

// BlueprintGeneratedClass Quest_DamnationAlley.Quest_DamnationAlley_C
// 0x0071 (0x0561 - 0x04F0)
class UQuest_DamnationAlley_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x71];                                      // 0x04F0(0x0071) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_DamnationAlley.Quest_DamnationAlley_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
