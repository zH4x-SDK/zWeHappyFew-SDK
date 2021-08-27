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

// WidgetBlueprintGeneratedClass WaypointWidget.WaypointWidget_C
// 0x003D (0x0275 - 0x0238)
class UWaypointWidget_C : public UWaypointWidget
{
public:
	unsigned char                                      UnknownData00[0x3D];                                      // 0x0238(0x003D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WaypointWidget.WaypointWidget_C");
		return ptr;
	}


	void Construct();
	void SetAngleVisibility(bool* showAngle, float* Angle);
	void SetIsAreaWaypoint(bool* areaWaypoint);
	void ExecuteUbergraph_WaypointWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
