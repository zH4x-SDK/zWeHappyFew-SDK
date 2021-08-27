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

// BlueprintGeneratedClass DigSpotQuest_LiliesOfTheField.DigSpotQuest_LiliesOfTheField_C
// 0x0009 (0x04F9 - 0x04F0)
class UDigSpotQuest_LiliesOfTheField_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x04F0(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DigSpotQuest_LiliesOfTheField.DigSpotQuest_LiliesOfTheField_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
