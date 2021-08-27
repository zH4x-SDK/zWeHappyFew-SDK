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

// BlueprintGeneratedClass CraftingRecipePickup.CraftingRecipePickup_C
// 0x0001 (0x07A1 - 0x07A0)
class ACraftingRecipePickup_C : public ACraftingRecipePickup
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x07A0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CraftingRecipePickup.CraftingRecipePickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
