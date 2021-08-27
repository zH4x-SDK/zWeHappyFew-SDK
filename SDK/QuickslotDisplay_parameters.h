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

// Function QuickslotDisplay.QuickslotDisplay_C.SetHighlighted
struct UQuickslotDisplay_C_SetHighlighted_Params
{
	bool                                               HIGHLIGHT;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickslotDisplay.QuickslotDisplay_C.SetImage
struct UQuickslotDisplay_C_SetImage_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickslotDisplay.QuickslotDisplay_C.Construct
struct UQuickslotDisplay_C_Construct_Params
{
};

// Function QuickslotDisplay.QuickslotDisplay_C.ExecuteUbergraph_QuickslotDisplay
struct UQuickslotDisplay_C_ExecuteUbergraph_QuickslotDisplay_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
