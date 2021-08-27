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

// WidgetBlueprintGeneratedClass HUDNotificationQuestWidget.HUDNotificationQuestWidget_C
// 0x0018 (0x0738 - 0x0720)
class UHUDNotificationQuestWidget_C : public UHUDNotification
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0720(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationQuestWidget.HUDNotificationQuestWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_NotificationIcon_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_CheckBox_Visibility_1();
	void Construct();
	void ExecuteUbergraph_HUDNotificationQuestWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
