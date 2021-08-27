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

// WidgetBlueprintGeneratedClass JournalWidgetEntry.JournalWidgetEntry_C
// 0x008F (0x07FF - 0x0770)
class UJournalWidgetEntry_C : public UQuestListEntry
{
public:
	unsigned char                                      UnknownData00[0x8F];                                      // 0x0770(0x008F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalWidgetEntry.JournalWidgetEntry_C");
		return ptr;
	}


	void UpdateStatusIcon();
	struct FEventReply OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UpdateStatusDisplay();
	void UpdateBackgroundColor();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetupEntry(struct FText* InEntryText, bool* bInSelected, bool* bInTracked, bool* bInUnread, TEnumAsByte<EQuestStatus>* InStatus);
	void UpdateSelected(bool* bInSelected);
	void UpdateUnread(bool* bInUnread);
	void UpdateTracked(bool* bInTracked);
	void ExecuteUbergraph_JournalWidgetEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
