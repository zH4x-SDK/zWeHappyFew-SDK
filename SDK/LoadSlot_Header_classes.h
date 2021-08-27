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

// WidgetBlueprintGeneratedClass LoadSlot_Header.LoadSlot_Header_C
// 0x00B8 (0x07C8 - 0x0710)
class ULoadSlot_Header_C : public USaveSlotWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0710(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadSlot_Header.LoadSlot_Header_C");
		return ptr;
	}


	void Construct();
	void RefreshWidget();
	void SetHighlighted(bool* IsHighlighted);
	void ExecuteUbergraph_LoadSlot_Header(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
