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

// WidgetBlueprintGeneratedClass CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C
// 0x01CC (0x07CC - 0x0600)
class UCraftingIngredientLayout_4Items_1_C : public UCraftingIngredientLayout
{
public:
	unsigned char                                      UnknownData00[0x1CC];                                     // 0x0600(0x01CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C");
		return ptr;
	}


	void ChopLocationString(const struct FText& InText, struct FText* OutText);
	void SetupIngredient(const struct FIngredientInfo& IngredientInfo, class UTextBlock* NameWidget, class UTextBlock* AmountsWidget, class UImage* IconWidget, class UImage* BagroundWidget, class UImage* LineCanCraft, class UImage* LineCannotCraft, class UImage* BackgroundCannotWidget, const struct FText& Location, class UTextBlock* LocationWidget, class UBorder* Border_Ingredient, TArray<class UWidget*>* ElementsArray);
	void SetElementsVisible(TEnumAsByte<ESlateVisibility> Visible, TArray<class UWidget*>* ElementArray);
	void Construct();
	void SetCanCraft(bool* bCanCraft);
	void SetItems(TArray<struct FIngredientInfo>* IngredientList);
	void ExecuteUbergraph_CraftingIngredientLayout_4Items_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
