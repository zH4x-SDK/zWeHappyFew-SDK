
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

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.InitializeNativeVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_NPC_Indicator_C::InitializeNativeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.InitializeNativeVariables");

	UWidget_NPC_Indicator_C_InitializeNativeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateCriticalHealthStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_NPC_Indicator_C::UpdateCriticalHealthStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateCriticalHealthStatus");

	UWidget_NPC_Indicator_C_UpdateCriticalHealthStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateTiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTier                        (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::UpdateTiers(int NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateTiers");

	UWidget_NPC_Indicator_C_UpdateTiers_Params params;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ConvertAreaToHeightOfTriangle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAreaFill                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTheta                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutFillHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::ConvertAreaToHeightOfTriangle(float InAreaFill, float InTheta, float* OutFillHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ConvertAreaToHeightOfTriangle");

	UWidget_NPC_Indicator_C_ConvertAreaToHeightOfTriangle_Params params;
	params.InAreaFill = InAreaFill;
	params.InTheta = InTheta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFillHeight != nullptr)
		*OutFillHeight = params.OutFillHeight;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ShouldShowHealthAndArmour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::ShouldShowHealthAndArmour(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ShouldShowHealthAndArmour");

	UWidget_NPC_Indicator_C_ShouldShowHealthAndArmour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_NPC_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Construct");

	UWidget_NPC_Indicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Tick");

	UWidget_NPC_Indicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetSuspicionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetSuspicionProgress(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetSuspicionProgress");

	UWidget_NPC_Indicator_C_OnSetSuspicionProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetAgressionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetAgressionProgress(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetAgressionProgress");

	UWidget_NPC_Indicator_C_OnSetAgressionProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetIndicatorMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENPCIndicatorState>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetIndicatorMode(TEnumAsByte<ENPCIndicatorState>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetIndicatorMode");

	UWidget_NPC_Indicator_C_OnSetIndicatorMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCOffscreen
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          offscreen                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetNPCOffscreen(bool* offscreen, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCOffscreen");

	UWidget_NPC_Indicator_C_OnSetNPCOffscreen_Params params;
	params.offscreen = offscreen;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCDistance
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetNPCDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCDistance");

	UWidget_NPC_Indicator_C_OnSetNPCDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCHealthAmount
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         normalisedHealth               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         actualHealth                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InTier                         (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::OnSetNPCHealthAmount(float* normalisedHealth, float* actualHealth, int* InTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCHealthAmount");

	UWidget_NPC_Indicator_C_OnSetNPCHealthAmount_Params params;
	params.normalisedHealth = normalisedHealth;
	params.actualHealth = actualHealth;
	params.InTier = InTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ExecuteUbergraph_Widget_NPC_Indicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_NPC_Indicator_C::ExecuteUbergraph_Widget_NPC_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ExecuteUbergraph_Widget_NPC_Indicator");

	UWidget_NPC_Indicator_C_ExecuteUbergraph_Widget_NPC_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
