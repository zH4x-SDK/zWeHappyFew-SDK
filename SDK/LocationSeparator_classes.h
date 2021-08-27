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

// WidgetBlueprintGeneratedClass LocationSeparator.LocationSeparator_C
// 0x0018 (0x0598 - 0x0580)
class ULocationSeparator_C : public UQuestListLocationSeparator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0580(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocationSeparator.LocationSeparator_C");
		return ptr;
	}


	void OnSetup(struct FText* LocationName);
	void ExecuteUbergraph_LocationSeparator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
