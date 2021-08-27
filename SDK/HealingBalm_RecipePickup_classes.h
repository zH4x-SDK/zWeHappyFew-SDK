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

// BlueprintGeneratedClass HealingBalm_RecipePickup.HealingBalm_RecipePickup_C
// 0x0017 (0x07B8 - 0x07A1)
class AHealingBalm_RecipePickup_C : public ACraftingRecipePickup_C
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x07A1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HealingBalm_RecipePickup.HealingBalm_RecipePickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnCompleteUse__DelegateSignature(class APawn* UseSource, class AActor* UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
