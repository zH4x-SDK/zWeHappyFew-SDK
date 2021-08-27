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

// BlueprintGeneratedClass Shelter_VLG_Gas01.Shelter_VLG_Gas01_C
// 0x0019 (0x0509 - 0x04F0)
class UShelter_VLG_Gas01_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x04F0(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shelter_VLG_Gas01.Shelter_VLG_Gas01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
