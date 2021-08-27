
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

// Function ReticleWidget.ReticleWidget_C.Get_Reticle3_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UReticleWidget_C::Get_Reticle3_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleWidget.ReticleWidget_C.Get_Reticle3_Visibility_1");

	UReticleWidget_C_Get_Reticle3_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReticleWidget.ReticleWidget_C.Get_Reticle2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UReticleWidget_C::Get_Reticle2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleWidget.ReticleWidget_C.Get_Reticle2_Visibility_1");

	UReticleWidget_C_Get_Reticle2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReticleWidget.ReticleWidget_C.Get_Reticle1_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UReticleWidget_C::Get_Reticle1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleWidget.ReticleWidget_C.Get_Reticle1_Visibility_1");

	UReticleWidget_C_Get_Reticle1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
