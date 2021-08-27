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

// BlueprintGeneratedClass MysteryHouse2.MysteryHouse2_C
// 0x00F8 (0x05E8 - 0x04F0)
class UMysteryHouse2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x04F0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MysteryHouse2.MysteryHouse2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
