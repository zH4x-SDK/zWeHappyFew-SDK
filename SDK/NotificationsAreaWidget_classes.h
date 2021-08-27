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

// WidgetBlueprintGeneratedClass NotificationsAreaWidget.NotificationsAreaWidget_C
// 0x0040 (0x0620 - 0x05E0)
class UNotificationsAreaWidget_C : public UNotificationsArea
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x05E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationsAreaWidget.NotificationsAreaWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_NormalNotificationsBox_Visibility_1();
	void SafeZone();
	void Construct();
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void ExecuteUbergraph_NotificationsAreaWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
