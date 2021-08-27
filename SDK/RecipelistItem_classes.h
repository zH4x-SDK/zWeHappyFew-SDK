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

// WidgetBlueprintGeneratedClass RecipelistItem.RecipeListItem_C
// 0x0061 (0x08F1 - 0x0890)
class URecipeListItem_C : public URecipeListEntry
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x0890(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RecipelistItem.RecipeListItem_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_TutorialGlow_Visibility_1();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetupWidgets();
	void UpdateItem(class UTexture2D** ItemIcon, struct FText* ItemName, bool* CanCraft);
	void UpdateUnread(bool* bUnread);
	void UpdateInteractionState(TEnumAsByte<EInteractionState>* State);
	void ExecuteUbergraph_RecipeListItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
