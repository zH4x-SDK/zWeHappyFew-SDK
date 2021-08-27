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

// BlueprintGeneratedClass ODWellie2.ODWellie2_C
// 0x00E1 (0x05D1 - 0x04F0)
class UODWellie2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xE1];                                      // 0x04F0(0x00E1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ODWellie2.ODWellie2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
