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

// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.Construct
struct UCustomDifficultyOptionWidget_C_Construct_Params
{
};

// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateOptionText
struct UCustomDifficultyOptionWidget_C_OnUpdateOptionText_Params
{
	struct FText*                                      OptionText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.OnUpdateWidth
struct UCustomDifficultyOptionWidget_C_OnUpdateWidth_Params
{
	float*                                             Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C.ExecuteUbergraph_CustomDifficultyOptionWidget
struct UCustomDifficultyOptionWidget_C_ExecuteUbergraph_CustomDifficultyOptionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
