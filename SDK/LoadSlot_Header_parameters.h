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

// Function LoadSlot_Header.LoadSlot_Header_C.Construct
struct ULoadSlot_Header_C_Construct_Params
{
};

// Function LoadSlot_Header.LoadSlot_Header_C.RefreshWidget
struct ULoadSlot_Header_C_RefreshWidget_Params
{
};

// Function LoadSlot_Header.LoadSlot_Header_C.SetHighlighted
struct ULoadSlot_Header_C_SetHighlighted_Params
{
	bool*                                              IsHighlighted;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadSlot_Header.LoadSlot_Header_C.ExecuteUbergraph_LoadSlot_Header
struct ULoadSlot_Header_C_ExecuteUbergraph_LoadSlot_Header_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
