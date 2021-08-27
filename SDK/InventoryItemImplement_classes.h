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

// WidgetBlueprintGeneratedClass InventoryItemImplement.InventoryItemImplement_C
// 0x00B1 (0x0701 - 0x0650)
class UInventoryItemImplement_C : public UInventoryItemWidget
{
public:
	unsigned char                                      UnknownData00[0xB1];                                      // 0x0650(0x00B1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItemImplement.InventoryItemImplement_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetKeyboard();
	TEnumAsByte<ESlateVisibility> GetPlayerController();
	TEnumAsByte<ESlateVisibility> IsUseProgressVisible();
	bool OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	TEnumAsByte<ESlateVisibility> Get_EquippedBox_Visibility_1();
	void RefreshWidgetFunction(class AGlimpsePickup* Pickup);
	void FormatForDrag(float Width, float Height);
	void OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void RefreshWidget(class AGlimpsePickup** Pickup);
	void SetUseProgress(float* progress, bool* CanCancelProgress);
	void ItemBought();
	void ItemSold();
	void ItemDropped();
	void ItemPlaced();
	void ItemTaken();
	void ExecuteUbergraph_InventoryItemImplement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
