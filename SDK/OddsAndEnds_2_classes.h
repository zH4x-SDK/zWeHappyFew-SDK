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

// BlueprintGeneratedClass OddsAndEnds_2.OddsAndEnds_1_C
// 0x0010 (0x0500 - 0x04F0)
class UOddsAndEnds_1_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OddsAndEnds_2.OddsAndEnds_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
