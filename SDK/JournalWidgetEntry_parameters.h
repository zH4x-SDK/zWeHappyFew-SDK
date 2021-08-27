#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusIcon
struct UJournalWidgetEntry_C_UpdateStatusIcon_Params
{
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseDoubleClick_1
struct UJournalWidgetEntry_C_OnMouseDoubleClick_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseButtonDown_1
struct UJournalWidgetEntry_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusDisplay
struct UJournalWidgetEntry_C_UpdateStatusDisplay_Params
{
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateBackgroundColor
struct UJournalWidgetEntry_C_UpdateBackgroundColor_Params
{
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.Tick
struct UJournalWidgetEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.SetupEntry
struct UJournalWidgetEntry_C_SetupEntry_Params
{
	struct FText*                                      InEntryText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInTracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInUnread;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>*                         InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateSelected
struct UJournalWidgetEntry_C_UpdateSelected_Params
{
	bool*                                              bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateUnread
struct UJournalWidgetEntry_C_UpdateUnread_Params
{
	bool*                                              bInUnread;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateTracked
struct UJournalWidgetEntry_C_UpdateTracked_Params
{
	bool*                                              bInTracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidgetEntry.JournalWidgetEntry_C.ExecuteUbergraph_JournalWidgetEntry
struct UJournalWidgetEntry_C_ExecuteUbergraph_JournalWidgetEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
