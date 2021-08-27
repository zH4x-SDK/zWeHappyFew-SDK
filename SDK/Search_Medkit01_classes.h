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

// BlueprintGeneratedClass Search_Medkit01.Search_Medkit01_C
// 0x0008 (0x0A08 - 0x0A00)
class ASearch_Medkit01_C : public AGlimpseLootable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A00(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Search_Medkit01.Search_Medkit01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
