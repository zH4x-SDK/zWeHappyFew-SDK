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

// WidgetBlueprintGeneratedClass InventoryDropSlotImplement.InventoryDropSlotImplement_C
// 0x0070 (0x02C8 - 0x0258)
class UInventoryDropSlotImplement_C : public UInventoryDropSlot
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0258(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryDropSlotImplement.InventoryDropSlotImplement_C");
		return ptr;
	}


	void OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void Construct();
	void SetDisplayImage(class UTexture2D** newTexture);
	void OnSlotUnMatchSelected();
	void OnNonSlottableSelected();
	void OnSlotMatchesSelected();
	void SetPickup(class AGlimpsePickup** Pickup);
	void UpdateFocusHighlight(bool* Highlighted);
	void ExecuteUbergraph_InventoryDropSlotImplement(int EntryPoint);
	void HideHighlight__DelegateSignature();
	void ShowHighlight__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
