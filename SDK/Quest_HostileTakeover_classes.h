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

// BlueprintGeneratedClass Quest_HostileTakeover.Quest_HostileTakeover_C
// 0x0078 (0x0568 - 0x04F0)
class UQuest_HostileTakeover_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x04F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_HostileTakeover.Quest_HostileTakeover_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
