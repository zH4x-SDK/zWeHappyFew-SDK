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

// BlueprintGeneratedClass MadameLostHerKeys.MadameLostHerKeys_C
// 0x00A8 (0x0598 - 0x04F0)
class UMadameLostHerKeys_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x04F0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MadameLostHerKeys.MadameLostHerKeys_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
