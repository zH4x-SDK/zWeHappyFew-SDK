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

// BlueprintGeneratedClass Quest_Shelter_GD2.Quest_Shelter_GD2_C
// 0x0018 (0x0508 - 0x04F0)
class UQuest_Shelter_GD2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Shelter_GD2.Quest_Shelter_GD2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
