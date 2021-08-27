
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

// Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.UpdateDisplay
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStatusEffectSelection>* EffectChange                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush*            StatusIcon                     (Parm)
// struct FText*                  EffectDesc                     (ConstParm, Parm, OutParm, ReferenceParm)

void UItemEffectEntryWidget_C::UpdateDisplay(TEnumAsByte<EStatusEffectSelection>* EffectChange, struct FSlateBrush* StatusIcon, struct FText* EffectDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.UpdateDisplay");

	UItemEffectEntryWidget_C_UpdateDisplay_Params params;
	params.EffectChange = EffectChange;
	params.StatusIcon = StatusIcon;
	params.EffectDesc = EffectDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.ExecuteUbergraph_ItemEffectEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemEffectEntryWidget_C::ExecuteUbergraph_ItemEffectEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEffectEntryWidget.ItemEffectEntryWidget_C.ExecuteUbergraph_ItemEffectEntryWidget");

	UItemEffectEntryWidget_C_ExecuteUbergraph_ItemEffectEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
