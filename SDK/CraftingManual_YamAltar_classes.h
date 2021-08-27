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

// BlueprintGeneratedClass CraftingManual_YamAltar.CraftingManual_YamAltar_C
// 0x002F (0x07D0 - 0x07A1)
class ACraftingManual_YamAltar_C : public ACraftingRecipePickup_C
{
public:
	unsigned char                                      UnknownData00[0x2F];                                      // 0x07A1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CraftingManual_YamAltar.CraftingManual_YamAltar_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
