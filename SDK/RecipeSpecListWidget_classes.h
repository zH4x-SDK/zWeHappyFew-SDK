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

// WidgetBlueprintGeneratedClass RecipeSpecListWidget.RecipeSpecListWidget_C
// 0x0038 (0x0628 - 0x05F0)
class URecipeSpecListWidget_C : public UItemSpecList
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x05F0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RecipeSpecListWidget.RecipeSpecListWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_RecipeSpecListWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
