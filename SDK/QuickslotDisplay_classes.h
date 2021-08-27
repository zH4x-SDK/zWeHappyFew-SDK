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

// WidgetBlueprintGeneratedClass QuickslotDisplay.QuickslotDisplay_C
// 0x0038 (0x0270 - 0x0238)
class UQuickslotDisplay_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickslotDisplay.QuickslotDisplay_C");
		return ptr;
	}


	void SetHighlighted(bool HIGHLIGHT);
	void SetImage(class UTexture2D* Image);
	void Construct();
	void ExecuteUbergraph_QuickslotDisplay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
