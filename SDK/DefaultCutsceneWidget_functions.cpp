
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

// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.UpdateSkipProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UDefaultCutsceneWidget_C::UpdateSkipProgress(float progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.UpdateSkipProgress");

	UDefaultCutsceneWidget_C_UpdateSkipProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.SetSkipProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UDefaultCutsceneWidget_C::SetSkipProgress(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.SetSkipProgress");

	UDefaultCutsceneWidget_C_SetSkipProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.ExecuteUbergraph_DefaultCutsceneWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefaultCutsceneWidget_C::ExecuteUbergraph_DefaultCutsceneWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.ExecuteUbergraph_DefaultCutsceneWidget");

	UDefaultCutsceneWidget_C_ExecuteUbergraph_DefaultCutsceneWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
