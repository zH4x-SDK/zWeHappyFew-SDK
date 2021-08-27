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

// BlueprintGeneratedClass Apothecary_Q1.Apothecary_Q1_C
// 0x0038 (0x0528 - 0x04F0)
class UApothecary_Q1_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04F0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Apothecary_Q1.Apothecary_Q1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
