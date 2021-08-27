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

// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainTangentZ
struct UGlimpseTerrainData_QueryTerrainTangentZ_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainPoint
struct UGlimpseTerrainData_QueryTerrainPoint_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeightRange
struct UGlimpseTerrainData_QueryTerrainHeightRange_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseTerrain.GlimpseTerrainData.QueryTerrainHeight
struct UGlimpseTerrainData_QueryTerrainHeight_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseTerrain.GlimpseTerrainData.AddHillToTerrain
struct UGlimpseTerrainData_AddHillToTerrain_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeightResult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BaseHeightResult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakRadiusVariance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseRadiusVariance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RadialResolution;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToExisting;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseTerrain.GlimpseTerrainData.AddCircleToTerrain
struct UGlimpseTerrainData_AddCircleToTerrain_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dropoff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceMinHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceMaxHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
