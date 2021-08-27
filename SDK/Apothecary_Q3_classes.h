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

// BlueprintGeneratedClass Apothecary_Q3.Apothecary_Q3_C
// 0x0089 (0x0579 - 0x04F0)
class UApothecary_Q3_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x89];                                      // 0x04F0(0x0089) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Apothecary_Q3.Apothecary_Q3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
