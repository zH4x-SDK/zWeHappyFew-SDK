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

// WidgetBlueprintGeneratedClass ItemSpecListWidget.ItemSpecListWidget_C
// 0x0048 (0x0638 - 0x05F0)
class UItemSpecListWidget_C : public UItemSpecList
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x05F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemSpecListWidget.ItemSpecListWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_ItemSpecListWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
