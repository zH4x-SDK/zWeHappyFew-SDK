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

// BlueprintGeneratedClass Quest_BloodInTheStreets.Quest_BloodInTheStreets_C
// 0x00F0 (0x05E0 - 0x04F0)
class UQuest_BloodInTheStreets_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x04F0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_BloodInTheStreets.Quest_BloodInTheStreets_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif