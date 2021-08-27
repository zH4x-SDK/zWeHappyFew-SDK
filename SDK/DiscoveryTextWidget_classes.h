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

// WidgetBlueprintGeneratedClass DiscoveryTextWidget.DiscoveryTextWidget_C
// 0x0048 (0x0698 - 0x0650)
class UDiscoveryTextWidget_C : public UDiscoveryText
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0650(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DiscoveryTextWidget.DiscoveryTextWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_DiscoveryTextWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
