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

// BlueprintGeneratedClass Quest_Downerinvestigation.Quest_Downerinvestigation_C
// 0x011A (0x060A - 0x04F0)
class UQuest_Downerinvestigation_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x11A];                                     // 0x04F0(0x011A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Downerinvestigation.Quest_Downerinvestigation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
