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

// WidgetBlueprintGeneratedClass HUDNotificationBigWidget.HUDNotificationBigWidget_C
// 0x0048 (0x0768 - 0x0720)
class UHUDNotificationBigWidget_C : public UHUDNotification
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0720(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationBigWidget.HUDNotificationBigWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_HUDNotificationBigWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
