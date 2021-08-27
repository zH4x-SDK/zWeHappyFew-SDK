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

// WidgetBlueprintGeneratedClass ReticleWidget.ReticleWidget_C
// 0x0024 (0x025C - 0x0238)
class UReticleWidget_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0238(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReticleWidget.ReticleWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_Reticle3_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_Reticle2_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_Reticle1_Visibility_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
