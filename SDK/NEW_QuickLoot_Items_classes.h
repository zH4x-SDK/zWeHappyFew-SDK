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

// WidgetBlueprintGeneratedClass NEW_QuickLoot_Items.NEW_QuickLoot_Items_C
// 0x0030 (0x0660 - 0x0630)
class UNEW_QuickLoot_Items_C : public UInventoryItemDetails
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0630(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NEW_QuickLoot_Items.NEW_QuickLoot_Items_C");
		return ptr;
	}


	void SetAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment);
	void SetupDisplay(class AGlimpsePickup* Pickup);
	void RefreshWidget(class AGlimpsePickup** Pickup);
	void ExecuteUbergraph_NEW_QuickLoot_Items(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
