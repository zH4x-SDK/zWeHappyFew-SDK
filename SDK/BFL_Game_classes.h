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

// BlueprintGeneratedClass BFL_Game.BFL_Game_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_Game_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Game.BFL_Game_C");
		return ptr;
	}


	void STATIC_PlayerFaceThing(class AGlimpseCharacter* Pawn, class USceneComponent* Thing, const struct FVector& Offset, float Duration, class UObject* __WorldContext);
	void STATIC_PlayerFaceActor(class AGlimpseCharacter* Pawn, class AActor* Actor, const struct FVector& Offset, float Duration, class UObject* __WorldContext);
	void STATIC_ReduceLockPickDuration(class APawn* Object, class UObject* __WorldContext);
	void STATIC_PuppetFleeToActor(class AGlimpseAICharacter* refAiCharacter, class AActor* refDespawnPoint, class UClass* refStatusEffect, class UObject* __WorldContext, bool* Success);
	void STATIC_LevelPlayerView(float Interp_Time, class UObject* __WorldContext);
	void STATIC_CheckDoorPlayerSide(class AGlimpseLockable* refDoor, class USceneComponent* frontTarget, class USceneComponent* backTarget, class APawn* refPlayerCharacter, bool PlayAnim, class UObject* __WorldContext);
	void STATIC_StartCutsceneFade(class AGlimpsePlayerController* refGlimpsePlayerController, float FloatDuration, class UObject* __WorldContext);
	void STATIC_SetPlayerLookAtPoint(class AController* refPlayerController, class APawn* refPlayerCharacter, class AActor* refLookAtPoint, float BlendTime, class UObject* __WorldContext);
	void STATIC_ShowDigSpotNotification(class UClass* refMapType, class AGlimpsePlayerController* refGlimpsePlayerController, class UObject* __WorldContext);
	void STATIC_HasSuit(class AGlimpseCharacter* refCharacter, class UObject* __WorldContext, TArray<class UClass*>* correctSuits, bool* HasSuit);
	void STATIC_KnockDownPlayer(const struct FVector& SourceLocation, class UObject* __WorldContext);
	void STATIC_RandomArrayElemAvoidElem(TArray<class UObject*> Array, class UObject* ElemToAvoid, class UObject* Object, class UObject* __WorldContext, class UObject** _, int* Index);
	class UClass* STATIC_RandomRecipe(int Island, bool LockedOnly, class UObject* __WorldContext);
	void STATIC_RemoveAllWeaponsFromInv(class AGlimpseCharacter* NPC, bool Melee, bool thrown, class UObject* __WorldContext);
	void STATIC_InstantSuspicionComplex(class AGlimpseCharacter* NPC, TEnumAsByte<EAISuspicionState> State, class AGlimpseAICharacter* SuspectedCharacter, class UObject* __WorldContext);
	void STATIC_SetPuppetAI(class UObject* __WorldContext, TArray<class AGlimpseAICharacter*>* Target);
	void STATIC_StandardConversationModeSettings(class UObject* __WorldContext, struct FConversationModeSettings* NewParam);
	void STATIC_AddHalfCapsuleToVector(const struct FVector& _, class AGlimpseAICharacter* NPC, class UObject* __WorldContext, struct FVector* __);
	void STATIC_GetExplicitCondition(class AActor* Actor, class UObject* __WorldContext, bool* _);
	void STATIC_SetAcceptableGift(class AGlimpseAICharacter* Target, class UClass* Class, class UObject* __WorldContext);
	void STATIC_ActorsDistance2D(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* _);
	void STATIC_KnockBackPawn(class AGlimpseCharacter* Target, float Amount, const struct FVector& SourceLocation, class UObject* __WorldContext);
	class UClass* STATIC_RandomManual(class UObject* __WorldContext);
	void STATIC_InstantSuspicion(class AGlimpseAICharacter* NPC, TEnumAsByte<EAISuspicionState> State, class UObject* __WorldContext);
	void STATIC_GetAIController(class AGlimpseAICharacter* _, class UObject* __WorldContext, class AGlimpseAIController** __);
	void STATIC_SetExplicitCondition(class AActor* Actor, bool bEnabled, class UObject* __WorldContext);
	void STATIC_PrintString(const struct FString& inString, class UObject* __WorldContext);
	void STATIC_ShowInGameTip(const struct FName& TipKey, class UObject* __WorldContext);
	void STATIC_IfIsAlive(class AGlimpseCharacter* Target, class UObject* __WorldContext);
	void STATIC_RandomArrayElem(TArray<class UObject*> Array, class UObject* __WorldContext, class UObject** _);
	void STATIC_Roll(float Chance, class UObject* __WorldContext, bool* _);
	void STATIC_ActorOverlapsPlayer(class AActor* Target, class UObject* __WorldContext, bool* _);
	void STATIC_RemovePickup(class UClass* PickupClass, class UObject* __WorldContext);
	void STATIC_AddPickup(class UObject* __WorldContext);
	void STATIC_NPCSetCollisionEnabled(class ACharacter* Target, bool Enabled, class UObject* __WorldContext);
	void STATIC_SetTriggerActive(class ATriggerBase* Target, bool Active, class UObject* __WorldContext);
	void STATIC_RefreshTargeting(class UObject* __WorldContext);
	void STATIC_TurnPawnTowardsActor(class AGlimpseCharacter* Pawn, class AActor* Actor, float Duration, class UObject* __WorldContext);
	void STATIC_CurrentTimeOfDayIsEnabledInStruct(const struct FsTimeOfDay& sTimeOfDay, class UObject* __WorldContext, bool* _);
	void STATIC_GetWorldRS(int sgEdSeed, class UObject* __WorldContext, struct FRandomStream* NewParam);
	void STATIC_RegisterEditorSeed(bool sgFirstTimeOBP, class UObject* __WorldContext, int* sgSeed);
	void STATIC_CompleteObjective(class UClass* Quest, const struct FName& Objective, class UObject* __WorldContext);
	void STATIC_ClassIsProjectile(class AActor* Class, class UObject* __WorldContext, bool* _);
	void STATIC_StopPolishLayer(class AGlimpseAICharacter* NewParam, bool StopBarks, bool StopAnim, class UObject* __WorldContext);
	void STATIC_StatusEffectShouldInteruptNPC(class UClass* StatusEffect, class UObject* __WorldContext, bool* _);
	void STATIC_GetPlayerPawn(class UObject* __WorldContext, class AGlimpsePlayerCharacter** _);
	void STATIC_SetIdleBarks(bool Enabled, class UObject* __WorldContext);
	void STATIC_RandomIntInRangeFromStream(class UObject* Object, int Min, int Max, class UObject* __WorldContext, int* _);
	void STATIC_MoveActorsToRandomPoints(TArray<class AActor*> Points, int sgEdSeed, class UObject* __WorldContext, TArray<class AActor*>* Actors);
	void STATIC_GetPlayerPawnAndController(class AActor* Actor, class UObject* WorldContext, class UObject* __WorldContext, class ADefaultPlayerCharacter_C** PlayerPawn, class AGlimpsePlayerController** Controller);
	void STATIC_StopCutscene(class AGlimpsePlayerController* PlayerController, class ASkeletalMeshActor* CutsceneBody, float BlendTime, class UObject* __WorldContext);
	void STATIC_PlayCutscene(class ACameraActor* CutsceneCamera, class ASkeletalMeshActor* CutsceneBody, class UAnimSequenceBase* CutsceneAnim, const struct FString& OnCompleteEvent, float CustomDuration, class UObject* __WorldContext, struct FTimerHandle* TimerHandle);
	void STATIC_GetPlayerController(class UObject* __WorldContext, class AGlimpsePlayerController** _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
