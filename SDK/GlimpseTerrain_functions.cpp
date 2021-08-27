
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

// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainTangentZ
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGlimpseTerrainData::QueryTerrainTangentZ(const struct FVector2D& Center, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainTangentZ");

	UGlimpseTerrainData_QueryTerrainTangentZ_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGlimpseTerrainData::QueryTerrainPoint(const struct FVector2D& Center, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainPoint");

	UGlimpseTerrainData_QueryTerrainPoint_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeightRange
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UGlimpseTerrainData::QueryTerrainHeightRange(const struct FVector2D& Center, float Radius, float* MinHeight, float* MaxHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeightRange");

	UGlimpseTerrainData_QueryTerrainHeightRange_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinHeight != nullptr)
		*MinHeight = params.MinHeight;
	if (MaxHeight != nullptr)
		*MaxHeight = params.MaxHeight;
}


// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeight
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGlimpseTerrainData::QueryTerrainHeight(const struct FVector2D& Center, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeight");

	UGlimpseTerrainData_QueryTerrainHeight_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlimpseTerrain.GlimpseTerrainData.AddHillToTerrain
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakHeightResult               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BaseHeightResult               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PeakHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakRadiusVariance             (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseRadiusVariance             (Parm, ZeroConstructor, IsPlainOldData)
// int                            RadialResolution               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelativeToExisting            (Parm, ZeroConstructor, IsPlainOldData)

void UGlimpseTerrainData::AddHillToTerrain(const struct FVector2D& Center, float PeakHeight, float PeakRadius, float BaseHeight, float BaseRadius, float PeakRadiusVariance, float BaseRadiusVariance, int RadialResolution, bool bRelativeToExisting, float* PeakHeightResult, float* BaseHeightResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.AddHillToTerrain");

	UGlimpseTerrainData_AddHillToTerrain_Params params;
	params.Center = Center;
	params.PeakHeight = PeakHeight;
	params.PeakRadius = PeakRadius;
	params.BaseHeight = BaseHeight;
	params.BaseRadius = BaseRadius;
	params.PeakRadiusVariance = PeakRadiusVariance;
	params.BaseRadiusVariance = BaseRadiusVariance;
	params.RadialResolution = RadialResolution;
	params.bRelativeToExisting = bRelativeToExisting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PeakHeightResult != nullptr)
		*PeakHeightResult = params.PeakHeightResult;
	if (BaseHeightResult != nullptr)
		*BaseHeightResult = params.BaseHeightResult;
}


// Function GlimpseTerrain.GlimpseTerrainData.AddCircleToTerrain
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Dropoff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceMinHeight                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceMaxHeight                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxHeight                      (Parm, ZeroConstructor, IsPlainOldData)

void UGlimpseTerrainData::AddCircleToTerrain(const struct FVector2D& Center, float Radius, float Height, float Dropoff, bool ForceMinHeight, float MinHeight, bool ForceMaxHeight, float MaxHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseTerrain.GlimpseTerrainData.AddCircleToTerrain");

	UGlimpseTerrainData_AddCircleToTerrain_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Height = Height;
	params.Dropoff = Dropoff;
	params.ForceMinHeight = ForceMinHeight;
	params.MinHeight = MinHeight;
	params.ForceMaxHeight = ForceMaxHeight;
	params.MaxHeight = MaxHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
