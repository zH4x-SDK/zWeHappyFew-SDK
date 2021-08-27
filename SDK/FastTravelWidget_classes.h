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

// WidgetBlueprintGeneratedClass FastTravelWidget.FastTravelWidget_C
// 0x0051 (0x0611 - 0x05C0)
class UFastTravelWidget_C : public UFastTravelBox
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x05C0(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FastTravelWidget.FastTravelWidget_C");
		return ptr;
	}


	void SetImageHeight(class UImage* Image, float Height);
	void SetExpanded(bool Expanded);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnLocationSelectActive(bool* bInActive);
	void UpdateMapName(struct FText* InMapName);
	void ExecuteUbergraph_FastTravelWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
