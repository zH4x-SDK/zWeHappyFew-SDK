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

// WidgetBlueprintGeneratedClass HUDNotificationSmallWidget.HUDNotificationSmallWidget_C
// 0x0028 (0x0748 - 0x0720)
class UHUDNotificationSmallWidget_C : public UHUDNotification
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0720(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationSmallWidget.HUDNotificationSmallWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_NotificationIcon_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_CheckBox_Visibility_1();
	void Construct();
	void ExecuteUbergraph_HUDNotificationSmallWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
