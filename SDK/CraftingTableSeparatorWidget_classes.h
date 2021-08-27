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

// WidgetBlueprintGeneratedClass CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C
// 0x0018 (0x05A8 - 0x0590)
class UCraftingTableSeparatorWidget_C : public UCraftingTableSeparator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0590(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C");
		return ptr;
	}


	void OnSetup(TEnumAsByte<ECraftingStation>* InCraftingStation);
	void OnCraftingTableAvailable(bool* bAvailablehil);
	void ExecuteUbergraph_CraftingTableSeparatorWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
