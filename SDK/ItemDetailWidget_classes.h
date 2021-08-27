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

// WidgetBlueprintGeneratedClass ItemDetailWidget.ItemDetailWidget_C
// 0x0078 (0x06A8 - 0x0630)
class UItemDetailWidget_C : public UInventoryItemDetails
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0630(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDetailWidget.ItemDetailWidget_C");
		return ptr;
	}


	void Construct();
	void RefreshWidget(class AGlimpsePickup** Pickup);
	void OnShow();
	void ExecuteUbergraph_ItemDetailWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
