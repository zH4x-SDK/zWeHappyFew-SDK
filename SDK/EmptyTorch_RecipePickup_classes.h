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

// BlueprintGeneratedClass EmptyTorch_RecipePickup.EmptyTorch_RecipePickup_C
// 0x000F (0x07B0 - 0x07A1)
class AEmptyTorch_RecipePickup_C : public ACraftingRecipePickup_C
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x07A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmptyTorch_RecipePickup.EmptyTorch_RecipePickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
