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

// BlueprintGeneratedClass MilitaryCamp_WhenTheCatsAway.MilitaryCamp_WhenTheCatsAway_C
// 0x0030 (0x0520 - 0x04F0)
class UMilitaryCamp_WhenTheCatsAway_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryCamp_WhenTheCatsAway.MilitaryCamp_WhenTheCatsAway_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
