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

// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetObjectiveStatus
struct UObjectiveEntryWidget_C_SetObjectiveStatus_Params
{
	TEnumAsByte<EObjectiveStatus>                      status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.SetupEntry
struct UObjectiveEntryWidget_C_SetupEntry_Params
{
	struct FText*                                      InObjectiveText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EObjectiveStatus>*                     InObjectiveStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.UpdateObjectiveStatus
struct UObjectiveEntryWidget_C_UpdateObjectiveStatus_Params
{
	TEnumAsByte<EObjectiveStatus>*                     InObjectiveStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectiveEntryWidget.ObjectiveEntryWidget_C.ExecuteUbergraph_ObjectiveEntryWidget
struct UObjectiveEntryWidget_C_ExecuteUbergraph_ObjectiveEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
