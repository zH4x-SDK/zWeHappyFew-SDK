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

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.EvaluateStatusEffect
struct ADefaultPlayerCharacter_C_EvaluateStatusEffect_Params
{
	TArray<class UClass*>                              EffectType;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              vfxTimelinePosition;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ComputeTooCloseDistance
struct ADefaultPlayerCharacter_C_ComputeTooCloseDistance_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebug;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.UserConstructionScript
struct ADefaultPlayerCharacter_C_UserConstructionScript_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__FinishedFunc
struct ADefaultPlayerCharacter_C_Mushroom_VFX_Strength__FinishedFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__UpdateFunc
struct ADefaultPlayerCharacter_C_Mushroom_VFX_Strength__UpdateFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__FinishedFunc
struct ADefaultPlayerCharacter_C_Chrono_VFX_Strength__FinishedFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__UpdateFunc
struct ADefaultPlayerCharacter_C_Chrono_VFX_Strength__UpdateFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__FinishedFunc
struct ADefaultPlayerCharacter_C_Phlash_VFX_Strength__FinishedFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__UpdateFunc
struct ADefaultPlayerCharacter_C_Phlash_VFX_Strength__UpdateFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__FinishedFunc
struct ADefaultPlayerCharacter_C_Sunshine_VFX_Strength__FinishedFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__UpdateFunc
struct ADefaultPlayerCharacter_C_Sunshine_VFX_Strength__UpdateFunc_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveTick
struct ADefaultPlayerCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveBeginPlay
struct ADefaultPlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature
struct ADefaultPlayerCharacter_C_BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature
struct ADefaultPlayerCharacter_C_BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddMushroom
struct ADefaultPlayerCharacter_C_ForceAddMushroom_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddChrono
struct ADefaultPlayerCharacter_C_ForceAddChrono_Params
{
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ExecuteUbergraph_DefaultPlayerCharacter
struct ADefaultPlayerCharacter_C_ExecuteUbergraph_DefaultPlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.VFX_Strength__DelegateSignature
struct ADefaultPlayerCharacter_C_VFX_Strength__DelegateSignature_Params
{
	float                                              VFX_Strength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.OnThrowableHitSurface__DelegateSignature
struct ADefaultPlayerCharacter_C_OnThrowableHitSurface__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
