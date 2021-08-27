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

// WidgetBlueprintGeneratedClass DynamicPanel_Slots.DynamicPanel_Slots_C
// 0x00A8 (0x02E0 - 0x0238)
class UDynamicPanel_Slots_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0238(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DynamicPanel_Slots.DynamicPanel_Slots_C");
		return ptr;
	}


	void ShowEquippableSlot(int Slot);
	void ShowHighlightedSlot(int Slot, bool InFocus);
	void Construct();
	void ExecuteUbergraph_DynamicPanel_Slots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
