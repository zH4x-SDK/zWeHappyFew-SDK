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

// WidgetBlueprintGeneratedClass InventoryListItem.InventoryListItem_C
// 0x00E0 (0x0730 - 0x0650)
class UInventoryListItem_C : public UInventoryItemWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0650(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryListItem.InventoryListItem_C");
		return ptr;
	}


	void Grow();
	void Shrink();
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void RefreshWidget(class AGlimpsePickup** Pickup);
	void ItemSold();
	void ItemBought();
	void SetUseProgress(float* progress, bool* CanCancelProgress);
	void BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
	void BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature();
	void ExecuteUbergraph_InventoryListItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
