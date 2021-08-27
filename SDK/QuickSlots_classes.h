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

// WidgetBlueprintGeneratedClass QuickSlots.QuickSlots_C
// 0x01E0 (0x1050 - 0x0E70)
class UQuickSlots_C : public UQuickSlotWidget
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0E70(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickSlots.QuickSlots_C");
		return ptr;
	}


	void SetNewQuickslotPickupAndActive(class AGlimpsePickup* Pickup, bool IsActiveSlot, int slotNumber);
	void UpdateDurability();
	class AGlimpsePlayerController* OnGetPlayerController_1();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnRefresh();
	void OnQuickslotCycled(int* I);
	void OnQuickslotUseStart();
	void OnSwitchActiveSlot();
	void ExecuteUbergraph_QuickSlots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
