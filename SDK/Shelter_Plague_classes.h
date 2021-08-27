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

// BlueprintGeneratedClass Shelter_Plague.Shelter_Plague_C
// 0x0118 (0x0608 - 0x04F0)
class UShelter_Plague_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x04F0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shelter_Plague.Shelter_Plague_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
