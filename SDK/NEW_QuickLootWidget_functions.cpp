
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

// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UNEW_QuickLootWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.GetVisibility_1");

	UNEW_QuickLootWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.OnGetPlayerController_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlimpsePlayerController* UNEW_QuickLootWidget_C::OnGetPlayerController_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.OnGetPlayerController_1");

	UNEW_QuickLootWidget_C_OnGetPlayerController_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNEW_QuickLootWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.Construct");

	UNEW_QuickLootWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.ExecuteUbergraph_NEW_QuickLootWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNEW_QuickLootWidget_C::ExecuteUbergraph_NEW_QuickLootWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.ExecuteUbergraph_NEW_QuickLootWidget");

	UNEW_QuickLootWidget_C_ExecuteUbergraph_NEW_QuickLootWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
