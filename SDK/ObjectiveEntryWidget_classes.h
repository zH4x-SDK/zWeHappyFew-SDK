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

// WidgetBlueprintGeneratedClass ObjectiveEntryWidget.ObjectiveEntryWidget_C
// 0x0060 (0x05E0 - 0x0580)
class UObjectiveEntryWidget_C : public UObjectiveListEntry
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0580(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveEntryWidget.ObjectiveEntryWidget_C");
		return ptr;
	}


	void SetObjectiveStatus(TEnumAsByte<EObjectiveStatus> status);
	void SetupEntry(struct FText* InObjectiveText, TEnumAsByte<EObjectiveStatus>* InObjectiveStatus);
	void UpdateObjectiveStatus(TEnumAsByte<EObjectiveStatus>* InObjectiveStatus);
	void ExecuteUbergraph_ObjectiveEntryWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
