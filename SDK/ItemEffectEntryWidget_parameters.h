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

// Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.UpdateDisplay
struct UItemEffectEntryWidget_C_UpdateDisplay_Params
{
	TEnumAsByte<EStatusEffectSelection>*               EffectChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush*                                StatusIcon;                                               // (Parm)
	struct FText*                                      EffectDesc;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.ExecuteUbergraph_ItemEffectEntryWidget
struct UItemEffectEntryWidget_C_ExecuteUbergraph_ItemEffectEntryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
