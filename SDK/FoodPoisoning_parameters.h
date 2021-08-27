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

// Function FoodPoisoning.FoodPoisoning_C.ApplyBlackout
struct UFoodPoisoning_C_ApplyBlackout_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.ApplyBlurryVision
struct UFoodPoisoning_C_ApplyBlurryVision_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FoodPoisoning.FoodPoisoning_C.ApplyVomiting
struct UFoodPoisoning_C_ApplyVomiting_Params
{
	bool                                               bIsDry;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FoodPoisoning.FoodPoisoning_C.OnApply
struct UFoodPoisoning_C_OnApply_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.OnDizziness
struct UFoodPoisoning_C_OnDizziness_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.OnVomiting
struct UFoodPoisoning_C_OnVomiting_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.OnDryHeaving
struct UFoodPoisoning_C_OnDryHeaving_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.OnBlackout
struct UFoodPoisoning_C_OnBlackout_Params
{
};

// Function FoodPoisoning.FoodPoisoning_C.ExecuteUbergraph_FoodPoisoning
struct UFoodPoisoning_C_ExecuteUbergraph_FoodPoisoning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
