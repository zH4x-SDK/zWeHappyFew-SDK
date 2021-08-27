
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

// Function HeadlineWidget.HeadlineWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHeadlineWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadlineWidget.HeadlineWidget_C.GetVisibility_1");

	UHeadlineWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadlineWidget.HeadlineWidget_C.Get_Border_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHeadlineWidget_C::Get_Border_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadlineWidget.HeadlineWidget_C.Get_Border_0_Visibility_1");

	UHeadlineWidget_C_Get_Border_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadlineWidget.HeadlineWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeadlineWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadlineWidget.HeadlineWidget_C.Construct");

	UHeadlineWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadlineWidget.HeadlineWidget_C.ExecuteUbergraph_HeadlineWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHeadlineWidget_C::ExecuteUbergraph_HeadlineWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadlineWidget.HeadlineWidget_C.ExecuteUbergraph_HeadlineWidget");

	UHeadlineWidget_C_ExecuteUbergraph_HeadlineWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
