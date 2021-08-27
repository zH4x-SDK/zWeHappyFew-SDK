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

// BlueprintGeneratedClass RecordLocation2.RecordLocation2_C
// 0x0048 (0x0538 - 0x04F0)
class URecordLocation2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x04F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RecordLocation2.RecordLocation2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
