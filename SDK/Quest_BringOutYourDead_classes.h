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

// BlueprintGeneratedClass Quest_BringOutYourDead.Quest_BringOutYourDead_C
// 0x0021 (0x0511 - 0x04F0)
class UQuest_BringOutYourDead_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x21];                                      // 0x04F0(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_BringOutYourDead.Quest_BringOutYourDead_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
