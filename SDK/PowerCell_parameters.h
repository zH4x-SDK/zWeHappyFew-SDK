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

// Function PowerCell.PowerCell_C.SetMaterialEmissive
struct APowerCell_C_SetMaterialEmissive_Params
{
	float                                              EMISSIVE;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCell.PowerCell_C.UserConstructionScript
struct APowerCell_C_UserConstructionScript_Params
{
};

// Function PowerCell.PowerCell_C.MaterialFadeAnim__FinishedFunc
struct APowerCell_C_MaterialFadeAnim__FinishedFunc_Params
{
};

// Function PowerCell.PowerCell_C.MaterialFadeAnim__UpdateFunc
struct APowerCell_C_MaterialFadeAnim__UpdateFunc_Params
{
};

// Function PowerCell.PowerCell_C.FadeMaterial
struct APowerCell_C_FadeMaterial_Params
{
	bool                                               FadeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCell.PowerCell_C.ExecuteUbergraph_PowerCell
struct APowerCell_C_ExecuteUbergraph_PowerCell_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
