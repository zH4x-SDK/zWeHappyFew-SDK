
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

// Function PowerCell.PowerCell_C.SetMaterialEmissive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EMISSIVE                       (Parm, ZeroConstructor, IsPlainOldData)

void APowerCell_C::SetMaterialEmissive(float EMISSIVE)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.SetMaterialEmissive");

	APowerCell_C_SetMaterialEmissive_Params params;
	params.EMISSIVE = EMISSIVE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCell.PowerCell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerCell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.UserConstructionScript");

	APowerCell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCell.PowerCell_C.MaterialFadeAnim__FinishedFunc
// (BlueprintEvent)

void APowerCell_C::MaterialFadeAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.MaterialFadeAnim__FinishedFunc");

	APowerCell_C_MaterialFadeAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCell.PowerCell_C.MaterialFadeAnim__UpdateFunc
// (BlueprintEvent)

void APowerCell_C::MaterialFadeAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.MaterialFadeAnim__UpdateFunc");

	APowerCell_C_MaterialFadeAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCell.PowerCell_C.FadeMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void APowerCell_C::FadeMaterial(bool FadeIn, float Duration, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.FadeMaterial");

	APowerCell_C_FadeMaterial_Params params;
	params.FadeIn = FadeIn;
	params.Duration = Duration;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCell.PowerCell_C.ExecuteUbergraph_PowerCell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerCell_C::ExecuteUbergraph_PowerCell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCell.PowerCell_C.ExecuteUbergraph_PowerCell");

	APowerCell_C_ExecuteUbergraph_PowerCell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
