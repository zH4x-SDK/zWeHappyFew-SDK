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

// WidgetBlueprintGeneratedClass ConsumableInventoryPanel.ConsumableInventoryPanel_C
// 0x017D (0x07AD - 0x0630)
class UConsumableInventoryPanel_C : public UInventoryItemDetails
{
public:
	unsigned char                                      UnknownData00[0x17D];                                     // 0x0630(0x017D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsumableInventoryPanel.ConsumableInventoryPanel_C");
		return ptr;
	}


	void PlaySwitchSFX();
	void ShowEmpty();
	void MoveDetails();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void RefreshWidget(class AGlimpsePickup** Pickup);
	void ExecuteUbergraph_ConsumableInventoryPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
