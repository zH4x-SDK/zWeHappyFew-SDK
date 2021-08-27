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

// BlueprintGeneratedClass Butcher_Q1.Butcher_Q1_C
// 0x00D0 (0x05C0 - 0x04F0)
class UButcher_Q1_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x04F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Butcher_Q1.Butcher_Q1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
