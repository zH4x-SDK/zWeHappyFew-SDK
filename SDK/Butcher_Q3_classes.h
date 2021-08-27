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

// BlueprintGeneratedClass Butcher_Q3.Butcher_Q3_C
// 0x03C2 (0x08B2 - 0x04F0)
class UButcher_Q3_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x3C2];                                     // 0x04F0(0x03C2) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Butcher_Q3.Butcher_Q3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
