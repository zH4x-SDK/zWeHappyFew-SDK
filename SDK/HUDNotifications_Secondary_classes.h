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

// WidgetBlueprintGeneratedClass HUDNotifications_Secondary.HUDNotifications_Secondary_C
// 0x0030 (0x0750 - 0x0720)
class UHUDNotifications_Secondary_C : public UHUDNotification
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0720(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotifications_Secondary.HUDNotifications_Secondary_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_NotificationIcon_Visibility_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
