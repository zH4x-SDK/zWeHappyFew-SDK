
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalWidgetEntry_C::UpdateStatusIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusIcon");

	UJournalWidgetEntry_C_UpdateStatusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseDoubleClick_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UJournalWidgetEntry_C::OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseDoubleClick_1");

	UJournalWidgetEntry_C_OnMouseDoubleClick_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UJournalWidgetEntry_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.OnMouseButtonDown_1");

	UJournalWidgetEntry_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalWidgetEntry_C::UpdateStatusDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateStatusDisplay");

	UJournalWidgetEntry_C_UpdateStatusDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalWidgetEntry_C::UpdateBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateBackgroundColor");

	UJournalWidgetEntry_C_UpdateBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.Tick");

	UJournalWidgetEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.SetupEntry
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InEntryText                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInTracked                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInUnread                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EQuestStatus>*     InStatus                       (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::SetupEntry(struct FText* InEntryText, bool* bInSelected, bool* bInTracked, bool* bInUnread, TEnumAsByte<EQuestStatus>* InStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.SetupEntry");

	UJournalWidgetEntry_C_SetupEntry_Params params;
	params.InEntryText = InEntryText;
	params.bInSelected = bInSelected;
	params.bInTracked = bInTracked;
	params.bInUnread = bInUnread;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::UpdateSelected(bool* bInSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateSelected");

	UJournalWidgetEntry_C_UpdateSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateUnread
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInUnread                      (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::UpdateUnread(bool* bInUnread)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateUnread");

	UJournalWidgetEntry_C_UpdateUnread_Params params;
	params.bInUnread = bInUnread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateTracked
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInTracked                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::UpdateTracked(bool* bInTracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.UpdateTracked");

	UJournalWidgetEntry_C_UpdateTracked_Params params;
	params.bInTracked = bInTracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidgetEntry.JournalWidgetEntry_C.ExecuteUbergraph_JournalWidgetEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidgetEntry_C::ExecuteUbergraph_JournalWidgetEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidgetEntry.JournalWidgetEntry_C.ExecuteUbergraph_JournalWidgetEntry");

	UJournalWidgetEntry_C_ExecuteUbergraph_JournalWidgetEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
