
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

// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetObjectiveStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveStatus>  status                         (Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveEntryWidget_C::SetObjectiveStatus(TEnumAsByte<EObjectiveStatus> status)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetObjectiveStatus");

	UObjectiveEntryWidget_C_SetObjectiveStatus_Params params;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetupEntry
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InObjectiveText                (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EObjectiveStatus>* InObjectiveStatus              (Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveEntryWidget_C::SetupEntry(struct FText* InObjectiveText, TEnumAsByte<EObjectiveStatus>* InObjectiveStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetupEntry");

	UObjectiveEntryWidget_C_SetupEntry_Params params;
	params.InObjectiveText = InObjectiveText;
	params.InObjectiveStatus = InObjectiveStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.UpdateObjectiveStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveStatus>* InObjectiveStatus              (Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveEntryWidget_C::UpdateObjectiveStatus(TEnumAsByte<EObjectiveStatus>* InObjectiveStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.UpdateObjectiveStatus");

	UObjectiveEntryWidget_C_UpdateObjectiveStatus_Params params;
	params.InObjectiveStatus = InObjectiveStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.ExecuteUbergraph_ObjectiveEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveEntryWidget_C::ExecuteUbergraph_ObjectiveEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.ExecuteUbergraph_ObjectiveEntryWidget");

	UObjectiveEntryWidget_C_ExecuteUbergraph_ObjectiveEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
