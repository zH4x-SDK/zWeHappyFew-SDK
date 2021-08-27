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

// WidgetBlueprintGeneratedClass StaminaBarMarker.StaminaBarMarker_C
// 0x0018 (0x0598 - 0x0580)
class UStaminaBarMarker_C : public UStaminaBarMarkerWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0580(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaminaBarMarker.StaminaBarMarker_C");
		return ptr;
	}


	void OnDisplay();
	void ExecuteUbergraph_StaminaBarMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
