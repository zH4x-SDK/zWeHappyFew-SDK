
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

// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.DestroyActorIfValid
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  refActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_DestroyActorIfValid(class AActor* refActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.DestroyActorIfValid");

	UBLIB_ScriptingHelpers_C_DestroyActorIfValid_Params params;
	params.refActor = refActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNpcPanickFleeAndDespawnTowardsPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     refAiCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  refDespawnPoint                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_SetNpcPanickFleeAndDespawnTowardsPoint(class AGlimpseAICharacter* refAiCharacter, class AActor* refDespawnPoint, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNpcPanickFleeAndDespawnTowardsPoint");

	UBLIB_ScriptingHelpers_C_SetNpcPanickFleeAndDespawnTowardsPoint_Params params;
	params.refAiCharacter = refAiCharacter;
	params.refDespawnPoint = refDespawnPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.RandomDestroyActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  consideredActor                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DestroyedActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_RandomDestroyActor(class AActor* consideredActor, class UObject* __WorldContext, bool* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.RandomDestroyActor");

	UBLIB_ScriptingHelpers_C_RandomDestroyActor_Params params;
	params.consideredActor = consideredActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestroyedActor != nullptr)
		*DestroyedActor = params.DestroyedActor;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.ClearTimers
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTimerHandle>    timers                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_ClearTimers(class AActor* WorldContextObject, class UObject* __WorldContext, TArray<struct FTimerHandle>* timers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.ClearTimers");

	UBLIB_ScriptingHelpers_C_ClearTimers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (timers != nullptr)
		*timers = params.timers;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.GetNPCDistanceToTargetAndOther
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     refNPC                         (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseCharacter*       refTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  refNPCDefaultLoc               (Parm, ZeroConstructor, IsPlainOldData)
// float                          distanceFromTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float                          distanceFromDefaultLoc         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           debugDistances                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isNPCFarFromTargetAndDefaultLoc (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           hasErrors                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_GetNPCDistanceToTargetAndOther(class AGlimpseAICharacter* refNPC, class AGlimpseCharacter* refTarget, class AActor* refNPCDefaultLoc, float distanceFromTarget, float distanceFromDefaultLoc, bool debugDistances, class UObject* __WorldContext, bool* isNPCFarFromTargetAndDefaultLoc, bool* hasErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.GetNPCDistanceToTargetAndOther");

	UBLIB_ScriptingHelpers_C_GetNPCDistanceToTargetAndOther_Params params;
	params.refNPC = refNPC;
	params.refTarget = refTarget;
	params.refNPCDefaultLoc = refNPCDefaultLoc;
	params.distanceFromTarget = distanceFromTarget;
	params.distanceFromDefaultLoc = distanceFromDefaultLoc;
	params.debugDistances = debugDistances;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isNPCFarFromTargetAndDefaultLoc != nullptr)
		*isNPCFarFromTargetAndDefaultLoc = params.isNPCFarFromTargetAndDefaultLoc;
	if (hasErrors != nullptr)
		*hasErrors = params.hasErrors;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNPCPatrolPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     GlimpseCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// class APatrolBase_C*           newPatrolPoint                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           refreshAiLogic                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_SetNPCPatrolPoint(class AGlimpseAICharacter* GlimpseCharacter, class APatrolBase_C* newPatrolPoint, bool refreshAiLogic, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.SetNPCPatrolPoint");

	UBLIB_ScriptingHelpers_C_SetNPCPatrolPoint_Params params;
	params.GlimpseCharacter = GlimpseCharacter;
	params.newPatrolPoint = newPatrolPoint;
	params.refreshAiLogic = refreshAiLogic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.isCharacterValid
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       GlimpseCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isNPCValid                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBLIB_ScriptingHelpers_C::STATIC_isCharacterValid(class AGlimpseCharacter* GlimpseCharacter, class UObject* __WorldContext, bool* isNPCValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C.isCharacterValid");

	UBLIB_ScriptingHelpers_C_isCharacterValid_Params params;
	params.GlimpseCharacter = GlimpseCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isNPCValid != nullptr)
		*isNPCValid = params.isNPCValid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
