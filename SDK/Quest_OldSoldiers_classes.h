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

// BlueprintGeneratedClass Quest_OldSoldiers.Quest_OldSoldiers_C
// 0x0190 (0x0680 - 0x04F0)
class UQuest_OldSoldiers_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x04F0(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OldSoldiers.Quest_OldSoldiers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
