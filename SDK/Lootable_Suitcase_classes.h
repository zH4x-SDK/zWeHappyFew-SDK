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

// BlueprintGeneratedClass Lootable_Suitcase.Lootable_Suitcase_C
// 0x0008 (0x0A08 - 0x0A00)
class ALootable_Suitcase_C : public AGlimpseLootable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A00(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lootable_Suitcase.Lootable_Suitcase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
