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

// BlueprintGeneratedClass Quest_LooksLikeRain.Quest_LooksLikeRain_C
// 0x0088 (0x0578 - 0x04F0)
class UQuest_LooksLikeRain_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x04F0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_LooksLikeRain.Quest_LooksLikeRain_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
