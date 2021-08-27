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

// WidgetBlueprintGeneratedClass CustomWaypointWidget.CustomWaypointWidget_C
// 0x0028 (0x0260 - 0x0238)
class UCustomWaypointWidget_C : public UWaypointWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomWaypointWidget.CustomWaypointWidget_C");
		return ptr;
	}


	void SetAngleVisibility(bool* showAngle, float* Angle);
	void ExecuteUbergraph_CustomWaypointWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
