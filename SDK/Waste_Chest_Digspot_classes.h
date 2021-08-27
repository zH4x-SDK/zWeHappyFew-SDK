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

// BlueprintGeneratedClass Waste_Chest_Digspot.Waste_Chest_Digspot_C
// 0x005C (0x0A5C - 0x0A00)
class AWaste_Chest_Digspot_C : public AGlimpseLootable
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0A00(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Waste_Chest_Digspot.Waste_Chest_Digspot_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
