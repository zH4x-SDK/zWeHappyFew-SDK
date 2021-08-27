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

// BlueprintGeneratedClass Quest_SadTreasure.Quest_SadTreasure_C
// 0x0039 (0x0529 - 0x04F0)
class UQuest_SadTreasure_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x39];                                      // 0x04F0(0x0039) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SadTreasure.Quest_SadTreasure_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
