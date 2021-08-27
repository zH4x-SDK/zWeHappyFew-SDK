#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBLIB_ScriptingHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BLIB_ScriptingHelpers.BLIB_ScriptingHelpers_C");
		return ptr;
	}


	void STATIC_DestroyActorIfValid(class AActor* refActor, class UObject* __WorldContext);
	void STATIC_SetNpcPanickFleeAndDespawnTowardsPoint(class AGlimpseAICharacter* refAiCharacter, class AActor* refDespawnPoint, class UObject* __WorldContext);
	void STATIC_RandomDestroyActor(class AActor* consideredActor, class UObject* __WorldContext, bool* DestroyedActor);
	void STATIC_ClearTimers(class AActor* WorldContextObject, class UObject* __WorldContext, TArray<struct FTimerHandle>* timers);
	void STATIC_GetNPCDistanceToTargetAndOther(class AGlimpseAICharacter* refNPC, class AGlimpseCharacter* refTarget, class AActor* refNPCDefaultLoc, float distanceFromTarget, float distanceFromDefaultLoc, bool debugDistances, class UObject* __WorldContext, bool* isNPCFarFromTargetAndDefaultLoc, bool* hasErrors);
	void STATIC_SetNPCPatrolPoint(class AGlimpseAICharacter* GlimpseCharacter, class APatrolBase_C* newPatrolPoint, bool refreshAiLogic, class UObject* __WorldContext);
	void STATIC_isCharacterValid(class AGlimpseCharacter* GlimpseCharacter, class UObject* __WorldContext, bool* isNPCValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
