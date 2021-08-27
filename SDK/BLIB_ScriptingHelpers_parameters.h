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

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.DestroyActorIfValid
struct UBLIB_ScriptingHelpers_C_DestroyActorIfValid_Params
{
	class AActor*                                      refActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNpcPanickFleeAndDespawnTowardsPoint
struct UBLIB_ScriptingHelpers_C_SetNpcPanickFleeAndDespawnTowardsPoint_Params
{
	class AGlimpseAICharacter*                         refAiCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      refDespawnPoint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.RandomDestroyActor
struct UBLIB_ScriptingHelpers_C_RandomDestroyActor_Params
{
	class AActor*                                      consideredActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyedActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.ClearTimers
struct UBLIB_ScriptingHelpers_C_ClearTimers_Params
{
	TArray<struct FTimerHandle>                        timers;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.GetNPCDistanceToTargetAndOther
struct UBLIB_ScriptingHelpers_C_GetNPCDistanceToTargetAndOther_Params
{
	class AGlimpseAICharacter*                         refNPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           refTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      refNPCDefaultLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              distanceFromTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              distanceFromDefaultLoc;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               debugDistances;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isNPCFarFromTargetAndDefaultLoc;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               hasErrors;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNPCPatrolPoint
struct UBLIB_ScriptingHelpers_C_SetNPCPatrolPoint_Params
{
	class AGlimpseAICharacter*                         GlimpseCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APatrolBase_C*                               newPatrolPoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               refreshAiLogic;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.isCharacterValid
struct UBLIB_ScriptingHelpers_C_isCharacterValid_Params
{
	class AGlimpseCharacter*                           GlimpseCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isNPCValid;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
