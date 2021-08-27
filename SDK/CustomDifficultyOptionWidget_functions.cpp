
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

// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomDifficultyOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.Construct");

	UCustomDifficultyOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateOptionText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  OptionText                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomDifficultyOptionWidget_C::OnUpdateOptionText(struct FText* OptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateOptionText");

	UCustomDifficultyOptionWidget_C_OnUpdateOptionText_Params params;
	params.OptionText = OptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateWidth
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Width                          (Parm, ZeroConstructor, IsPlainOldData)

void UCustomDifficultyOptionWidget_C::OnUpdateWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateWidth");

	UCustomDifficultyOptionWidget_C_OnUpdateWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.ExecuteUbergraph_CustomDifficultyOptionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCustomDifficultyOptionWidget_C::ExecuteUbergraph_CustomDifficultyOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.ExecuteUbergraph_CustomDifficultyOptionWidget");

	UCustomDifficultyOptionWidget_C_ExecuteUbergraph_CustomDifficultyOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
