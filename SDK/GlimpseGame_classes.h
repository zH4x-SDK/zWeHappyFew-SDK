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

// Class GlimpseGame.1DInventoryView
// 0x0000 (0x0028 - 0x0028)
class U1DInventoryView : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.1DInventoryView");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConversationAsset
// 0x0068 (0x0090 - 0x0028)
class UGlimpseConversationAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConversationAsset");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAnimationChain
// 0x0028 (0x0050 - 0x0028)
class UGlimpseAnimationChain : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAnimationChain");
		return ptr;
	}

};


// Class GlimpseGame.PuppetShow
// 0x0010 (0x0038 - 0x0028)
class UPuppetShow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PuppetShow");
		return ptr;
	}

};


// Class GlimpseGame.ActivePuppetShow
// 0x00E8 (0x0110 - 0x0028)
class UActivePuppetShow : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ActivePuppetShow");
		return ptr;
	}


	void OnSkipCutscene();
};


// Class GlimpseGame.PuppetShowPlayer
// 0x0010 (0x0038 - 0x0028)
class UPuppetShowPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PuppetShowPlayer");
		return ptr;
	}

};


// Class GlimpseGame.ActorSensingComponent
// 0x0080 (0x0170 - 0x00F0)
class UActorSensingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ActorSensingComponent");
		return ptr;
	}


	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void OnTimeOfDayChange();
	float GetVerticalVisionAngle();
	float GetSightVisionRadius();
	float GetProximityVisionRadius();
	float GetProximityVisionAngle();
	float GetPeripheralVisionAngle();
	float GetParacentralVisionAngle();
	float GetNearFrontVisionFactor();
	float GetNearAsideVisionFactor();
	float GetMaximumHearingRadius();
	float GetFurtherVisionRadius();
	float GetFurtherFrontVisionFactor();
	float GetFarFrontVisionFactor();
	float GetFarAsideVisionFactor();
	float GetCombatVisionRadius();
};


// Class GlimpseGame.AffectsDrugIntensityInterface
// 0x0000 (0x0028 - 0x0028)
class UAffectsDrugIntensityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AffectsDrugIntensityInterface");
		return ptr;
	}


	float GetDrugIntensity();
};


// Class GlimpseGame.AkEventsNotifyState
// 0x0010 (0x0040 - 0x0030)
class UAkEventsNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AkEventsNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.AudioVolumeInsiderInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioVolumeInsiderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AudioVolumeInsiderInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAudioVolume
// 0x00B0 (0x04E0 - 0x0430)
class AGlimpseAudioVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0430(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAudioVolume");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class GlimpseGame.AvailableDLC
// 0x0038 (0x0060 - 0x0028)
class UAvailableDLC : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AvailableDLC");
		return ptr;
	}

};


// Class GlimpseGame.BarkNotify
// 0x0038 (0x0070 - 0x0038)
class UBarkNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BarkNotify");
		return ptr;
	}

};


// Class GlimpseGame.BarkNotifyState
// 0x0038 (0x0068 - 0x0030)
class UBarkNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BarkNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.BountyComponent
// 0x0018 (0x0108 - 0x00F0)
class UBountyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BountyComponent");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_AutoBase
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_AutoBase : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_AutoBase");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_AttackAvailable
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_AttackAvailable : public UBTDecorator_AutoBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_AttackAvailable");
		return ptr;
	}

};


// Class GlimpseGame.NeedPOIComponent
// 0x0158 (0x0248 - 0x00F0)
class UNeedPOIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x00F0(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NeedPOIComponent");
		return ptr;
	}


	void SetSlotMontage(class UAnimMontage* Montage, int SlotIndex);
	void OnConversationFinished(bool bSuccess);
	bool IsReserved(class AGlimpseAICharacter* UserCharacter);
	bool IsInUse();
	bool IsBlocked();
	struct FVector GetSlotLocation(int SlotIndex);
};


// Class GlimpseGame.GlimpseAIController
// 0x05F0 (0x0B10 - 0x0520)
class AGlimpseAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x5F0];                                     // 0x0520(0x05F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIController");
		return ptr;
	}


	bool UseAlternateLookAtWeights();
	void SwitchRootBehaviour_Specific(class UBehaviorTree* Behaviour);
	void SwitchRootBehaviour(TEnumAsByte<EAICustomBehaviour> Type);
	void SwitchBehaviour(TEnumAsByte<EAICustomBehaviour> Type, class UBehaviorTree* Behaviour);
	bool SuspendBehaviour(class UObject* ContextObject);
	void SetTargetLocation(const struct FVector& NewLocation);
	void SetTargetActor(class AActor* Actor);
	void SetSuspicionValue(float InSuspicionValue);
	void SetSuspicionState(TEnumAsByte<EAISuspicionState> InSuspicionState);
	void SetSpawner(class AGlimpseAISpawner* Spawner);
	void SetPatrolActor(class AActor* Actor);
	void SetMovementSpeed(TEnumAsByte<EWalkPace> Pace);
	void SetMoraleState(TEnumAsByte<EAIMoraleState> InMoraleState, float Duration);
	void SetLookAtOverride(class UObject* Source, class AActor* LookAtActor);
	void SetLookAtActorKey(const struct FBlackboardKeySelector& BBKey);
	void SetDetectionTarget(class AActor* InDetectionTarget);
	void SetDefaultRootBehaviour(class UBehaviorTree* Behaviour);
	bool SenseActor_Vision(class AActor* InSensePawn);
	bool SenseActor_Hearing(class AActor* InSensePawn, bool bCanSee);
	bool SenseActor_Direct(class AActor* InSensePawn, float DirectRange);
	void ResumeRootBehaviour();
	bool ResumeBehaviour(class UObject* ContextObject);
	void OnCharacterTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnCharacterShoved(class AGlimpseCharacter* ShoveSource, const struct FName& ShoveMoveName);
	bool HaveLineOfSightOnTarget(float Tolerance);
	float GetTargetCooldownEndTime(class AGlimpseCharacter* Target, const struct FGameplayTag& CooldownTag);
	class AActor* GetTargetActor();
	float GetSuspicionValue();
	TEnumAsByte<EAISuspicionState> GetSuspicionState();
	class AActor* GetPatrolActor();
	TEnumAsByte<EAIMoraleState> GetMoraleState();
	struct FVector GetLookAtLocation();
	class AActor* GetLookAtActor();
	class AActor* GetDetectionTarget();
	class UBehaviorTree* GetDefaultRootBehaviour();
	void FaceLookAtActor(bool bEnabled);
	void ClearSuspicion();
	void ClearPatrolActor(bool TestNavMesh);
	void ClearLookAtOverride(class UObject* Source);
	void AddSuspicionValue(float InSuspicionValue);
	void AddCooldownTargetDuration(class AGlimpseCharacter* Target, const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class GlimpseGame.BTDecorator_CharacterStat
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_CharacterStat : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_CharacterStat");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_DynamicallySpawn
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_DynamicallySpawn : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_DynamicallySpawn");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_FindCharacters
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_FindCharacters : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_FindCharacters");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_FindPOI
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FindPOI : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_FindPOI");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_IsActorInArena
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_IsActorInArena : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_IsActorInArena");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_IsPlayerInConvo
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_IsPlayerInConvo : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_IsPlayerInConvo");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_LocationAvailable
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_LocationAvailable : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_LocationAvailable");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_IsInCombatRange
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsInCombatRange : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_IsInCombatRange");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_PuppetBrainTask
// 0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_PuppetBrainTask : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_PuppetBrainTask");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_Message
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_Message : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_Message");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_SetArena
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_SetArena : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_SetArena");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_ShouldRunDecorator
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ShouldRunDecorator : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_ShouldRunDecorator");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_TargetCooldown
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_TargetCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_TargetCooldown");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_TimeInterval
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TimeInterval : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_TimeInterval");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldStyle
// 0x0050 (0x0078 - 0x0028)
class UGlimpseWorldStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFootprint
// 0x0050 (0x0078 - 0x0028)
class UGlimpseFootprint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFootprint");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadDecorationSet
// 0x0020 (0x0048 - 0x0028)
class UGlimpseRoadDecorationSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadDecorationSet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTaggedDecorationSet
// 0x0010 (0x0038 - 0x0028)
class UGlimpseTaggedDecorationSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTaggedDecorationSet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDecorator
// 0x00A0 (0x00C8 - 0x0028)
class UGlimpseDecorator : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDecorator");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLayoutActor
// 0x00B0 (0x04E0 - 0x0430)
class AGlimpseLayoutActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0430(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLayoutActor");
		return ptr;
	}


	struct FGlimpseRandomStream STATIC_RandomStream(struct FGlimpseRandomStream* Stream);
	int STATIC_RandomInt(int MinValue, int MaxValuePlusOne, struct FGlimpseRandomStream* Stream);
	float STATIC_RandomFloat(float MinValue, float MaxValue, struct FGlimpseRandomStream* Stream);
	struct FVector2D STATIC_RandomDirection(float MeanAngle, float DeltaAngle, float StandardDeviation, struct FGlimpseRandomStream* Stream);
	void OnWorldBuilderComplete(bool bLoadingSaveGame);
	void OnPlayerPlaced(bool bLoadingSaveGame);
	struct FRotator STATIC_GetComponentRelativeRotation(class USceneComponent* Component);
	struct FVector STATIC_GetComponentRelativeLocation(class USceneComponent* Component);
};


// Class GlimpseGame.GameplayVolumeInsiderInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayVolumeInsiderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GameplayVolumeInsiderInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseGameplayVolume
// 0x0120 (0x0550 - 0x0430)
class AGlimpseGameplayVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0430(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameplayVolume");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ChangeTrespassingFlag(bool bNewFlag);
	void ChangeStealingFlag(bool bNewFlag);
	void ChangeNoWaitingFlag(bool bNewFlag);
	void ChangeNoSavingFlag(bool bNewFlag);
	void ChangeNoFastTravelFlag(bool bNewFlag);
};


// Class GlimpseGame.GlimpsePickup
// 0x02A0 (0x0780 - 0x04E0)
class AGlimpsePickup : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x04E0(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickup");
		return ptr;
	}


	void OnOverlapCallback(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHitCallback(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnEnterInventory(class UInventoryComponent* NewOwner, bool bRestoringInventory);
	void OnEndInteraction(class APawn* InteractSource);
	void OnDropped(class AGlimpseCharacter* DroppingCharacter);
	void OnCompleteInteraction(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanInteract(class APawn* InteractSource);
	void OnBeginInteraction(class APawn* InteractSource);
	bool IsEquipped();
	bool IsBeingUnequipped();
	bool IsBeingEquipped();
	struct FText GetUseEquipText();
	TEnumAsByte<EStandardAnimationMovement> GetMovementTypeWhenEquipped();
	class AGlimpseCharacter* GetLastCharacterOwner();
	TArray<struct FInventoryItemStat> GetItemStats();
	class AGlimpseCharacter* GetCharacterOwner();
	void DelayedDestroy();
	void DamageDurability(float DurabilityCost, bool bPlayFX, bool bApplyDurabilityTags);
	bool CanInteractWhenEquipped();
	bool CanCrouchWhenEquipped();
	void AbandonPickupSpawner();
};


// Class GlimpseGame.Quest
// 0x0398 (0x03C0 - 0x0028)
class UQuest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x398];                                     // 0x0028(0x0398) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.Quest");
		return ptr;
	}


	void SetQuestState(const struct FName& State);
	void SetObjectiveStatus(const struct FName& ObjectiveKey, TEnumAsByte<EObjectiveStatus> InStatus, bool bForceActivate);
	void SetObjectiveCounter(const struct FName& ObjectiveKey, int NewCount, bool bForceActivate);
	void ResetQuest();
	void ReceiveQuestUpdated(class AGlimpsePlayerController* Controller, TEnumAsByte<EQuestStatus> status);
	void ReceiveQuestUnbound();
	void ReceiveQuestBound(class AGlimpsePlayerController* Controller);
	void ReceiveObjectiveUpdated(class AGlimpsePlayerController* Controller, const struct FObjective& Objective, TEnumAsByte<EObjectiveStatus> status);
	bool IsVariableBound(const struct FName& Variable);
	bool IsContextBound(const struct FName& BindContext);
	bool IsBound();
	void IncrementObjectiveCounter(const struct FName& ObjectiveKey, int Increment, bool bForceActivate);
	TEnumAsByte<EQuestStatus> GetQuestStatus();
	struct FName GetQuestState();
	struct FName GetQuestKey();
	TArray<struct FName> GetObjectivesWithStatus(TEnumAsByte<EObjectiveStatus> status);
	TEnumAsByte<EObjectiveStatus> GetObjectiveStatus(const struct FName& ObjectiveKey);
	int GetObjectiveCounter(const struct FName& ObjectiveKey);
	void GetCurrentObjective(struct FName* ObjectiveName, bool* MultipleObjectives);
	void FailQuest();
	void DeactivateObjective(const struct FName& ObjectiveKey);
	void CompleteQuest();
	void ActivateQuest();
};


// Class GlimpseGame.GlimpseSpawnModel
// 0x0188 (0x01B0 - 0x0028)
class UGlimpseSpawnModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSpawnModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameInterface
// 0x0000 (0x0028 - 0x0028)
class UGlimpseSaveGameInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStreamingProxy
// 0x0058 (0x0080 - 0x0028)
class UGlimpseStreamingProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStreamingProxy");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStreamingLevel
// 0x00C8 (0x00F0 - 0x0028)
class UGlimpseStreamingLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStreamingLevel");
		return ptr;
	}


	void OnLevelUnloaded();
	void OnLevelShown();
	void OnLevelLoaded();
	void OnLevelHidden();
};


// Class GlimpseGame.GlimpseStreamingManager
// 0x07A8 (0x07D0 - 0x0028)
class UGlimpseStreamingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7A8];                                     // 0x0028(0x07A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStreamingManager");
		return ptr;
	}


	struct FName STATIC_GetFeatureInstanceNameFromLevel(class ULevel* Level);
	struct FName STATIC_GetFeatureInstanceNameFromActor(class AActor* Actor);
};


// Class GlimpseGame.GlimpseWorldElement
// 0x01D0 (0x01F8 - 0x0028)
class UGlimpseWorldElement : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0028(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldElement");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldIntersection
// 0x0138 (0x0330 - 0x01F8)
class UGlimpseWorldIntersection : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x01F8(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldIntersection");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldRoad
// 0x0188 (0x0380 - 0x01F8)
class UGlimpseWorldRoad : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x01F8(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldRoad");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClass
// 0x0018 (0x0040 - 0x0028)
class UGlimpseAIClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClass");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_Random
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Random : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_Random");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldStreet
// 0x0020 (0x0218 - 0x01F8)
class UGlimpseWorldStreet : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldStreet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldCycle
// 0x0028 (0x0220 - 0x01F8)
class UGlimpseWorldCycle : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldCycle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldDecoration
// 0x0048 (0x0240 - 0x01F8)
class UGlimpseWorldDecoration : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldDecoration");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldExclude
// 0x0000 (0x01F8 - 0x01F8)
class UGlimpseWorldExclude : public UGlimpseWorldElement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldExclude");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseZoningInterface
// 0x0000 (0x0028 - 0x0028)
class UGlimpseZoningInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseZoningInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldBridge
// 0x0050 (0x0248 - 0x01F8)
class UGlimpseWorldBridge : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x01F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldBridge");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldEncounter
// 0x0048 (0x0240 - 0x01F8)
class UGlimpseWorldEncounter : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldEncounter");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldFiller
// 0x0050 (0x0248 - 0x01F8)
class UGlimpseWorldFiller : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x01F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldFiller");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldWall
// 0x0130 (0x0328 - 0x01F8)
class UGlimpseWorldWall : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x01F8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldWall");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldBiome
// 0x0008 (0x0200 - 0x01F8)
class UGlimpseWorldBiome : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldBiome");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldGraph
// 0x0108 (0x0130 - 0x0028)
class UGlimpseWorldGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0028(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldGraph");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseIntersection
// 0x0070 (0x0550 - 0x04E0)
class AGlimpseIntersection : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x04E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseIntersection");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadModel
// 0x0330 (0x0358 - 0x0028)
class UGlimpseRoadModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0028(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseHighwayManager
// 0x0068 (0x0090 - 0x0028)
class UGlimpseHighwayManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHighwayManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIManager
// 0x03B8 (0x03E0 - 0x0028)
class UGlimpseAIManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x0028(0x03B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIManager");
		return ptr;
	}


	void OnMorning();
	void OnEvening();
};


// Class GlimpseGame.GlimpseActiveConversation
// 0x00F0 (0x0118 - 0x0028)
class UGlimpseActiveConversation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseActiveConversation");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionComposite
// 0x0020 (0x0048 - 0x0028)
class UGlimpseSuspicionComposite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionComposite");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionContext
// 0x0140 (0x0188 - 0x0048)
class UGlimpseSuspicionContext : public UGlimpseSuspicionComposite
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0048(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionContext");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionAttractor
// 0x0038 (0x01C0 - 0x0188)
class UGlimpseSuspicionAttractor : public UGlimpseSuspicionContext
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0188(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionAttractor");
		return ptr;
	}

};


// Class GlimpseGame.SecurityNodeComponent
// 0x00D0 (0x01C0 - 0x00F0)
class USecurityNodeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SecurityNodeComponent");
		return ptr;
	}


	void ToggleNode(class APawn* Instigator);
	void RestoreNode(class APawn* Instigator);
	bool IsNodeActive();
	void DisableNode(class APawn* Instigator);
	void DeactivateNode(class APawn* Instigator);
	void ActivateNode(class APawn* Instigator);
};


// Class GlimpseGame.GlimpseSecurityAlarm
// 0x0060 (0x0490 - 0x0430)
class AGlimpseSecurityAlarm : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0430(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSecurityAlarm");
		return ptr;
	}


	void OnNodeDeactivated(class USecurityNodeComponent* InSecurityNode, class APawn* InInstigator);
	void OnNodeActivated(class USecurityNodeComponent* InSecurityNode, class APawn* InInstigator, class USecurityNodeComponent* TriggerNode);
	bool IsActive();
	void Deactivate(class APawn* InInstigator);
	void Activate(class APawn* InInstigator, class USecurityNodeComponent* TriggerNode);
};


// Class GlimpseGame.GlimpseSearchPointComponent
// 0x0070 (0x03D0 - 0x0360)
class UGlimpseSearchPointComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0360(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSearchPointComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseArenaAnchor
// 0x0030 (0x0460 - 0x0430)
class AGlimpseArenaAnchor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseArenaAnchor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionCharacter
// 0x02A8 (0x0430 - 0x0188)
class UGlimpseSuspicionCharacter : public UGlimpseSuspicionContext
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0188(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionCharacter");
		return ptr;
	}


	void SetSuspicionState(class AGlimpseAIController* Agent, TEnumAsByte<EAISuspicionState> State, TEnumAsByte<EGlimpseSuspicionReason> Reason);
	int GetNumAgents();
	TEnumAsByte<ESuspicionConformityRequest> GetConformityType();
	void ClearSuspicionState(class AGlimpseAIController* Agent, TEnumAsByte<EGlimpseResignReason> Reason);
	bool AnyAgentHasLineOfSight();
	bool AgentHasLineOfSight(class AGlimpseAIController* Agent);
};


// Class GlimpseGame.GlimpseSuspicionManager
// 0x0098 (0x00E0 - 0x0048)
class UGlimpseSuspicionManager : public UGlimpseSuspicionComposite
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionManager");
		return ptr;
	}


	class AGlimpseAICharacter* STATIC_SpawnEnemyForFight(const struct FName& FightTag, const struct FTransform& EnemyTransform, class UClass* EnemyClass, class UBehaviorTree* EnemyBehavior);
	void STATIC_IgnoreSuspicionForTarget(bool NoSuspicion, class AActor* SuspicionTarget);
	void STATIC_ForceSuspicionForTarget(TEnumAsByte<EAISuspicionState> SuspicionState, class AActor* SuspicionTarget, bool SuspicionIsLocked, class AGlimpseAIController* Agent);
	void STATIC_ForceSuspicion(class AGlimpseAIController* AgentController, TEnumAsByte<EAISuspicionState> SuspicionState, bool SuspicionIsLocked);
	class UGlimpseSuspicionContext* STATIC_CreateAttractorForTarget(TEnumAsByte<EGlimpseSuspicionPriority> SuspicionType, class AActor* SuspicionTarget);
	int STATIC_CreateAttractorForSearch(const struct FName& AlarmTag);
	void STATIC_ClearSuspicionForTarget(class AActor* SuspicionTarget);
	void STATIC_ClearAttractorFromSearch();
	void STATIC_ClearAttractorForTarget(class AActor* SuspicionTarget);
	void STATIC_AgentIgnoreSuspicionForTarget(bool NoSuspicion, class AGlimpseAIController* Agent, class AActor* SuspicionTarget);
};


// Class GlimpseGame.GlimpseGameMode
// 0x1290 (0x1790 - 0x0500)
class AGlimpseGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x1290];                                    // 0x0500(0x1290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameMode");
		return ptr;
	}


	void ToggleHandsTooClose();
	void ToggleCombatToken();
	float TimeSinceAttackUsedGlobally(const struct FName& AttackName);
	void StartCustomBroadcast(const struct FName& BroadcastKey, float StartTime, bool bTV, bool bRadio, bool bPA);
	void ShowVisionRanges();
	void ShowSuspicionHistory();
	void ShowSmell();
	void ShowPOI();
	void ShowNoise();
	void ShowNeedsIcons();
	void ShowDebugHandsTooClose();
	void ShowCombat();
	void ShowCharge();
	void SetTime(int Hours, int Minutes, bool bNotifyObservers);
	void SetGameFlagValue(const struct FName& InName, int Value);
	void SetGameFlag(const struct FName& InName);
	void SetDayAndTime(int InDay, int InHours, int InMinutes);
	void SetDay(int InDay);
	void ResetTimeScaleOverride();
	void ResetGameFlags();
	float RealTimeToGameTime(float InRealTime);
	void OverrideTimeScale(float InTimeScaleOverride);
	void NoSuspicion();
	void NoMusic();
	void NoAISpawns();
	void MarkDLCIntegrated(const struct FName& DLCName, const struct FIntPoint& Version);
	void LogGameFlags();
	void ListBroadcasts();
	bool IsPermadeath();
	bool IsGameFlagSet(const struct FName& InName);
	bool IsDLCIntegrated(const struct FName& DLCName);
	struct FTimespan GetTimestamp();
	float GetTimeScale();
	void GetTimeOfDayTime(TEnumAsByte<ETimeOfDay> InTimeOfDay, unsigned char* OutHours, unsigned char* OutMinutes, unsigned char* OutSeconds);
	int GetTimeOfDaySerial();
	float GetTimeOfDayFraction(TEnumAsByte<ETimeOfDay> InTimeOfDay);
	TEnumAsByte<ETimeOfDay> GetTimeOfDay();
	float GetTimeFraction();
	void GetTime(unsigned char* OutHours, unsigned char* OutMinutes, unsigned char* OutSeconds);
	TEnumAsByte<EGlimpseGameDifficulty> GetSuspicionDifficulty();
	TEnumAsByte<EGlimpseGameDifficulty> GetSurvivalDifficulty();
	struct FSandboxStatistics GetSandboxStatistics();
	class UGlimpseNewspaper* GetNewspaper();
	struct FIntPoint GetIntegratedDLCVersion(const struct FName& DLCName);
	int GetGameFlag(const struct FName& InName);
	TEnumAsByte<EGlimpseGameDifficulty> GetGameDifficulty();
	unsigned char GetDay();
	struct FDateTime GetDateTime(bool ReturnNowIfTimeDoesntMove);
	TEnumAsByte<EStoryCharacter> GetCurrentCharacterType();
	TEnumAsByte<EGlimpseGameDifficulty> GetCombatDifficulty();
	class UGlimpseBroadcaster* GetBroadcaster();
	float GameTimeToRealTime(float InGameTime);
	void EnableSpawnWithinLiveness();
	bool DoesDifficultyRequireNeed(TEnumAsByte<ESurvivalNeed> SurvivalNeed);
	void DisableSpawnWithinLiveness();
	void ClearGameFlag(const struct FName& InName);
	void AlwaysShowSuspicion();
	void AdvanceToTime(int Hours, int Minutes, bool bNotifyObservers);
	void AdvanceOneDay(bool bNotifyObservers);
	void AddTimespanObserver(const struct FScriptDelegate& Delegate, const struct FTimespan& InTime, bool bOnce);
	void AddTimeOfDayObserver(const struct FScriptDelegate& Delegate, TEnumAsByte<ETimeOfDay> InTimeOfDay, bool bOnce);
	void AddTimeObserver(const struct FScriptDelegate& Delegate, int InHours, int InMinutes, int InSeconds, bool bOnce);
	void AddTimeDelayObserver(const struct FScriptDelegate& Delegate, int InDelayHours, int InDelayMinutes);
	void AddTime(int Hours, int Minutes, bool bNotifyObservers);
	void AddAutoApplyEffect(class UClass* StatusEffect);
};


// Class GlimpseGame.GlimpseBroadcaster
// 0x0140 (0x0168 - 0x0028)
class UGlimpseBroadcaster : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBroadcaster");
		return ptr;
	}


	void RemoveBroadcastsObserver(const struct FScriptDelegate& Delegate);
	void RemoveBroadcastActor(class AActor* Actor);
	bool IsBroadcastActor(class AActor* Actor);
	class UTexture* GetBroadcastVideoTexture();
	class UMaterialInterface* GetBroadcastVideoMaterialByName(const struct FString& MaterialName);
	class UMaterialInterface* GetBroadcastVideoMaterialByIndex(int Index);
	void EndPlayBroadcastActor(class AActor* Actor, TEnumAsByte<EEndPlayReason> Reason);
	void AddManualBroadcastActor(class AActor* Actor, TEnumAsByte<EGlimpseBroadcastType> BroadcastType, bool bLongRange, bool bDontPlayIntermissionAudio);
	void AddBroadcastsObserver(const struct FScriptDelegate& Delegate);
	void AddBroadcastActor(class AActor* Actor, TEnumAsByte<EGlimpseBroadcastType> BroadcastType, bool bLongRange, bool bDontPlayIntermissionAudio);
};


// Class GlimpseGame.GlimpseAssetCache
// 0x02B8 (0x02E0 - 0x0028)
class UGlimpseAssetCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0028(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAssetCache");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlayerSpawn
// 0x0000 (0x0430 - 0x0430)
class AGlimpsePlayerSpawn : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerSpawn");
		return ptr;
	}


	void UnlockAsShelterSpawn(const struct FName& ShelterName);
	void OnRespawn(class AGlimpsePlayerCharacter* PlayerCharacter);
};


// Class GlimpseGame.GlimpseSubtitleManager
// 0x0220 (0x0248 - 0x0028)
class UGlimpseSubtitleManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0028(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSubtitleManager");
		return ptr;
	}

};


// Class GlimpseGame.RecurringTaskComponent
// 0x0028 (0x0118 - 0x00F0)
class URecurringTaskComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.RecurringTaskComponent");
		return ptr;
	}


	void SetTaskPerformed(const struct FName& TaskName);
	void RemoveTimeModifier(const struct FName& ModifierName, const struct FName& TaskName);
	void RemoveRecurringTask(const struct FName& TaskName);
	bool GetTimeUntilTaskDue(const struct FName& TaskName, struct FTimespan* OutTimeUntilTaskDue);
	void AddOrUpdateTimeModifier(const struct FName& ModifierName, const struct FName& TaskName, const struct FTimespan& DurationUntilDue, float ModifierPercentage);
	void AddOrUpdateRecurringTask(const struct FName& TaskName, const struct FTimespan& DurationUntilDue, bool bPermanent);
};


// Class GlimpseGame.GlimpsePlayerController
// 0x0D10 (0x1470 - 0x0760)
class AGlimpsePlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0xD10];                                     // 0x0760(0x0D10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerController");
		return ptr;
	}


	void ViewNextLore(const struct FName& LoreKey);
	void ViewLore(const struct FName& LoreKey, int LoreIndex);
	void UpdateAchievementProgress(const struct FString& AchievementName, float Percent);
	void UnlockRecipe(class UClass* RecipeType);
	void ToggleWeapon();
	void SuspendNotifications();
	void Suicide();
	bool StartExplictInteraction(class UInteractionComponent* Interaction, bool bSkipCheck);
	void ShowTutorialWidget(const struct FName& TipKey);
	void ShowStashMenu();
	void ShowSleepDurationBox(class UObject* Source);
	void ShowPlayerMenuWithContext(TEnumAsByte<EPlayerMenu> MenuType, const struct FName& ContextKey);
	void ShowPlayerMenu(TEnumAsByte<EPlayerMenu> MenuType);
	void ShowNotificationByKeyWithContext(const struct FName& NotificationKey, TEnumAsByte<EPlayerMenu> Menu, const struct FName& Context, bool bUseCheckmark);
	void ShowNotificationByKeyWithArgs(const struct FName& NotificationKey, TArray<struct FString> ArgKeys, TArray<struct FText> ArgText);
	void ShowNotificationByKey(const struct FName& NotificationKey);
	void ShowNotification(const struct FNotification& InNotification);
	void ShowMessageBoxConfirm(const struct FText& Title, const struct FText& Body, const struct FScriptDelegate& ConfirmCallback, const struct FScriptDelegate& CancelCallback);
	void ShowInGameTipByKey(const struct FName& TipKey);
	void ShowInGameTip(const struct FInGameTip& InGameTip);
	void ShowDeathMenu(TEnumAsByte<EDeathScreen> DeathType, const struct FScriptDelegate& MenuHiddenCallback);
	bool ShouldDisableHeadBobbing();
	void SetTutorialStep(int step);
	void SetTargetLocked(bool bLocked);
	void SetTargetActor(class AActor* NewTargetActor, bool bForce);
	void SetShowMainSheltersOnMap(bool Show);
	void SetProfileFlagValue(const struct FName& InName, int Value);
	void SetProfileFlag(const struct FName& InName);
	void SetPlayerSubMenuEnabled(TEnumAsByte<EPlayerMenu> MenuType, bool Enabled);
	void SetPlayerMaxCarryWeightOffset(float Val);
	void SetEnableOverrideConformityRequests(bool bInEnable);
	void SetCutsceneInputMode(bool bActivate, bool bSuppressLetterbox);
	void SetConversationTargetActor(class AActor* InTarget);
	void SetConversationTarget(class AGlimpseCharacter* InTarget);
	void SetConversationModeSettings(const struct FConversationModeSettings& InSettings);
	void SetConformityAnnoyedReasonOverride(const struct FName& InAnnoyedReason);
	void SetCanUseHandsForEquippablesOrItems(bool CanUse);
	void SetCanCraftWithStash(bool Val);
	void SetCanAccessPlayerMenu(bool CanAccess);
	void SetBridgeChallengeComplete(const struct FVector& WorldLocation);
	void SetAllowGameModeMenu(bool NewValue);
	void ResumeNotifications(bool bCatchUp, bool NotSecondary);
	void ResetViewedInGameTips();
	void ResetCutscene();
	void ResetCompletedBridges();
	void ResetCollectibles();
	void ResetCinematicMode();
	void ResetAchievements();
	void RemoveOverrideConformityRequest(const struct FName& InRequest);
	void RemoveGameplayCountdown(const struct FName& CountdownReference);
	void RemoveAllGameplayCountdowns();
	void RefreshTargetInteraction();
	void RebuildInventoryFromDump();
	void QuickSave();
	void QuickLoad();
	void PushConversationModeWithSkip();
	void PushConversationModeWithoutSkip();
	void PushConversationMode();
	void PopConversationMode();
	void OnStatusEffectRemoved(class UGlimpseStatusEffectBase* Effect);
	void OnStatusEffectApplied(class UGlimpseStatusEffectBase* Effect);
	void OnCountdownComplete(const struct FName& CountdownReference);
	void OnCollectibleAwarded(class UGlimpseCollectibleGroup* Group, const struct FName& CollectibleKey);
	void OnCharacterEndUsableInteraction(class APawn* UseSource, class AActor* UseTarget);
	void OnCharacterCompleteUsableInteraction(class APawn* UseSource, class AActor* UseTarget);
	void OnCharacterCompleteInteraction(class APawn* InteractSource);
	void MoveInventoryToStash(bool includeHolster, bool includeClothing, bool includeQuest);
	void MarkQuestTracked(class UQuest* Quest);
	void ListQuests(const struct FString& Command);
	bool IsTutorialWidgetDisplayed();
	bool IsRecipeUnlocked(class UClass* RecipeType);
	bool IsProfileFlagSet(const struct FName& InName);
	bool IsPlayerMenuVisible();
	bool IsPlayerInputEnabled(TEnumAsByte<EGlimpsePlayerInput> Type);
	bool IsLoreViewed(const struct FName& LoreKey);
	bool IsInGameTipViewed(const struct FName& TipKey);
	bool IsCollectibleAwarded(class UGlimpseCollectibleGroup* Group, const struct FName& CollectibleKey);
	void HideQuestCompletionWidget();
	void HidePlayerMenu();
	void HideInGameTipByKey(const struct FName& TipKey);
	void HideInGameTip();
	void HideDeathMenu();
	int GetTutorialStep();
	bool GetTargetLocked();
	class UInteractionComponent* GetTargetInteraction(TEnumAsByte<EInteraction> InteractionType);
	class UInventoryComponent* GetStash();
	class UQuest* GetQuestInstance(class UClass* QuestType);
	int GetProfileFlag(const struct FName& InName);
	TEnumAsByte<EPlayerSuspicionLevel> GetPlayerSuspicionLevel();
	float GetPlayerMaxCarryWeightOffset();
	float GetPlayerCarriedWeightWarningLimit();
	TEnumAsByte<EGlimpseAnnoyingEvent> GetPlayerAnnoyedReason();
	bool GetObjectiveMapMarkerLocationAndRadius(class UClass* QuestType, const struct FName& QuestState, bool Get3DPosition, TArray<struct FVector>* MapMarkerLocations, TArray<float>* MapMarkersAreaRadius);
	bool GetObjectiveMapMarkerLocation(class UClass* QuestType, const struct FName& QuestState, bool Get3DPosition, TArray<struct FVector>* MapMarkerLocations);
	float GetMaxPlayerCarriedWeight();
	class AGlimpsePlayerCameraManager* GetGlimpsePlayerCameraManager();
	class AGlimpseHUD* GetGlimpseHUD();
	class AGlimpsePlayerCharacter* GetGlimpseCharacter();
	float GetGameplayCountdownTimeRemaining(const struct FName& CountdownReference);
	bool GetCurrentInputDeviceIsController();
	bool GetCanUseHandsForEquippablesOrItems();
	bool GetCanCraftWithStash();
	void Flashback(class UGlimpseCollectibleGroup* Group, const struct FName& CollectibleKey, float EaseOutTime, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& FadeColor);
	void EnablePlayerInput(TEnumAsByte<EGlimpsePlayerInput> Type, bool bActivate);
	void EnableCombatInput(bool bActivate);
	void DumpGlimpseStats();
	void DebugShowTutorialWidget(const struct FName& TipKey);
	void DebugShowDeathMenu();
	void DebugQuest(const struct FString& Command);
	void ClearProfileFlag(const struct FName& InName);
	void ClearOverrideConformityRequests();
	bool CanShowPlayerMenu();
	void AwardCollectible(class UGlimpseCollectibleGroup* Group, const struct FName& CollectibleKey);
	void AwardAchievement(const struct FString& AchievementName);
	void AutoSave();
	void AutoLoad();
	void AllowShowSkipBoxInCutsceneWidget(bool Show);
	void AddOverrideConformityRequest(const struct FName& InRequest);
	void AddGameplayCountdown(const struct FName& CountdownReference, float Duration);
};


// Class GlimpseGame.CharacterState
// 0x0018 (0x0040 - 0x0028)
class UCharacterState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterState");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateMachineComponent
// 0x0020 (0x0110 - 0x00F0)
class UCharacterStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateMachineComponent");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateHitReaction
// 0x00C8 (0x0108 - 0x0040)
class UCharacterStateHitReaction : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0040(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateHitReaction");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateBlock
// 0x0010 (0x0050 - 0x0040)
class UCharacterStateBlock : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateBlock");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateMantle
// 0x0020 (0x0060 - 0x0040)
class UCharacterStateMantle : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateMantle");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateCarryCorpse
// 0x0028 (0x0068 - 0x0040)
class UCharacterStateCarryCorpse : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateCarryCorpse");
		return ptr;
	}


	void OnCorpseHitCallback(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GlimpseGame.CharacterStateCombatMove
// 0x02D8 (0x0318 - 0x0040)
class UCharacterStateCombatMove : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0040(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateCombatMove");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateParry
// 0x0010 (0x0050 - 0x0040)
class UCharacterStateParry : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateParry");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateLanding
// 0x0018 (0x0058 - 0x0040)
class UCharacterStateLanding : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateLanding");
		return ptr;
	}

};


// Class GlimpseGame.InteractionComponent
// 0x0200 (0x02F0 - 0x00F0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x00F0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InteractionComponent");
		return ptr;
	}


	void TickInteraction(class APawn* InteractSource, float DeltaSeconds);
	bool ShouldShowPrompt();
	void SetToggleableSecondaryInteractionEnabled(bool bEnable);
	bool IsBeingInteracted();
	void EndInteraction(class APawn* InteractSource);
	void DenyInteraction(class APawn* InteractSource);
	void CompleteInteraction(class APawn* InteractSource, bool bSoundFeedback);
	bool CanTarget(class AController* TargetSource);
	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void BeginInteraction(class APawn* InteractSource);
};


// Class GlimpseGame.GlimpsePickupUsable
// 0x0080 (0x0800 - 0x0780)
class AGlimpsePickupUsable : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0780(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupUsable");
		return ptr;
	}


	void ReceiveOnEndUse(class APawn* UseSource, class AActor* UseTarget);
	void ReceiveOnCompleteUse(class APawn* UseSource, class AActor* UseTarget);
	void ReceiveOnBeginUse(class APawn* UseSource, class AActor* UseTarget);
	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn* UseSource, class AActor* UseTarget);
	void OnBeginUseInteraction(class APawn* InteractSource);
};


// Class GlimpseGame.CharacterStateInteraction
// 0x00D0 (0x0110 - 0x0040)
class UCharacterStateInteraction : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0040(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateInteraction");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateDying
// 0x0008 (0x0048 - 0x0040)
class UCharacterStateDying : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateDying");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateAnimationChain
// 0x0020 (0x0060 - 0x0040)
class UCharacterStateAnimationChain : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateAnimationChain");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateSuspicionReaction
// 0x0038 (0x0078 - 0x0040)
class UCharacterStateSuspicionReaction : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateSuspicionReaction");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateVomiting
// 0x0018 (0x0058 - 0x0040)
class UCharacterStateVomiting : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateVomiting");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateZipline
// 0x0080 (0x00C0 - 0x0040)
class UCharacterStateZipline : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateZipline");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldBuilding
// 0x0038 (0x0230 - 0x01F8)
class UGlimpseWorldBuilding : public UGlimpseWorldElement
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldBuilding");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSkeletalMeshComponent
// 0x00C0 (0x0F80 - 0x0EC0)
class UGlimpseSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0EC0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSkeletalMeshComponent");
		return ptr;
	}


	void RandomizeVariant();
	void RandomizeGender();
	void ApplyVariantData();
};


// Class GlimpseGame.GlimpseStatusEffectBase
// 0x00F0 (0x0118 - 0x0028)
class UGlimpseStatusEffectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusEffectBase");
		return ptr;
	}


	bool ShouldAutoRemove(class UStatusEffectComponent* Component);
	bool ShouldAutoApply(class UStatusEffectComponent* Component);
	void SetAutoNatives();
	void Remove();
	void OnTick(float DeltaTime);
	void OnSuspend();
	void OnResume();
	void OnRemove();
	float OnGetCustomPercent();
	void OnDifficultyChanged();
	void OnBeginPlay();
	void OnApply();
	float GetPeriodicFloatingTextInterval();
	struct FText GetPeriodicFloatingText();
	class UStatusEffectComponent* GetOwnerComponent();
	class AGlimpseCharacter* GetOwnerCharacter();
	class AGlimpseGameMode* STATIC_GetGlimpseGameMode(class UStatusEffectComponent* Component);
	void ApplyStatusDamage(float BaseDamage, class UClass* DamageType);
	void Apply(class AController* Instigator);
	void AddValueModifier(const struct FGameplayTag& ValueType, TEnumAsByte<EValueModifierApplication> Application, float Modifier);
};


// Class GlimpseGame.GlimpsePickupWeapon
// 0x0470 (0x0BF0 - 0x0780)
class AGlimpsePickupWeapon : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x470];                                     // 0x0780(0x0470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupWeapon");
		return ptr;
	}


	void ReceiveOnHitThrow(class APawn* InstigatorPawn);
	void ReceiveOnHitMelee(class APawn* InstigatorPawn, class AActor* Victim, float VictimDamageTaken, const struct FHitResult& Hit);
	void ReceiveOnHitBlock(class APawn* InstigatorPawn);
	void OnWeaponUnequipped(class APawn* WeaponUser);
	void OnWeaponThrown(class APawn* ThrowerPawn);
	void OnWeaponEquipped(class APawn* WeaponUser);
	void OnWeaponCombatMove(class APawn* WeaponUser);
	void OnTrailDeactivated();
	void OnTrailActivated();
	void OnThrowablePickedUp(class APawn* InteractSource);
	void OnPressInteractionAction(class APawn* InstigatorPawn, TEnumAsByte<EInteraction> InteractionType);
	bool OnFire(class APawn* InstigatorPawn);
	void OnEndFireAction(class APawn* InstigatorPawn);
	void OnEndBlockAction(class APawn* InstigatorPawn);
	void OnEndBlock(class APawn* InstigatorPawn);
	void OnContinuousEffect(class APawn* Thrower, class AGlimpseCharacter* AffectedCharacter);
	void OnCharging(class APawn* InstigatorPawn, float ChargePercent);
	void OnChargeComplete(class APawn* InstigatorPawn);
	void OnChargeCancelled(class APawn* InstigatorPawn);
	void OnChargeBegin(class APawn* InstigatorPawn);
	void OnBeginFireAction(class APawn* InstigatorPawn);
	void OnBeginBlockAction(class APawn* InstigatorPawn);
	void OnBeginBlock(class APawn* InstigatorPawn);
	void Explode();
	bool CanFire(class APawn* InstigatorPawn);
	void CancelCharge(class APawn* InstigatorPawn);
	bool CanBeUnequippedAndSwapped();
	void ApplyOnFireHitDamage(class APawn* InstigatorPawn, const struct FHitResult& Hit, bool bIsChargedShot, class UClass* OverrideDamageType, float ChargeValue, class AActor* ProjectileActor, float BonusDamage);
};


// Class GlimpseGame.GlimpseAnimationData
// 0x1128 (0x1150 - 0x0028)
class UGlimpseAnimationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1128];                                    // 0x0028(0x1128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAnimationData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDamageType
// 0x0020 (0x0060 - 0x0040)
class UGlimpseDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDamageType");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCharacterMovement
// 0x0260 (0x0960 - 0x0700)
class UGlimpseCharacterMovement : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0700(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCharacterMovement");
		return ptr;
	}


	bool MoveUpdatedComponentInterp(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, float Duration, bool bEnableCollision, bool bStayInCustomMove);
	bool IsSprinting();
	bool IsRunning();
	bool IsMantling();
	bool IsInterpMoving();
	float GetStrafingAngle();
	float GetSpeedRatio();
	struct FVector GetLocalInputVector();
	float GetEstAccelerationMagnitude();
	struct FVector GetEstAcceleration();
	struct FVector ConsumeLocalInputVector();
	void AddLocalInputVector(const struct FVector& InputVector, bool bForce);
};


// Class GlimpseGame.HasGenderInterface
// 0x0000 (0x0028 - 0x0028)
class UHasGenderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.HasGenderInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCharacter
// 0x0EC0 (0x1720 - 0x0860)
class AGlimpseCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xEC0];                                     // 0x0860(0x0EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCharacter");
		return ptr;
	}


	bool Vomit(class UAnimMontage* VomitMontage);
	void UseCircumventTool(class UClass* PickupClass);
	bool UseAttackFullBodyBlend();
	void UnequipPickup(bool bNoSound, bool bNoCheck, bool bNoAnimation);
	void UnequipAccessory(class AGlimpsePickup* Pickup);
	void TurnInPickup(class UClass* PickupClass, int Amount);
	bool TryAddPickup(class UClass* PickupClass, int Amount);
	void ThrowWeapon(class AGlimpsePickupWeapon* Weapon);
	void SuspendStatusEffects();
	bool StopStandardAnimation(const struct FName& OutroSectionName);
	bool StopAnimationChain();
	bool StartCombatMove(const struct FName& MoveName, int NumberOfAttacks, float AutoReleaseTime);
	void ShoveTargetCharacter(class AGlimpseCharacter* Target, TEnumAsByte<EHitReactionCategory> Reaction, const struct FName& ShoveMoveName);
	bool ShouldTakeDamageImpulse(class AActor* DamageCauser);
	void SetGasMask(bool bOn);
	void ResumeStatusEffects();
	void RequestBark(class UAkAudioEvent* Bark, float RandomChance);
	void RemovePickup(class UClass* PickupClass, int Amount, bool bDestroyOnRemove);
	void RemoveLightingSource(class AActor* Source);
	void RemoveFoliageVolume(class AActor* Volume);
	void RemoveCurrency(int Amount);
	void ReceiveTakeDamage(float Damage, TEnumAsByte<EGlimpseDamageCategory> DamageType, class AController* DamageInstigator, class AActor* DamageCauser, float* ActualDamage);
	bool PlayStandardAnimation(TEnumAsByte<EStandardAnimation> Animation, TEnumAsByte<EStandardAnimationMode> Mode, TEnumAsByte<EStandardAnimationMovement> MovementType, float Duration, class AActor* Focus);
	void PlayHitReactionAnimation(const struct FVector& DamageDirection, bool bKnockback);
	bool PlayAnimationChain(class UGlimpseAnimationChain* AnimationChain);
	int OnLootInteractionIndex(class APawn* InteractSource);
	void OnEndCarryInteraction(class APawn* InteractSource);
	void OnCorpseHitSound(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnCompleteLootInteraction(class APawn* InteractSource);
	void OnCompleteCarryInteraction(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanCarryInteraction(class APawn* InteractSource);
	void OnBeginCarryInteraction(class APawn* InteractSource);
	bool MoveOutOfInteractiveObject(class AActor* RelativeActor, TArray<struct FVector> PossibleRelativeLocations, const struct FRotator& RelativeRotation, float Duration);
	bool MoveIntoInteractiveObject(class AActor* RelativeActor, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, float Duration);
	void Kill();
	bool JumpCurrentMontageSection(const struct FName& SectionName);
	bool IsZiplining();
	bool IsWalking();
	bool IsUsingPickup();
	bool IsTalking();
	bool IsSprinting();
	bool IsSlowPaced(float Percent);
	bool IsRunning();
	bool IsRecoiling();
	bool IsPlayingSuspicionReaction();
	bool IsPlayingStandardAnimation();
	bool IsPlayingMontage(class UAnimMontage* ThisMontage);
	bool IsParrying();
	bool IsMoving();
	bool IsMantling();
	bool IsLeaningRight();
	bool IsLeaningLeft();
	bool IsLeaning();
	bool IsLanding();
	bool IsInteracting();
	bool IsInMidAir();
	bool IsInHitReaction();
	bool IsInCombatMove();
	bool IsHitWhileStunned();
	bool IsHeadBone(const struct FName& BoneName);
	bool IsDrugLevelLowerThan(float Level);
	bool IsDodging(class AGlimpseCharacter* Attacker);
	bool IsDead();
	bool IsCrouching();
	bool IsCarrying(bool bOnlyDeadCorpse);
	bool IsBusy();
	bool IsBlocking();
	bool IsBarkPlaying();
	bool IsAlive();
	void InvestigateCharacter(float Ratio);
	void InterruptConversation(bool bForceSuccess);
	void InterruptBark();
	void Interrupt();
	bool InFoliageCover();
	bool HasWeaponEquipped();
	bool HasPickupFromSelector(const struct FPickupSelector& PickupSelector, class UClass** OutMatchedType);
	bool HasPickupFromList(class UGlimpsePickupList* PickupList, class UClass** OutMatchedType);
	bool HasPickup(class UClass* PickupClass, int Amount);
	bool HasHealth();
	bool HalfAngleCheck2D(const struct FVector& TargetPos, float HalfAngle);
	bool HalfAngleCheck(const struct FVector& TargetPos, float HalfAngle);
	float GetUpperBodyBlendWeight();
	class AActor* GetTarget();
	TEnumAsByte<EStandardAnimation> GetStandardAnimationType();
	float GetSpeedModifier();
	class AGlimpsePickupUsable* GetQuickslotUsablePickup();
	int GetNumPickups(class UClass* PickupClass);
	struct FRotator GetNormalizedControlRotation();
	float GetMovementMagnitude();
	float GetMovementHeading();
	float GetMeleeAttackChargeMultiplier();
	class UAnimSequence* GetLastHoldPoseSequence();
	float GetLastHoldPoseAlpha();
	float GetLastDamageTime();
	bool GetLastDamageNonLethal();
	class AController* GetLastDamageInstigator();
	bool GetLastDamageInCombat();
	class AActor* GetLastDamageCauser();
	TEnumAsByte<EGlimpseDamageCategory> GetLastDamageCategory();
	float GetLastDamageBaseValue();
	float GetLastDamageActualValue();
	float GetLastCombatDamageTime();
	TEnumAsByte<EStandardAnimationMode> GetInteractionMode();
	class UAnimSequence* GetIdleAnimOverride();
	class UAnimSequence* GetHoldPoseSequence();
	float GetHoldPoseAlpha();
	TEnumAsByte<EHoldPose> GetHoldPose();
	TEnumAsByte<ECharacterGender> GetGender();
	float GetEstAccelerationMagnitude();
	struct FVector GetEstAcceleration();
	class AGlimpsePickupWeapon* GetEquippedWeapon();
	class AGlimpsePickupWeapon* GetEquippedThrowableWeapon();
	class AGlimpsePickup* GetEquippedPickup();
	class AGlimpsePickupOutfit* GetEquippedOutfit();
	class AGlimpsePickupWeapon* GetEquippedMeleeWeapon();
	class UAnimSequence* GetDeathPose();
	bool GetDamageWindowReached();
	class UGlimpseSuspicionCharacter* GetCharacterContext();
	class AGlimpseCharacter* GetCarriedCorpse();
	class UGlimpseSuspicionAttractor* GetAttractorContext(TEnumAsByte<EGlimpseSuspicionPriority> Priority);
	TEnumAsByte<ECharacterAnimationState> GetAnimationState();
	float GetAngleToDetectionTarget();
	float GetAngleToActor(class AActor* Actor);
	void ForceBark(class UAkAudioEvent* Bark, const struct FScriptDelegate& OnBarkFinished, bool bUninterruptible, class UGlimpseAnimationChain* AnimationChain);
	class AGlimpsePickup* FindPickup(class UClass* PickupClass);
	bool EquipPickupFromClass(class UClass* PickupClass);
	bool EquipPickup(class AGlimpsePickup* Pickup, bool bNoAnimation);
	void EquipAccessory(class AGlimpsePickup* Pickup, const struct FName& Socket, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation);
	void DropPickup(class AGlimpsePickup* Pickup);
	bool CanInterruptAttack(const struct FName& AttackName, class AGlimpseCharacter* Attacker, TEnumAsByte<EGlimpseDamageCategory> DamageType, const struct FVector& HitDirection, const struct FVector& HitLocation, const struct FName& BoneName);
	bool CanDoWaitAction();
	TEnumAsByte<ECanAddResult> CanAddPickup(class UClass* PickupClass, int Amount);
	void BarkWithDelay(class UAkAudioEvent* Bark, bool bUninterruptible, class UGlimpseAnimationChain* AnimationChain, float Delay);
	void Bark(class UAkAudioEvent* Bark, bool bUninterruptible, class UGlimpseAnimationChain* AnimationChain, const struct FLatentActionInfo& LatentInfo);
	bool AwardPickup(class UClass* PickupClass, int Amount);
	bool AreStatusEffectsSuspended();
	bool AreInventoriesInitialized();
	class AGlimpsePickup* AddPickup(class UClass* PickupClass, int Amount, bool FillStacks);
	void AddLightingSource(class AActor* Source);
	void AddFoliageVolume(class AActor* Volume);
	void AddCurrency(int Amount);
};


// Class GlimpseGame.WeatherExclusionVolumeInsiderInterface
// 0x0000 (0x0028 - 0x0028)
class UWeatherExclusionVolumeInsiderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.WeatherExclusionVolumeInsiderInterface");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWeatherExclusionVolume
// 0x0050 (0x04B0 - 0x0460)
class AGlimpseWeatherExclusionVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0460(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWeatherExclusionVolume");
		return ptr;
	}


	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};


// Class GlimpseGame.GlimpsePlayerCharacter
// 0x0830 (0x1F50 - 0x1720)
class AGlimpsePlayerCharacter : public AGlimpseCharacter
{
public:
	unsigned char                                      UnknownData00[0x830];                                     // 0x1720(0x0830) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerCharacter");
		return ptr;
	}


	bool TryUncrouch();
	bool TryGetCaptionParameterOverrides(float* OutMaxDistance, float* OutMaxHalfAngle);
	bool TeleportToCamera(class AActor* CameraActor, const struct FVector& Offset);
	void SetPlayerSeen(bool bSeen);
	void SetPlayerArmsOverride(const struct FName& OverrideVariantName);
	void RequestPlayerFogIntensity(class AActor* RequestingActor, float Intensity);
	void ReleasePlayerFogIntensity(class AActor* RequestingActor);
	void PlaceCorpse(const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void OnTimeOfDayChanged();
	void OnStatusEffectApplied(class UGlimpseStatusEffectBase* Effect);
	void OnEndUseCorpseItemInteraction(class APawn* InteractSource);
	void OnCompleteUseCorpseItemInteraction(class APawn* InteractSource);
	void OnClothingChanged(class AGlimpsePickup* Pickup);
	TEnumAsByte<EInteractionResult> OnCanUseCorpseItemInteraction(class APawn* InteractSource);
	void OnBeginUseCorpseItemInteraction(class APawn* InteractSource);
	void MakeClimbingSounds(TEnumAsByte<EPhysicalSurface> SurfaceType);
	bool IsPlayerInCombatMode();
	bool IsOutfitSlotEmpty(TEnumAsByte<EOutfitSlot> OutfitSlot);
	bool IsJoyed();
	bool IsInCombat();
	bool IsEquippedOutfitType(TEnumAsByte<EGlimpseOutfitType> OutfitType);
	bool IsDying();
	bool IsBeingSeen();
	void InstantCraft(const struct FName& RecipeKey);
	float GetWaitingStatChange(TEnumAsByte<ESurvivalNeed> Type, float WaitHours);
	float GetTimeSinceLastSeen();
	float GetStatChangePerHourOfSleep(TEnumAsByte<ESurvivalNeed> Type);
	float GetPlayerFogIntensity();
	TEnumAsByte<EPlayerDrugState> GetPlayerDrugState();
	int GetInventoryCount(bool ExcludeClothing, bool ExcludeHolster, bool ExcludeQuestItems);
	float GetFogVolumeIntensity();
	float GetBloodSugarLevelChangePerHourOfWaiting();
	float GetBloodSugarLevelChangePerHourOfSleep();
	void ForceWalk();
	void ForceGhost();
	void EquipOutfit(class UClass* OutfitClass, bool ReplaceCurrentOutfit);
	void DropCorpse(bool bThrow, bool bInstantDrop);
	void ClearPlayerArmsOverride();
	bool CanSeeNPCFootprints();
	bool CanPlaySystemicBark();
	bool CanInstantCraft(const struct FName& RecipeKey);
	void BarkReactionToSeeingNPC(class AGlimpseAICharacter* NPC, class UAkAudioEvent* SoundEvent, bool bForce);
	void ActivateHeartbeat(TEnumAsByte<EHeartbeat> Intensity, float Duration);
};


// Class GlimpseGame.GlimpseSkill
// 0x0290 (0x02B8 - 0x0028)
class UGlimpseSkill : public UObject
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x0028(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSkill");
		return ptr;
	}


	void OnBought(class AGlimpsePlayerCharacter* BuyerPlayerCharacter);
	struct FString GetSkillVideoURL();
	struct FName GetSkillKey();
};


// Class GlimpseGame.SkillComponent
// 0x00A0 (0x0190 - 0x00F0)
class USkillComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkillComponent");
		return ptr;
	}


	void SpendSkillPoints(int SkillPointsCount);
	bool IsSkillBought(class UClass* SkillType);
	bool IsSkillAvailable(class UClass* SkillType);
	struct FText GetSkillDescription(class UGlimpseSkill* Skill);
	int GetSkillCost(class UClass* SkillType);
	class UGlimpseSkill* GetSkill(class UClass* SkillType);
	void GainSkillPoints(int SkillPointsCount);
	bool CanBuySkill(class UGlimpseSkill* UnlockedSkill);
	void BuySkill(class UGlimpseSkill* UnlockedSkill);
};


// Class GlimpseGame.GlimpseLockable
// 0x0440 (0x0870 - 0x0430)
class AGlimpseLockable : public AActor
{
public:
	unsigned char                                      UnknownData00[0x440];                                     // 0x0430(0x0440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLockable");
		return ptr;
	}


	void Unlock(class APawn* InteractSource);
	void SetLockableState(TEnumAsByte<ELockableState> InLockableState);
	void Rattle(class APawn* InteractSource);
	void Open(class APawn* InteractSource);
	void OnRotationCurve(const struct FVector& Rotation);
	int OnOpenInteractionPromptIndex(class APawn* InteractSource);
	void OnLocationCurve(const struct FVector& Translation);
	void OnEndCircumventInteraction(class APawn* InteractSource);
	void OnCompleteCircumventInteraction(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanUnlockInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanOpenInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanLockInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanCloseInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanCircumventInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanBashInteract(class APawn* InteractSource);
	void OnBeginCircumventInteraction(class APawn* InteractSource);
	void Lock(class APawn* InteractSource);
	void K2_RefreshPose();
	class UInteractionComponent* GetOpenInteraction();
	class UInteractionComponent* GetLockInteraction();
	TEnumAsByte<ELockableState> GetLockableState();
	void Close(class APawn* InteractSource);
	TEnumAsByte<ECanUnlock> CanUnlock(class APawn* InteractSource);
	TEnumAsByte<ECanUnlock> CanLock(class APawn* InteractSource);
	void Bash(class APawn* InteractSource);
};


// Class GlimpseGame.GlimpseLootable
// 0x0190 (0x0A00 - 0x0870)
class AGlimpseLootable : public AGlimpseLockable
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0870(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLootable");
		return ptr;
	}


	void UpdateLootableState(bool bIsLooted);
	void SetPickupSelector(const struct FPickupSelector& NewSelector);
	void SetPickups(TArray<class UClass*> Pickups);
	void SetPickupListAsset(class UGlimpsePickupList* PickupList);
	void SetPickupList(const struct FPickupList& PickupList);
	void ResetLootable();
	void RefreshLootableState();
	void OnLoot(class AGlimpsePlayerController* PlayerController);
	void Loot(class APawn* InteractSource);
	bool IsLooted();
	bool CanTarget(class AController* TargetSource);
};


// Class GlimpseGame.GlimpseStash
// 0x0000 (0x0A00 - 0x0A00)
class AGlimpseStash : public AGlimpseLootable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStash");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_TimeOfDay
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TimeOfDay : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_TimeOfDay");
		return ptr;
	}

};


// Class GlimpseGame.BTDecorator_WithinDistance
// 0x0068 (0x00D0 - 0x0068)
class UBTDecorator_WithinDistance : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTDecorator_WithinDistance");
		return ptr;
	}

};


// Class GlimpseGame.BTService_BarkLoop
// 0x00B0 (0x0120 - 0x0070)
class UBTService_BarkLoop : public UBTService
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0070(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_BarkLoop");
		return ptr;
	}

};


// Class GlimpseGame.BTService_CharacterAwareness
// 0x0010 (0x0080 - 0x0070)
class UBTService_CharacterAwareness : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_CharacterAwareness");
		return ptr;
	}


	bool IsCharacterAcceptable(class AGlimpseCharacter* Character, float Distance);
};


// Class GlimpseGame.BTService_CombatAwareness
// 0x0008 (0x0078 - 0x0070)
class UBTService_CombatAwareness : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_CombatAwareness");
		return ptr;
	}

};


// Class GlimpseGame.BTService_ContinuousSuspicion
// 0x0038 (0x00A8 - 0x0070)
class UBTService_ContinuousSuspicion : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_ContinuousSuspicion");
		return ptr;
	}

};


// Class GlimpseGame.BTService_CorpseAwareness
// 0x0010 (0x0080 - 0x0070)
class UBTService_CorpseAwareness : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_CorpseAwareness");
		return ptr;
	}

};


// Class GlimpseGame.BTService_EquipWeapon
// 0x0000 (0x0098 - 0x0098)
class UBTService_EquipWeapon : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_EquipWeapon");
		return ptr;
	}

};


// Class GlimpseGame.BTService_ExplicitSuspicion
// 0x0038 (0x00A8 - 0x0070)
class UBTService_ExplicitSuspicion : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_ExplicitSuspicion");
		return ptr;
	}

};


// Class GlimpseGame.BTService_InstantSuspicion
// 0x0048 (0x00B8 - 0x0070)
class UBTService_InstantSuspicion : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0070(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_InstantSuspicion");
		return ptr;
	}

};


// Class GlimpseGame.BTService_LookAt
// 0x0000 (0x0098 - 0x0098)
class UBTService_LookAt : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_LookAt");
		return ptr;
	}

};


// Class GlimpseGame.InventoryComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UInventoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryComponent");
		return ptr;
	}


	int Remove(class UClass* PickupClass, int Amount, bool bDestroyOnRemove);
	bool Contains(class UClass* PickupClass, int Amount);
	void Clear(bool bDestroyOnClear);
	class AGlimpsePickup* Add(class UClass* PickupClass, int Amount, bool bFillExistingStacks);
};


// Class GlimpseGame.BTService_RunEQSQuery
// 0x0090 (0x0100 - 0x0070)
class UBTService_RunEQSQuery : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0070(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_RunEQSQuery");
		return ptr;
	}

};


// Class GlimpseGame.BTService_POIAwareness
// 0x0008 (0x0078 - 0x0070)
class UBTService_POIAwareness : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_POIAwareness");
		return ptr;
	}

};


// Class GlimpseGame.BTService_SoundLoop
// 0x0020 (0x0090 - 0x0070)
class UBTService_SoundLoop : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_SoundLoop");
		return ptr;
	}

};


// Class GlimpseGame.BTService_SquadAwareness
// 0x0008 (0x00A0 - 0x0098)
class UBTService_SquadAwareness : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_SquadAwareness");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStatusEffect
// 0x0170 (0x0288 - 0x0118)
class UGlimpseStatusEffect : public UGlimpseStatusEffectBase
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0118(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusEffect");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTimedStatusEffect
// 0x0010 (0x0298 - 0x0288)
class UGlimpseTimedStatusEffect : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTimedStatusEffect");
		return ptr;
	}

};


// Class GlimpseGame.BTService_StatusEffects
// 0x0048 (0x00B8 - 0x0070)
class UBTService_StatusEffects : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0070(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_StatusEffects");
		return ptr;
	}

};


// Class GlimpseGame.BTService_SuspicionAwareness
// 0x0010 (0x0080 - 0x0070)
class UBTService_SuspicionAwareness : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_SuspicionAwareness");
		return ptr;
	}

};


// Class GlimpseGame.BTService_SuspicionOverrides
// 0x0018 (0x0088 - 0x0070)
class UBTService_SuspicionOverrides : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_SuspicionOverrides");
		return ptr;
	}

};


// Class GlimpseGame.BTService_UpdateSurvival
// 0x0000 (0x0070 - 0x0070)
class UBTService_UpdateSurvival : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTService_UpdateSurvival");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_AnimMontage
// 0x00B0 (0x0120 - 0x0070)
class UBTTask_AnimMontage : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0070(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_AnimMontage");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_AttackEnemy
// 0x0028 (0x00C0 - 0x0098)
class UBTTask_AttackEnemy : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_AttackEnemy");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_CircleStrafe
// 0x0048 (0x00B8 - 0x0070)
class UBTTask_CircleStrafe : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0070(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_CircleStrafe");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAICharacter
// 0x0870 (0x1F90 - 0x1720)
class AGlimpseAICharacter : public AGlimpseCharacter
{
public:
	unsigned char                                      UnknownData00[0x870];                                     // 0x1720(0x0870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAICharacter");
		return ptr;
	}


	float TimeSinceLastAttack();
	float TimeSinceAttackUsed(const struct FName& AttackName);
	void SetTargetActor(class AActor* TargetActor);
	void SetPatrolActor(class AActor* Actor);
	void SetNoSuspicion(bool bFlag);
	void SetCorpseState(TEnumAsByte<ECorpseState> State);
	void SetConversationResponse(class UGlimpseConversationAsset* Conversation);
	void SetBlinkState(bool bOpen, float BlendTime);
	void SetAnimationData(class UGlimpseAnimationData* InMale, class UGlimpseAnimationData* InFemale, TEnumAsByte<EGlimpseArchetype> InArchetype);
	void Resurrect(const struct FVector& ResurrectLocation, bool TestCorpse, bool WithoutAnim);
	bool RequestSuspicionBark(TEnumAsByte<EAISuspicionState> State, bool bCheckIfAtLeastInState, bool bForce);
	void OnSuspicionStateChanged(TEnumAsByte<EAISuspicionState> OldState, TEnumAsByte<EAISuspicionState> NewState);
	void OnLivenessPhysicsEnable();
	void OnLivenessPhysicsDisable();
	bool OnInquisitiveRequest(class AGlimpseCharacter* Target, TEnumAsByte<ESuspicionConformityRequest> Request);
	void OnGiftMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnGiftEndInteraction(class APawn* InteractSource);
	void OnGiftCompleteInteraction(class APawn* InteractSource);
	void OnGiftBeginInteraction(class APawn* InteractSource);
	void OnDroppedGiftHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	TEnumAsByte<EInteractionResult> OnCanGiftInteract(class APawn* InteractSource);
	TEnumAsByte<EInteractionResult> OnCanBarterInteract(class APawn* InteractSource);
	void OnBeginLootInteraction(class APawn* InteractSource);
	void OnBarterCompleteInteraction(class APawn* InteractSource);
	void MarkAttackUsed(const struct FName& AttackName);
	void MarkAIAsImportant();
	bool IsOutOfPlayerSight();
	bool IsInPlayerVolume();
	bool IsCharacterLive();
	bool IsAttackViable(const struct FName& Attack, class AGlimpseCharacter* Target, float TargetDistance);
	bool HasCustomBehavior(TEnumAsByte<EAICustomBehaviour> Type, class UBehaviorTree* InBehavior);
	class UPuppetBrain* GetPuppetBrain();
	TEnumAsByte<EGlimpseInquisitiveState> GetInquisitiveState(class AGlimpseCharacter* Target, float DeltaSeconds);
	TArray<struct FCombatMoveSelection> GetDefaultCombatMoveSelection();
	void GetBlinkAnimParameters(struct FRotator* OrientationMask, float* ClosingAngle_Top, float* ClosingAngle_Bot, float* CurrentRatio);
	struct FVector GetAnkleIKOffset(bool bLeftRight);
	void FindAIInView(float MaxDistance, float ConeHalfAngleDegrees, TArray<class AGlimpseAICharacter*>* OutAIs);
	void FindAIInCone(const struct FVector& Location, const struct FVector& Direction, float MaxDistance, float ConeHalfAngleDegrees, TArray<class AGlimpseAICharacter*>* OutAIs);
	void DropAllInventory();
	bool ChooseSpecialMove(TArray<class AGlimpseAICharacter*> DeadAgents, TArray<struct FCombatAgent> CombatAgents, struct FName* out_MoveName, int* out_DeadIndex, int* out_CombatIndex);
	struct FName ChooseAttackFromList(TArray<struct FCombatMoveSelection> InCombatMoves, class AGlimpseCharacter* Target, float TargetDistance);
	struct FName ChooseAttack(class AGlimpseCharacter* Target, float TargetDistance, TEnumAsByte<EGlimpseCombatRange> CombatRange);
	void ChangeStimulusResponseBark(TEnumAsByte<EAISuspicionStimulusType> Type, class UAkAudioEvent* Event);
	void ChangeBehaviourBark(TEnumAsByte<EAIBehaviourBark> Type, class UAkAudioEvent* Event);
	void Blink(float Duration);
	void AddSuspicionOverride(const struct FSuspicionEffectOverride& NewSuspicionOverride);
};


// Class GlimpseGame.BTTask_DespawnAtSpawner
// 0x0000 (0x0070 - 0x0070)
class UBTTask_DespawnAtSpawner : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_DespawnAtSpawner");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_DisablePeeper
// 0x0010 (0x0080 - 0x0070)
class UBTTask_DisablePeeper : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_DisablePeeper");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_Disappear
// 0x0010 (0x0080 - 0x0070)
class UBTTask_Disappear : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_Disappear");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_DrawMeleeWeapon
// 0x0000 (0x00B0 - 0x00B0)
class UBTTask_DrawMeleeWeapon : public UBTTask_RotateToFaceBBEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_DrawMeleeWeapon");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_DropInventory
// 0x0000 (0x0070 - 0x0070)
class UBTTask_DropInventory : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_DropInventory");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_EquipPickup
// 0x0000 (0x0098 - 0x0098)
class UBTTask_EquipPickup : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_EquipPickup");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FindAlarm
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_FindAlarm : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FindAlarm");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FindClosestNavmeshPoint
// 0x0060 (0x00D0 - 0x0070)
class UBTTask_FindClosestNavmeshPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0070(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FindClosestNavmeshPoint");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePickupOutfit
// 0x0030 (0x07B0 - 0x0780)
class AGlimpsePickupOutfit : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0780(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupOutfit");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionZone
// 0x0098 (0x00E0 - 0x0048)
class UGlimpseSuspicionZone : public UGlimpseSuspicionComposite
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionZone");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FindRandomPoint
// 0x0070 (0x00E0 - 0x0070)
class UBTTask_FindRandomPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FindRandomPoint");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FlyTo
// 0x0008 (0x00B8 - 0x00B0)
class UBTTask_FlyTo : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FlyTo");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FollowHighwayPatrol
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FollowHighwayPatrol : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FollowHighwayPatrol");
		return ptr;
	}

};


// Class GlimpseGame.PatrolComponent
// 0x0048 (0x0138 - 0x00F0)
class UPatrolComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PatrolComponent");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FollowPatrol
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FollowPatrol : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FollowPatrol");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FollowRoadPatrol
// 0x0008 (0x0078 - 0x0070)
class UBTTask_FollowRoadPatrol : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FollowRoadPatrol");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_Interact
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_Interact : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_Interact");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_InvestigateCharacter
// 0x0010 (0x00A8 - 0x0098)
class UBTTask_InvestigateCharacter : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_InvestigateCharacter");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_JubilatorEatCorpse
// 0x0010 (0x0080 - 0x0070)
class UBTTask_JubilatorEatCorpse : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_JubilatorEatCorpse");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MaintainPosition
// 0x0040 (0x00D8 - 0x0098)
class UBTTask_MaintainPosition : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MaintainPosition");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_FindPickup
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_FindPickup : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_FindPickup");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MarkAttackUsed
// 0x0000 (0x0070 - 0x0070)
class UBTTask_MarkAttackUsed : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MarkAttackUsed");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MoveAlongHighway
// 0x0000 (0x0098 - 0x0098)
class UBTTask_MoveAlongHighway : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MoveAlongHighway");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MoveDirectlyTowardEx
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveDirectlyTowardEx : public UBTTask_MoveDirectlyToward
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MoveDirectlyTowardEx");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MoveToEx
// 0x0050 (0x0100 - 0x00B0)
class UBTTask_MoveToEx : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MoveToEx");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_NextPatrolPoint
// 0x0000 (0x0070 - 0x0070)
class UBTTask_NextPatrolPoint : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_NextPatrolPoint");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_MaintainReach
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_MaintainReach : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_MaintainReach");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_NextPatrolRoad
// 0x0000 (0x0070 - 0x0070)
class UBTTask_NextPatrolRoad : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_NextPatrolRoad");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_PatrolSwitchback
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PatrolSwitchback : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_PatrolSwitchback");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_PlayAnimationEx
// 0x0090 (0x0180 - 0x00F0)
class UBTTask_PlayAnimationEx : public UBTTask_PlayAnimation
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_PlayAnimationEx");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_PlayBark
// 0x0038 (0x00A8 - 0x0070)
class UBTTask_PlayBark : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_PlayBark");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_QueryAgentLocation
// 0x0008 (0x0078 - 0x0070)
class UBTTask_QueryAgentLocation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_QueryAgentLocation");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_ReleaseTargetActor
// 0x0008 (0x0078 - 0x0070)
class UBTTask_ReleaseTargetActor : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_ReleaseTargetActor");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_RotateToFaceBBEntryEx
// 0x0000 (0x00B0 - 0x00B0)
class UBTTask_RotateToFaceBBEntryEx : public UBTTask_RotateToFaceBBEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_RotateToFaceBBEntryEx");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_RunCustomBehavior
// 0x0008 (0x0080 - 0x0078)
class UBTTask_RunCustomBehavior : public UBTTask_RunBehavior
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_RunCustomBehavior");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_ReleaseCombatToken
// 0x0000 (0x0070 - 0x0070)
class UBTTask_ReleaseCombatToken : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_ReleaseCombatToken");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_RunDecorator
// 0x0000 (0x0070 - 0x0070)
class UBTTask_RunDecorator : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_RunDecorator");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SelectAttack
// 0x0000 (0x0070 - 0x0070)
class UBTTask_SelectAttack : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SelectAttack");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SelectCombatLocation
// 0x0028 (0x00C0 - 0x0098)
class UBTTask_SelectCombatLocation : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SelectCombatLocation");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SelectTargetActor
// 0x0000 (0x0070 - 0x0070)
class UBTTask_SelectTargetActor : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SelectTargetActor");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SelectTargetCorpse
// 0x0000 (0x0070 - 0x0070)
class UBTTask_SelectTargetCorpse : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SelectTargetCorpse");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SetMoraleState
// 0x0008 (0x0078 - 0x0070)
class UBTTask_SetMoraleState : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SetMoraleState");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SetSuspicionReaction
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_SetSuspicionReaction : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SetSuspicionReaction");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SetSuspicionState
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_SetSuspicionState : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SetSuspicionState");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_SetTargetCooldown
// 0x0038 (0x00A8 - 0x0070)
class UBTTask_SetTargetCooldown : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_SetTargetCooldown");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_Spawn
// 0x0020 (0x0090 - 0x0070)
class UBTTask_Spawn : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_Spawn");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_StandardAnimation
// 0x0008 (0x0078 - 0x0070)
class UBTTask_StandardAnimation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_StandardAnimation");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_StepBackFrom
// 0x0010 (0x00A8 - 0x0098)
class UBTTask_StepBackFrom : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_StepBackFrom");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_UsePickup
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_UsePickup : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_UsePickup");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_UsePOI
// 0x0040 (0x00D8 - 0x0098)
class UBTTask_UsePOI : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_UsePOI");
		return ptr;
	}

};


// Class GlimpseGame.BTTask_VisitPatrolPoint
// 0x0000 (0x0070 - 0x0070)
class UBTTask_VisitPatrolPoint : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.BTTask_VisitPatrolPoint");
		return ptr;
	}

};


// Class GlimpseGame.CharacterStateEquip
// 0x00A0 (0x00E0 - 0x0040)
class UCharacterStateEquip : public UCharacterState
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0040(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CharacterStateEquip");
		return ptr;
	}

};


// Class GlimpseGame.VictoriaCharacterStateMachine
// 0x0000 (0x0110 - 0x0110)
class UVictoriaCharacterStateMachine : public UCharacterStateMachineComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.VictoriaCharacterStateMachine");
		return ptr;
	}

};


// Class GlimpseGame.CombatNotify
// 0x0010 (0x0048 - 0x0038)
class UCombatNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CombatNotify");
		return ptr;
	}

};


// Class GlimpseGame.CombatRingComponent
// 0x01A8 (0x0298 - 0x00F0)
class UCombatRingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x00F0(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CombatRingComponent");
		return ptr;
	}


	void CollisionUnBumped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CollisionBumped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class GlimpseGame.DiscoveryTextWidgetStyle
// 0x03C8 (0x03F8 - 0x0030)
class UDiscoveryTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0030(0x03C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DiscoveryTextWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.CompassWidgetStyle
// 0x1428 (0x1458 - 0x0030)
class UCompassWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1428];                                    // 0x0030(0x1428) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CompassWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.ConditionalComponent
// 0x0150 (0x04B0 - 0x0360)
class UConditionalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0360(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ConditionalComponent");
		return ptr;
	}


	void RefreshConditionAny();
	void OnPickupOwnerPickedUp(class APawn* PickupSource);
	bool IsConditionMet(class AGlimpsePlayerController* Controller);
};


// Class GlimpseGame.AutoConditionalComponent
// 0x0000 (0x04B0 - 0x04B0)
class UAutoConditionalComponent : public UConditionalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AutoConditionalComponent");
		return ptr;
	}

};


// Class GlimpseGame.ManualConditionalComponent
// 0x0000 (0x04B0 - 0x04B0)
class UManualConditionalComponent : public UConditionalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ManualConditionalComponent");
		return ptr;
	}


	void SetCondition(bool State);
};


// Class GlimpseGame.TimeOfDayConditionalComponent
// 0x0010 (0x04C0 - 0x04B0)
class UTimeOfDayConditionalComponent : public UAutoConditionalComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TimeOfDayConditionalComponent");
		return ptr;
	}

};


// Class GlimpseGame.GoreConditionalComponent
// 0x0000 (0x04B0 - 0x04B0)
class UGoreConditionalComponent : public UConditionalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GoreConditionalComponent");
		return ptr;
	}

};


// Class GlimpseGame.QuestConditionalComponent
// 0x0060 (0x0510 - 0x04B0)
class UQuestConditionalComponent : public UConditionalComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestConditionalComponent");
		return ptr;
	}

};


// Class GlimpseGame.CorpseSuctionNotifyState
// 0x0000 (0x0030 - 0x0030)
class UCorpseSuctionNotifyState : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CorpseSuctionNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.CraftingRecipe
// 0x00D0 (0x00F8 - 0x0028)
class UCraftingRecipe : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CraftingRecipe");
		return ptr;
	}


	struct FName GetRecipeKey();
};


// Class GlimpseGame.GlimpseCraftingManager
// 0x0028 (0x0050 - 0x0028)
class UGlimpseCraftingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCraftingManager");
		return ptr;
	}

};


// Class GlimpseGame.CustomCharacterNotify
// 0x0018 (0x0050 - 0x0038)
class UCustomCharacterNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CustomCharacterNotify");
		return ptr;
	}

};


// Class GlimpseGame.DecoratorPOILocationComponent
// 0x0020 (0x0750 - 0x0730)
class UDecoratorPOILocationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DecoratorPOILocationComponent");
		return ptr;
	}

};


// Class GlimpseGame.DecoratorPOIComponent
// 0x00C0 (0x0810 - 0x0750)
class UDecoratorPOIComponent : public UDecoratorPOILocationComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0750(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DecoratorPOIComponent");
		return ptr;
	}


	void EndTriggerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void EndProximityOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BeginTriggerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BeginProximityOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class GlimpseGame.DescriptionComponent
// 0x0110 (0x0200 - 0x00F0)
class UDescriptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00F0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DescriptionComponent");
		return ptr;
	}


	struct FText GetFunctionalDescription();
	struct FText GetDescriptiveName();
	class UTexture2D* GetDescriptiveImage();
	struct FText GetDescription();
};


// Class GlimpseGame.DLCGameModifier
// 0x0010 (0x0038 - 0x0028)
class UDLCGameModifier : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DLCGameModifier");
		return ptr;
	}


	void OnGameStartOrRestore(class AGlimpseGameMode* GameMode);
	void OnGameEnd(class AGlimpseGameMode* GameMode);
	void MarkDLCIntegrated();
	bool IsDLCIntegrated(bool bRequireSameOrNewerVersion);
	void GetDLCVersion(int* MajorVersion, int* MinorVersion);
	struct FName GetDLCName();
};


// Class GlimpseGame.EnvQueryGenerator_ActorsWithComponent
// 0x0040 (0x0090 - 0x0050)
class UEnvQueryGenerator_ActorsWithComponent : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.EnvQueryGenerator_ActorsWithComponent");
		return ptr;
	}

};


// Class GlimpseGame.FootIKNotifyState
// 0x0008 (0x0038 - 0x0030)
class UFootIKNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FootIKNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.FootstepNotify
// 0x0010 (0x0048 - 0x0038)
class UFootstepNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FootstepNotify");
		return ptr;
	}

};


// Class GlimpseGame.FullInputBorder
// 0x0000 (0x0290 - 0x0290)
class UFullInputBorder : public UBorder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FullInputBorder");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAchievementBase
// 0x0028 (0x0050 - 0x0028)
class UGlimpseAchievementBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.QuantityAchievementBase
// 0x0008 (0x0058 - 0x0050)
class UQuantityAchievementBase : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuantityAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.PickupStatsEventAchievementBase
// 0x0020 (0x0078 - 0x0058)
class UPickupStatsEventAchievementBase : public UQuantityAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PickupStatsEventAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.StatAchievement
// 0x0038 (0x0088 - 0x0050)
class UStatAchievement : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatAchievement");
		return ptr;
	}

};


// Class GlimpseGame.AchievementPlagueMonkey
// 0x0008 (0x0080 - 0x0078)
class UAchievementPlagueMonkey : public UPickupStatsEventAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementPlagueMonkey");
		return ptr;
	}

};


// Class GlimpseGame.AchievementArthurHasteings
// 0x0000 (0x0078 - 0x0078)
class UAchievementArthurHasteings : public UPickupStatsEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementArthurHasteings");
		return ptr;
	}

};


// Class GlimpseGame.DamageStatEventAchievementBase
// 0x0000 (0x0058 - 0x0058)
class UDamageStatEventAchievementBase : public UQuantityAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DamageStatEventAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.PlayerKillAICharacterAchievementBase
// 0x0000 (0x0058 - 0x0058)
class UPlayerKillAICharacterAchievementBase : public UDamageStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PlayerKillAICharacterAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.AchievementABitOfTheOldUltraviolence
// 0x0000 (0x0088 - 0x0088)
class UAchievementABitOfTheOldUltraviolence : public UStatAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementABitOfTheOldUltraviolence");
		return ptr;
	}

};


// Class GlimpseGame.AchievementRevengeIsSweet
// 0x0000 (0x0058 - 0x0058)
class UAchievementRevengeIsSweet : public UPlayerKillAICharacterAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementRevengeIsSweet");
		return ptr;
	}

};


// Class GlimpseGame.AchievementShockingBiology
// 0x0000 (0x0058 - 0x0058)
class UAchievementShockingBiology : public UPlayerKillAICharacterAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementShockingBiology");
		return ptr;
	}

};


// Class GlimpseGame.QuestStatEventAchievementBase
// 0x0010 (0x0068 - 0x0058)
class UQuestStatEventAchievementBase : public UQuantityAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestStatEventAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.AchievementButchersApprentice
// 0x0000 (0x0068 - 0x0068)
class UAchievementButchersApprentice : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementButchersApprentice");
		return ptr;
	}

};


// Class GlimpseGame.AchievementTheTanksAreHollow
// 0x0000 (0x0068 - 0x0068)
class UAchievementTheTanksAreHollow : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementTheTanksAreHollow");
		return ptr;
	}

};


// Class GlimpseGame.AchievementTheGreatLubricator
// 0x0000 (0x0068 - 0x0068)
class UAchievementTheGreatLubricator : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementTheGreatLubricator");
		return ptr;
	}

};


// Class GlimpseGame.LocationStatEventAchievementBase
// 0x0000 (0x0058 - 0x0058)
class ULocationStatEventAchievementBase : public UQuantityAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.LocationStatEventAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.DiscoverIslandAchievementBase
// 0x0008 (0x0060 - 0x0058)
class UDiscoverIslandAchievementBase : public ULocationStatEventAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DiscoverIslandAchievementBase");
		return ptr;
	}

};


// Class GlimpseGame.AchievementPleasantville
// 0x0000 (0x0068 - 0x0068)
class UAchievementPleasantville : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementPleasantville");
		return ptr;
	}

};


// Class GlimpseGame.AchievementGlobetrotter
// 0x00A0 (0x00F8 - 0x0058)
class UAchievementGlobetrotter : public ULocationStatEventAchievementBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0058(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementGlobetrotter");
		return ptr;
	}

};


// Class GlimpseGame.DirectSetAchievement
// 0x0008 (0x0058 - 0x0050)
class UDirectSetAchievement : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DirectSetAchievement");
		return ptr;
	}

};


// Class GlimpseGame.AchievementMysteryMouse
// 0x0000 (0x0058 - 0x0058)
class UAchievementMysteryMouse : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementMysteryMouse");
		return ptr;
	}

};


// Class GlimpseGame.AchievementCatCollector
// 0x0008 (0x0058 - 0x0050)
class UAchievementCatCollector : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementCatCollector");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSafeHaven
// 0x0068 (0x00B8 - 0x0050)
class UAchievementSafeHaven : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSafeHaven");
		return ptr;
	}

};


// Class GlimpseGame.AchievementTheSaint
// 0x0000 (0x0058 - 0x0058)
class UAchievementTheSaint : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementTheSaint");
		return ptr;
	}

};


// Class GlimpseGame.AchievementGetRich
// 0x0008 (0x0058 - 0x0050)
class UAchievementGetRich : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementGetRich");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSurvivalist
// 0x0008 (0x0058 - 0x0050)
class UAchievementSurvivalist : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSurvivalist");
		return ptr;
	}

};


// Class GlimpseGame.AchievementFlowersEverywhere
// 0x0000 (0x0058 - 0x0058)
class UAchievementFlowersEverywhere : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementFlowersEverywhere");
		return ptr;
	}

};


// Class GlimpseGame.AchievementFlashback
// 0x0008 (0x0058 - 0x0050)
class UAchievementFlashback : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementFlashback");
		return ptr;
	}

};


// Class GlimpseGame.AchievementJackSpecial
// 0x0008 (0x0058 - 0x0050)
class UAchievementJackSpecial : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementJackSpecial");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSnugAsABug
// 0x0000 (0x0058 - 0x0058)
class UAchievementSnugAsABug : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSnugAsABug");
		return ptr;
	}

};


// Class GlimpseGame.AchievementEmployeeOfTheMonth
// 0x0000 (0x0058 - 0x0058)
class UAchievementEmployeeOfTheMonth : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementEmployeeOfTheMonth");
		return ptr;
	}

};


// Class GlimpseGame.AchievementEnjoyTheView
// 0x0000 (0x0058 - 0x0058)
class UAchievementEnjoyTheView : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementEnjoyTheView");
		return ptr;
	}

};


// Class GlimpseGame.AchievementDowner
// 0x0000 (0x0058 - 0x0058)
class UAchievementDowner : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementDowner");
		return ptr;
	}

};


// Class GlimpseGame.AchievementArthurPlaythrough
// 0x0000 (0x0058 - 0x0058)
class UAchievementArthurPlaythrough : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementArthurPlaythrough");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHotOnHerHeels
// 0x0068 (0x00B8 - 0x0050)
class UAchievementHotOnHerHeels : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHotOnHerHeels");
		return ptr;
	}

};


// Class GlimpseGame.AchievementResistanceIsFutile
// 0x0000 (0x0058 - 0x0058)
class UAchievementResistanceIsFutile : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementResistanceIsFutile");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSingleMotherDruglord
// 0x0000 (0x0068 - 0x0068)
class UAchievementSingleMotherDruglord : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSingleMotherDruglord");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSmellOfChloroform
// 0x0000 (0x0058 - 0x0058)
class UAchievementSmellOfChloroform : public UQuantityAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSmellOfChloroform");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSallyCrones
// 0x0000 (0x0068 - 0x0068)
class UAchievementSallyCrones : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSallyCrones");
		return ptr;
	}

};


// Class GlimpseGame.AchievementBadBreakup
// 0x0000 (0x0058 - 0x0058)
class UAchievementBadBreakup : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementBadBreakup");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSallyPlaythrough
// 0x0000 (0x0058 - 0x0058)
class UAchievementSallyPlaythrough : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSallyPlaythrough");
		return ptr;
	}

};


// Class GlimpseGame.AchievementGottaCatchemAll
// 0x0000 (0x0088 - 0x0088)
class UAchievementGottaCatchemAll : public UStatAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementGottaCatchemAll");
		return ptr;
	}

};


// Class GlimpseGame.AchievementSugarDaddy
// 0x0000 (0x0088 - 0x0088)
class UAchievementSugarDaddy : public UStatAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementSugarDaddy");
		return ptr;
	}

};


// Class GlimpseGame.AchievementCallerOfLightning
// 0x0000 (0x0088 - 0x0088)
class UAchievementCallerOfLightning : public UStatAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementCallerOfLightning");
		return ptr;
	}

};


// Class GlimpseGame.AchievementBoomBoomTime
// 0x0000 (0x0068 - 0x0068)
class UAchievementBoomBoomTime : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementBoomBoomTime");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHostageSituation
// 0x0000 (0x0068 - 0x0068)
class UAchievementHostageSituation : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHostageSituation");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHatedByAll
// 0x0000 (0x0068 - 0x0068)
class UAchievementHatedByAll : public UQuestStatEventAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHatedByAll");
		return ptr;
	}

};


// Class GlimpseGame.AchievementRevelator
// 0x0000 (0x0058 - 0x0058)
class UAchievementRevelator : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementRevelator");
		return ptr;
	}

};


// Class GlimpseGame.AchievementOlliePlaythrough
// 0x0000 (0x0058 - 0x0058)
class UAchievementOlliePlaythrough : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementOlliePlaythrough");
		return ptr;
	}

};


// Class GlimpseGame.AchievementOurPrudentFriend
// 0x0008 (0x0060 - 0x0058)
class UAchievementOurPrudentFriend : public UDirectSetAchievement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementOurPrudentFriend");
		return ptr;
	}

};


// Class GlimpseGame.AchievementThatKindOfGame
// 0x0000 (0x0058 - 0x0058)
class UAchievementThatKindOfGame : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementThatKindOfGame");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBRedBarrel
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBRedBarrel : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBRedBarrel");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBHeadshot
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBHeadshot : public UQuantityAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBHeadshot");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBLore
// 0x0068 (0x00B8 - 0x0050)
class UAchievementHBLore : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBLore");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBIntroKiller
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBIntroKiller : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBIntroKiller");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBAct1
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBAct1 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBAct1");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBSaveVillagers
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBSaveVillagers : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBSaveVillagers");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBAct2
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBAct2 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBAct2");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBAct3
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBAct3 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBAct3");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBRoboFire
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBRoboFire : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBRoboFire");
		return ptr;
	}

};


// Class GlimpseGame.AchievementHBComplete
// 0x0000 (0x0058 - 0x0058)
class UAchievementHBComplete : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementHBComplete");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBComplete
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBComplete : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBComplete");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBMilestone1
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBMilestone1 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBMilestone1");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBMilestone2
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBMilestone2 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBMilestone2");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBMilestone3
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBMilestone3 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBMilestone3");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBCharmer
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBCharmer : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBCharmer");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBParry
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBParry : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBParry");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBDancer
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBDancer : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBDancer");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBConsumer
// 0x0018 (0x0070 - 0x0058)
class UAchievementLBConsumer : public UQuantityAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBConsumer");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBLore
// 0x0068 (0x00B8 - 0x0050)
class UAchievementLBLore : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBLore");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBGuardDown
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBGuardDown : public UPlayerKillAICharacterAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBGuardDown");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBStatue
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBStatue : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBStatue");
		return ptr;
	}

};


// Class GlimpseGame.AchievementLBRebound
// 0x0000 (0x0058 - 0x0058)
class UAchievementLBRebound : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementLBRebound");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVICStoryComplete
// 0x0000 (0x0058 - 0x0058)
class UAchievementVICStoryComplete : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVICStoryComplete");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVICMilestone1
// 0x0000 (0x0058 - 0x0058)
class UAchievementVICMilestone1 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVICMilestone1");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVICMilestone2
// 0x0000 (0x0058 - 0x0058)
class UAchievementVICMilestone2 : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVICMilestone2");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVICLore
// 0x0068 (0x00B8 - 0x0050)
class UAchievementVICLore : public UGlimpseAchievementBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVICLore");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVICSkills
// 0x0010 (0x0068 - 0x0058)
class UAchievementVICSkills : public UDirectSetAchievement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVICSkills");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVIC_AlleyStash
// 0x0000 (0x0058 - 0x0058)
class UAchievementVIC_AlleyStash : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVIC_AlleyStash");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVIC_Canal
// 0x0000 (0x0058 - 0x0058)
class UAchievementVIC_Canal : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVIC_Canal");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVIC_Knockdowns
// 0x0000 (0x0058 - 0x0058)
class UAchievementVIC_Knockdowns : public UQuantityAchievementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVIC_Knockdowns");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVIC_ZapTV
// 0x0000 (0x0058 - 0x0058)
class UAchievementVIC_ZapTV : public UDirectSetAchievement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVIC_ZapTV");
		return ptr;
	}

};


// Class GlimpseGame.AchievementVIC_NoUpgrades
// 0x0010 (0x0068 - 0x0058)
class UAchievementVIC_NoUpgrades : public UDirectSetAchievement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AchievementVIC_NoUpgrades");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAchievementManager
// 0x0578 (0x05A0 - 0x0028)
class UGlimpseAchievementManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x578];                                     // 0x0028(0x0578) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAchievementManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAchievementsData
// 0x0010 (0x0038 - 0x0028)
class UGlimpseAchievementsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAchievementsData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAICache
// 0x00B0 (0x00D8 - 0x0028)
class UGlimpseAICache : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAICache");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClassCorpse
// 0x0058 (0x0098 - 0x0040)
class UGlimpseAIClassCorpse : public UGlimpseAIClass
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClassCorpse");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAISpawnStyle
// 0x0028 (0x0050 - 0x0028)
class UGlimpseAISpawnStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAISpawnStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClassDynamic
// 0x0008 (0x0048 - 0x0040)
class UGlimpseAIClassDynamic : public UGlimpseAIClass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClassDynamic");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClassPatrol
// 0x0128 (0x0168 - 0x0040)
class UGlimpseAIClassPatrol : public UGlimpseAIClass
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0040(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClassPatrol");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClassPopulation
// 0x01B0 (0x01F0 - 0x0040)
class UGlimpseAIClassPopulation : public UGlimpseAIClass
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0040(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClassPopulation");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAIClassStatic
// 0x0058 (0x0098 - 0x0040)
class UGlimpseAIClassStatic : public UGlimpseAIClass
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAIClassStatic");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAimAssistTarget
// 0x0060 (0x03C0 - 0x0360)
class UGlimpseAimAssistTarget : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0360(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAimAssistTarget");
		return ptr;
	}


	void SetTargetActive(bool Active);
};


// Class GlimpseGame.GlimpseAISpawner
// 0x0040 (0x0470 - 0x0430)
class AGlimpseAISpawner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAISpawner");
		return ptr;
	}


	class AGlimpseAICharacter* SpawnAI(class UClass* Type);
	void OnAISpawned(class AGlimpseAICharacter* Character);
	bool IsAvailable();
	void DespawnAI(class AGlimpseAICharacter* Character);
};


// Class GlimpseGame.GlimpseAnimNotify
// 0x0000 (0x0038 - 0x0038)
class UGlimpseAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAnimNotify");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAudioSettings
// 0x0020 (0x0048 - 0x0028)
class UGlimpseAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAudioSettings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseBridgeModel
// 0x0028 (0x0050 - 0x0028)
class UGlimpseBridgeModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBridgeModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseBroadcastSchedule
// 0x0080 (0x00A8 - 0x0028)
class UGlimpseBroadcastSchedule : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBroadcastSchedule");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseButton
// 0x0020 (0x0450 - 0x0430)
class AGlimpseButton : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseButton");
		return ptr;
	}


	void OnCompleteInteraction(class APawn* InteractSource);
};


// Class GlimpseGame.GlimpseSecurityButton
// 0x0010 (0x0460 - 0x0450)
class AGlimpseSecurityButton : public AGlimpseButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSecurityButton");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseNickPlayerCharacter
// 0x0000 (0x1F50 - 0x1F50)
class AGlimpseNickPlayerCharacter : public AGlimpsePlayerCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseNickPlayerCharacter");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseZiplineAnchor
// 0x00A0 (0x04D0 - 0x0430)
class AGlimpseZiplineAnchor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0430(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseZiplineAnchor");
		return ptr;
	}


	void StartZip(class APawn* InteractSource);
	void EndZip(class APawn* InteractSource);
};


// Class GlimpseGame.GlimpseVictoriaPlayerCharacter
// 0x0340 (0x2290 - 0x1F50)
class AGlimpseVictoriaPlayerCharacter : public AGlimpsePlayerCharacter
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x1F50(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseVictoriaPlayerCharacter");
		return ptr;
	}


	void OnAutoReloadSkillAchieved();
	struct FVector2D GetZipTargetScreenPosition();
	bool GetIsReloading();
	bool GetHasZiplineTarget();
	bool GetHasDartgunTarget();
	bool GetHasCombatTarget();
};


// Class GlimpseGame.GlimpseCharacterAnimInstance
// 0x0000 (0x04F0 - 0x04F0)
class UGlimpseCharacterAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCharacterAnimInstance");
		return ptr;
	}


	class AGlimpseCharacter* GetGlimpseCharacterOwner();
	void AnimNotify_UsePickupOnTarget(class UAnimNotify* Notify);
	void AnimNotify_UnequipMeleeWeapon(class UAnimNotify* Notify);
	void AnimNotify_Summon(class UAnimNotify* Notify);
	void AnimNotify_StopMeleeSnap(class UAnimNotify* Notify);
	void AnimNotify_StopBarks(class UAnimNotify* Notify);
	void AnimNotify_StartRecovery(class UAnimNotify* Notify);
	void AnimNotify_StartMeleeSnap(class UAnimNotify* Notify);
	void AnimNotify_SnapPickup(class UAnimNotify* Notify);
	void AnimNotify_Skill_KnockOutArtist(class UAnimNotify* Notify);
	void AnimNotify_ShoveHit(class UAnimNotify* Notify);
	void AnimNotify_ReceiveGift(class UAnimNotify* Notify);
	void AnimNotify_MantleMovementInputAllowed(class UAnimNotify* Notify);
	void AnimNotify_LaunchProjectile(class UAnimNotify* Notify);
	void AnimNotify_KnockbackHit(class UAnimNotify* Notify);
	void AnimNotify_Interrupt(class UAnimNotify* Notify);
	void AnimNotify_HideGift(class UAnimNotify* Notify);
	void AnimNotify_GrabResistStart(class UAnimNotify* Notify);
	void AnimNotify_GrabResistEnd(class UAnimNotify* Notify);
	void AnimNotify_FullBodyBlend(class UAnimNotify* Notify);
	void AnimNotify_EquipMeleeWeapon(class UAnimNotify* Notify);
	void AnimNotify_EndParry(class UAnimNotify* Notify);
	void AnimNotify_DropGift(class UAnimNotify* Notify);
	void AnimNotify_DirectDamage(class UAnimNotify* Notify);
	void AnimNotify_DeathRagdoll(class UAnimNotify* Notify);
	void AnimNotify_DamageWindowStart(class UAnimNotify* Notify);
	void AnimNotify_DamageWindowEnd(class UAnimNotify* Notify);
	void AnimNotify_CommitToMove(class UAnimNotify* Notify);
	void AnimNotify_ComboWindowStart(class UAnimNotify* Notify);
	void AnimNotify_ComboWindowEnd(class UAnimNotify* Notify);
	void AnimNotify_ComboTrigger(class UAnimNotify* Notify);
	void AnimNotify_BlockInterrupt(class UAnimNotify* Notify);
	void AnimNotify_BeginWindup(class UAnimNotify* Notify);
	void AnimNotify_BeginParry(class UAnimNotify* Notify);
	void AnimNotify_AttackGrunt(class UAnimNotify* Notify);
	void AnimNotify_AOEShoveHit(class UAnimNotify* Notify);
};


// Class GlimpseGame.GlimpseCharacterVariantData
// 0x0040 (0x0068 - 0x0028)
class UGlimpseCharacterVariantData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCharacterVariantData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCheatManager
// 0x0090 (0x0108 - 0x0078)
class UGlimpseCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0078(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCheatManager");
		return ptr;
	}


	void Vomit();
	void UnlockRecipe(const struct FName& RecipeName);
	void UnlockInventory();
	void UnlockAllRecipes();
	void UnlockAllLore();
	void UnlockAllFastTravel();
	void Unbreakable();
	void ToggleThirdPerson();
	void ToggleCombatInput();
	void TestSkillPointReminder();
	void SuspendStatusEffects();
	void SurvivalStat(const struct FName& StatName, float Value);
	void StopDLC(const struct FName& DLCName);
	void StatusEffect_Tier(const struct FName& StatusName, int Tier);
	void StatusEffect(const struct FName& StatusName);
	void StartDLC(const struct FName& DLCName);
	void ShowWorldSeed();
	void ShowRespawns();
	void ShowPickups(const struct FString& ItemString);
	void ShowDemoWinScreen();
	void ShowCombatSnapDebug();
	void ShowBadRoads();
	void SetWeatherState(const struct FName& State, float TransitionTime);
	void SetTutorialStep(int step);
	void SetSuspicionDifficulty(const struct FName& Difficulty);
	void SetSurvivalDifficulty(const struct FName& Difficulty);
	void SetResourceDifficulty(const struct FName& Difficulty);
	void SetQuestState(const struct FName& QuestName, const struct FName& QuestState);
	void SetPlayerHealthPercent(float HealthPercent);
	void SetPermadeath(bool bEnablePermadeath);
	void SetPauseInMenus(bool bEnablePauseInMenus);
	void SetJoyState(int JoyStateAsInt);
	void SetGameDifficulty(const struct FName& Difficulty);
	void SetDegradation(bool bEnableDegredation);
	void SetCombatDifficulty(const struct FName& Difficulty);
	void ScanDLC();
	void RevealMapAndQuest();
	void RevealMap();
	void ResumeStatusEffects();
	void RespawnShelter();
	void ResetSkills();
	void ResetLootable();
	void ResetAllLootables();
	void ResetAllDLC();
	void RedrawMap();
	void ObscureMap();
	void ListFeatures(const struct FString& FeatureString);
	void ListDLC();
	void ListActiveDLC();
	void LB_SetIsThirdDay(bool IsThirdDay);
	void LB_EnableSanitySystem(bool bEnable);
	void Killemall();
	void HideRespawns();
	void HidePickups();
	void HideBadRoads();
	void Heal();
	void GotoLockable();
	void GotoFeature(const struct FString& FeatureString);
	void GotoActor(const struct FName& ActorName);
	void GiveSkillPoints(int NumSkillPoints);
	void GiveN(int NumItems, const struct FString& ItemString);
	void Give(const struct FString& ItemString);
	void FailObjective(const struct FName& QuestName, const struct FName& ObjectiveName);
	void DumpStatusEffects();
	void DumpAchievementProgress();
	void DoCaptureSettings();
	void DemiGod();
	void DebugEpilogue();
	void DebugCharacterStoryComplete();
	void CrashMeNow();
	void CompleteQuest(const struct FName& QuestName);
	void CompleteObjective(const struct FName& QuestName, const struct FName& ObjectiveName);
	void ClearScreenFade();
	void BuySkill(const struct FName& SkillName);
	void BuyAllSkills();
	void BoostCarryLimit();
	void BloodSugarLevel(float Value);
	void AdvanceHours(float time);
	void AdvanceDays(float time);
	void ActivateQuest(const struct FName& QuestName);
	void ActivateAllQuests();
};


// Class GlimpseGame.GlimpseCityBlock
// 0x02A0 (0x02C8 - 0x0028)
class UGlimpseCityBlock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0028(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCityBlock");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCityBuildingSet
// 0x0010 (0x0038 - 0x0028)
class UGlimpseCityBuildingSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCityBuildingSet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePickupTransient
// 0x0020 (0x07A0 - 0x0780)
class AGlimpsePickupTransient : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0780(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupTransient");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCollectibleGroup
// 0x0040 (0x0068 - 0x0028)
class UGlimpseCollectibleGroup : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCollectibleGroup");
		return ptr;
	}


	struct FFilePath GetCollectibleMovieFilePath(const struct FName& CollectibleKey);
	class UAkAudioEvent* GetCollectibleAudio(const struct FName& CollectibleKey);
};


// Class GlimpseGame.GlimpsePickupCollectible
// 0x0010 (0x07B0 - 0x07A0)
class AGlimpsePickupCollectible : public AGlimpsePickupTransient
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupCollectible");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConsole
// 0x0018 (0x0150 - 0x0138)
class UGlimpseConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0138(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConsole");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlanRoadStyle
// 0x0068 (0x0090 - 0x0028)
class UGlimpsePlanRoadStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlanRoadStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintComponent
// 0x0000 (0x0730 - 0x0730)
class UGlimpseConstraintComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintDedicatedRoadComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseConstraintDedicatedRoadComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintDedicatedRoadComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintIntersectionComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseConstraintIntersectionComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintIntersectionComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintRoadCenterComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseConstraintRoadCenterComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintRoadCenterComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintRoadCircleComponent
// 0x0020 (0x0750 - 0x0730)
class UGlimpseConstraintRoadCircleComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintRoadCircleComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintRoadCornerComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseConstraintRoadCornerComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintRoadCornerComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseConstraintRoadEdgeComponent
// 0x0020 (0x0750 - 0x0730)
class UGlimpseConstraintRoadEdgeComponent : public UGlimpseConstraintComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseConstraintRoadEdgeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCraftingStation
// 0x0020 (0x0450 - 0x0430)
class AGlimpseCraftingStation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCraftingStation");
		return ptr;
	}


	void OnCompleteInteraction(class APawn* InteractSource);
};


// Class GlimpseGame.GlimpseCycleDebug
// 0x0010 (0x0440 - 0x0430)
class AGlimpseCycleDebug : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCycleDebug");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDecoratorActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseDecoratorActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDecoratorActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageElementComponent
// 0x0080 (0x0170 - 0x00F0)
class UGlimpseFoliageElementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageElementComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageElement
// 0x0010 (0x0440 - 0x0430)
class AGlimpseFoliageElement : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageElement");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDynamicGrass
// 0x0190 (0x01B8 - 0x0028)
class UGlimpseDynamicGrass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0028(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDynamicGrass");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseGameUserSettings
// 0x00A8 (0x01C0 - 0x0118)
class UGlimpseGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0118(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameUserSettings");
		return ptr;
	}


	void SetPresetGraphicsQuality(TEnumAsByte<EGraphicsQuality> InQuality);
	TEnumAsByte<EGraphicsQuality> GetPresetGraphicsQuality();
	TEnumAsByte<EGraphicsQuality> GetGraphicsQuality(TEnumAsByte<EGraphicsQualitySetting> InSetting);
};


// Class GlimpseGame.SkySphereComponent
// 0x0090 (0x0910 - 0x0880)
class USkySphereComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0880(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkySphereComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseEnvironment
// 0x0220 (0x0650 - 0x0430)
class AGlimpseEnvironment : public AActor
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0430(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseEnvironment");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseEnvironmentVolume
// 0x0020 (0x0480 - 0x0460)
class AGlimpseEnvironmentVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0460(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseEnvironmentVolume");
		return ptr;
	}


	bool IsEnvironmentVolumeEnabled();
	void EnableEnvironmentVolume();
	void DisableEnvironmentVolume();
};


// Class GlimpseGame.GlimpseExplicitRoadNodeComponent
// 0x0000 (0x0750 - 0x0750)
class UGlimpseExplicitRoadNodeComponent : public UArrowComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseExplicitRoadNodeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseExplicitRoadRootComponent
// 0x0000 (0x0360 - 0x0360)
class UGlimpseExplicitRoadRootComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseExplicitRoadRootComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseExplicitRoad
// 0x0000 (0x0430 - 0x0430)
class AGlimpseExplicitRoad : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseExplicitRoad");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseExplicitRoadNetwork
// 0x0000 (0x0430 - 0x0430)
class AGlimpseExplicitRoadNetwork : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseExplicitRoadNetwork");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameBase
// 0x0150 (0x0178 - 0x0028)
class UGlimpseSaveGameBase : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0028(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameBase");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameManager
// 0x0418 (0x0440 - 0x0028)
class UGlimpseSaveGameManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x418];                                     // 0x0028(0x0418) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFastReloader
// 0x0028 (0x0050 - 0x0028)
class UGlimpseFastReloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFastReloader");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFastTravelLocation
// 0x00B0 (0x04E0 - 0x0430)
class AGlimpseFastTravelLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0430(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFastTravelLocation");
		return ptr;
	}


	void TriggerFastTravel(class AGlimpsePlayerCharacter* PlayerCharacter);
	void SetFound(bool Val);
	void SetActive(bool Val);
	void OnInteraction(class AGlimpsePlayerCharacter* PlayerCharacter);
	void OnEnter(class AGlimpsePlayerCharacter* PlayerCharacter);
	void OnCantPerformAttemptedFastTravel(class AGlimpsePlayerCharacter* PlayerCharacter, TEnumAsByte<EFastTravelError> ErrorType);
	void OnArrive(class AGlimpsePlayerCharacter* PlayerCharacter);
	int GetNumFastTravelLocationsActive();
	bool GetFound();
	bool GetActive();
};


// Class GlimpseGame.GlimpseFillerModel
// 0x0080 (0x00A8 - 0x0028)
class UGlimpseFillerModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFillerModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFillerBuildings
// 0x0060 (0x0088 - 0x0028)
class UGlimpseFillerBuildings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFillerBuildings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFogActor
// 0x0080 (0x04B0 - 0x0430)
class AGlimpseFogActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0430(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFogActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFogEffectComponent
// 0x0050 (0x08D0 - 0x0880)
class UGlimpseFogEffectComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0880(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFogEffectComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageModel
// 0x0038 (0x0060 - 0x0028)
class UGlimpseFoliageModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlanEnvStyle
// 0x0058 (0x0080 - 0x0028)
class UGlimpsePlanEnvStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlanEnvStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTagComponent
// 0x00B0 (0x07E0 - 0x0730)
class UGlimpseTagComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0730(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTagComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapFeature
// 0x0050 (0x0480 - 0x0430)
class AGlimpseMapFeature : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapFeature");
		return ptr;
	}


	void MakeTerrainModifierFromTag(class UGlimpseTerrainData* Terrain, class UGlimpseTagComponent* TagComponent, float TargetHeight, float Dropoff, bool bForceMinHeight, float MinHeight, bool bForceMaxHeight, float MaxHeight);
	void CreateTerrain(class UGlimpseTerrainData* Terrain);
	void CreateBuildings(class UGlimpseTerrainData* Terrain);
};


// Class GlimpseGame.GlimpsePatternModel
// 0x0020 (0x0048 - 0x0028)
class UGlimpsePatternModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePatternModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePatternModelList
// 0x0010 (0x0038 - 0x0028)
class UGlimpsePatternModelList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePatternModelList");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldModel
// 0x0100 (0x0128 - 0x0028)
class UGlimpseWorldModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageActor
// 0x0020 (0x0450 - 0x0430)
class AGlimpseFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageBudget
// 0x0010 (0x0038 - 0x0028)
class UGlimpseFoliageBudget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageBudget");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageTable
// 0x0100 (0x0128 - 0x0028)
class UGlimpseFoliageTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageTable");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageHexGridPreviewComponent
// 0x0040 (0x0770 - 0x0730)
class UGlimpseFoliageHexGridPreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageHexGridPreviewComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageStylePreview
// 0x0030 (0x0460 - 0x0430)
class AGlimpseFoliageStylePreview : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageStylePreview");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageManager
// 0x02A0 (0x02C8 - 0x0028)
class UGlimpseFoliageManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0028(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFoliageStyle
// 0x0018 (0x0040 - 0x0028)
class UGlimpseFoliageStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFoliageStyle");
		return ptr;
	}

};


// Class GlimpseGame.LoadingScreenData
// 0x0060 (0x0088 - 0x0028)
class ULoadingScreenData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.LoadingScreenData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseGameInstance
// 0x0CC0 (0x0DA0 - 0x00E0)
class UGlimpseGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xCC0];                                     // 0x00E0(0x0CC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameInstance");
		return ptr;
	}


	void TravelToSallyEndingMap();
	void TravelToPrologueMap(TEnumAsByte<EStoryCharacter> Character);
	void TravelToMainMap();
	void TravelToEpilogueMap();
	void StartNewGame(TEnumAsByte<EGlimpseGameMode> Mode, TEnumAsByte<EStoryCharacter> StoryCharacter, TEnumAsByte<EGlimpseGameDifficulty> Difficulty, const struct FGlimpseDifficultySettings& InCustomDifficultySettings, bool bPrologue);
	void ShowShellMenu();
	void ShowCreditsWithCallback(const struct FScriptDelegate& MenuHiddenCallback);
	void ShowCredits();
	void ShellMenuGoBack();
	void SetProfileFlagValue(const struct FName& InName, int Value);
	void SetProfileFlag(const struct FName& InName);
	void SetControllerIndex(int Index);
	void ScriptedSave(const struct FString& CheckpointName, TEnumAsByte<EGlimpseSaveGameSlot> Slot);
	void ReturnToMainMenu();
	void ResetShellMenu();
	void ResetProfileFlags();
	void QuitGame();
	void LogProfileFlags();
	bool IsShellMenuVisible();
	bool IsSaveAllowed();
	bool IsProfileFlagSet(const struct FName& InName);
	bool IsLoadingScreenVisible();
	bool IsLoading();
	bool IsInMainMap();
	bool IsInGame();
	bool IsCreditsShowing();
	void HideShellMenu();
	void HideCredits();
	TEnumAsByte<EGlimpseGameState> GetState();
	class UGlimpseShellMenuPresenter* GetShellMenuPresenter();
	class UGlimpseShellMenu* GetShellMenu();
	struct FName GetSallyEndingMapName();
	struct FName GetPrologueMapName(TEnumAsByte<EStoryCharacter> Character);
	int GetProfileFlag(const struct FName& InName);
	struct FName GetModeMapName(TEnumAsByte<EGlimpseGameMode> GameMode, TEnumAsByte<EStoryCharacter> StoryCharacter);
	struct FName GetMainMapName();
	struct FName GetEpilogueMapName();
	void DumpAccumulatedGlimpseStats();
	void DebugShowMainMenu();
	void DebugShowLoadingScreen();
	void ClearProfileFlag(const struct FName& InName);
	void CharacterStoryComplete(const struct FScriptDelegate& CreditsCompleteCallback);
	void AutoSaveIfAllowed();
	void AutoSave();
	void AutoLoad();
};


// Class GlimpseGame.GlimpseBaseSandboxMode
// 0x0090 (0x1820 - 0x1790)
class AGlimpseBaseSandboxMode : public AGlimpseGameMode
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x1790(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBaseSandboxMode");
		return ptr;
	}


	struct FString GetWorldSeed();
	struct FString GetSettingString();
	struct FGlimpseSandboxSettings GetSandboxSettings();
};


// Class GlimpseGame.GlimpseSurvivalSandboxMode
// 0x0000 (0x1820 - 0x1820)
class AGlimpseSurvivalSandboxMode : public AGlimpseBaseSandboxMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSurvivalSandboxMode");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWellieSandboxMode
// 0x0000 (0x1820 - 0x1820)
class AGlimpseWellieSandboxMode : public AGlimpseBaseSandboxMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWellieSandboxMode");
		return ptr;
	}


	void RepopulateAIPopulation(class UDataTable* AITable);
};


// Class GlimpseGame.GlimpseVictoriaMode
// 0x0000 (0x1790 - 0x1790)
class AGlimpseVictoriaMode : public AGlimpseGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseVictoriaMode");
		return ptr;
	}


	void RepopulateAIPopulation(class UDataTable* AITable);
};


// Class GlimpseGame.GlimpseGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGlimpseGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameplayStatics");
		return ptr;
	}


	void STATIC_WaitForStreaming(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_UsingWorldBuilder(class UObject* WorldContextObject);
	void STATIC_UpdateAchievementProgress(class APawn* Pawn, const struct FString& AchievementName, float Percent);
	void STATIC_UnregisterOpenAreaSpawnLocation(class UObject* WorldContextObject, const struct FVector& Location);
	void STATIC_UnloadOnDemandLevel(class UObject* ReferenceObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_UnloadOnDemandFeatureGroup(TAssetPtr<class UClass> Feature, const struct FName& Group, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_UnloadOnDemandFeature(TAssetPtr<class UClass> Feature, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_UnblockScriptedSave(class UObject* WorldContextObject);
	void STATIC_UnblockAutoSaveWithActor(class AActor* Actor);
	void STATIC_UnblockAutoSave(class UObject* WorldContextObject);
	void STATIC_TextToSpeechAndWait(class UObject* WorldContextObject, const struct FString& Text, bool bFemale, const struct FLatentActionInfo& LatentInfo);
	void STATIC_TextToSpeech(const struct FString& Text, bool bFemale);
	void STATIC_StopFullscreenMovieAudio(class UObject* WorldContextObject);
	void STATIC_StartConversationWithPatrols(class UObject* WorldContextObject, const struct FGlimpseConversation& Conversation, TArray<class AGlimpseCharacter*> Characters, TArray<class AActor*> PatrolActors, const struct FScriptDelegate& OnConversationFinished);
	void STATIC_StartConversationAssetWithPatrols(class UObject* WorldContextObject, class UGlimpseConversationAsset* Conversation, TArray<class AGlimpseCharacter*> Characters, TArray<class AActor*> PatrolActors, const struct FScriptDelegate& OnConversationFinished, bool SuspicionInterruptConversation);
	void STATIC_StartConversationAsset(class UObject* WorldContextObject, class UGlimpseConversationAsset* Conversation, TArray<class AGlimpseCharacter*> Characters, const struct FScriptDelegate& OnConversationFinished, bool SuspicionInterruptConversation);
	void STATIC_StartConversation(class UObject* WorldContextObject, const struct FGlimpseConversation& Conversation, TArray<class AGlimpseCharacter*> Characters, const struct FScriptDelegate& OnConversationFinished);
	class AGlimpseAICharacter* STATIC_SpawnFromClosestSpawner(class UObject* WorldContextObject, class UClass* NPCType, class UClass* SpawnerType, const struct FVector& Location, float SearchRadius, bool bReturnToSpawner);
	void STATIC_SetWwiseState(const struct FName& StateGroup, const struct FName& StateName);
	void STATIC_SetUserProfileFlagValue(class UObject* WorldContextObject, const struct FName& InName, int Value);
	void STATIC_SetUserProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	void STATIC_SetSuspicionEffectOverride(class UObject* WorldContextObject, TEnumAsByte<EAISuspicionStimulusType> ActionType, TEnumAsByte<EAISuspicionState> MinimumState, float Multiplier, class AActor* InsideActor);
	void STATIC_SetShadowsOverride(class UObject* WorldContextObject, bool bEnabled);
	void STATIC_SetObjectiveStatusForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, const struct FName& ObjectiveKey, TEnumAsByte<EObjectiveStatus> InStatus, bool bForceActivate);
	void STATIC_SetObjectiveStatus(class AGlimpsePlayerController* Controller, class UClass* QuestType, const struct FName& ObjectiveKey, TEnumAsByte<EObjectiveStatus> InStatus, bool bForceActivate);
	void STATIC_SetObjectiveCounterForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, const struct FName& ObjectiveKey, int NewCount, bool bForceActivate);
	void STATIC_SetObjectiveCounter(class AGlimpsePlayerController* Controller, class UClass* QuestType, const struct FName& ObjectiveKey, int NewCount, bool bForceActivate);
	void STATIC_SetHUDWidgetByRef(class UObject* WorldContextObject, const struct FName& WidgetRef, class UWidget* Widget);
	void STATIC_SetGameProfileFlagValue(class UObject* WorldContextObject, const struct FName& InName, int Value);
	void STATIC_SetGameProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	void STATIC_SetControllerSuspicionReactionForTarget(class AGlimpseAIController* Controller, TEnumAsByte<EAISuspicionReaction> Reaction);
	void STATIC_SetControllerSuspicionForTarget(class AGlimpseAIController* Controller, class AActor* SuspicionTarget, TEnumAsByte<EAISuspicionState> State, bool bOnlyIfBelow);
	void STATIC_SetAchievementProgress(class APawn* Pawn, const struct FName& AchievementName, float Percent);
	void STATIC_SeekEvent(class AActor* Actor, class UAkAudioEvent* Event, float Position);
	void STATIC_ScriptedSave(class UObject* WorldContextObject, const struct FString& CheckpointName, TEnumAsByte<EGlimpseSaveGameSlot> Slot);
	void STATIC_RevealMapMarker(class UObject* WorldContextObject, const struct FString& MarkerName);
	void STATIC_RequestGamePause(class UObject* WorldContextObject);
	void STATIC_ReleaseGamePause(class UObject* WorldContextObject);
	bool STATIC_RegisterOpenAreaSpawnLocation(class UObject* WorldContextObject, const struct FVector& Location);
	void STATIC_RegisterExclusivePOILevel(class UObject* Object);
	void STATIC_PushWeatherOverride(class UObject* WorldContextObject, TEnumAsByte<EGlimpseWeatherFixedState> WeatherState, float TransitionTime);
	void STATIC_PrecacheConversation(class UObject* WorldContextObject, class UGlimpseConversationAsset* Conversation);
	void STATIC_PrecacheAudioEvent(class UObject* WorldContextObject, class UAkAudioEvent* AudioEvent);
	void STATIC_PopWeatherOverride(class UObject* WorldContextObject);
	void STATIC_PlaySoundAndWait(class AActor* Actor, class UAkAudioEvent* SoundEvent, const struct FLatentActionInfo& LatentInfo);
	void STATIC_PlayFullscreenMovieWithAudio(class UObject* WorldContextObject, const struct FString& MoviePath, class UAkAudioEvent* AudioEvent, bool DontSeekStopAudio, const struct FLatentActionInfo& LatentInfo);
	void STATIC_PlayFullscreenMovie(class UObject* WorldContextObject, const struct FString& MoviePath, const struct FLatentActionInfo& LatentInfo);
	void STATIC_MoveMapMarker(class UObject* WorldContextObject, const struct FString& MarkerName, const struct FVector2D& NewLocation);
	void STATIC_MarkTutorialObjectUsed(class UObject* WorldContextObject, class UObject* TutorialRefObject);
	void STATIC_MarkTutorialNameUsed(class UObject* WorldContextObject, const struct FName& TutorialName);
	void STATIC_LocationMarkerPositionAndRotation(class UObject* WorldContextObject, const struct FName& LocationName, struct FVector* Position, struct FRotator* Rotation);
	void STATIC_LoadOnDemandLevel(class UObject* ReferenceObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadOnDemandFeatureGroupNonLatent(TAssetPtr<class UClass> Feature, const struct FName& Group, class UObject* WorldContextObject, TEnumAsByte<EGlimpseStreamingLevelState> State);
	void STATIC_LoadOnDemandFeatureGroup(TAssetPtr<class UClass> Feature, const struct FName& Group, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TEnumAsByte<EGlimpseStreamingLevelState> State, bool bSkipLatentAction);
	void STATIC_LoadOnDemandFeature(TAssetPtr<class UClass> Feature, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_KillPlayer(class UObject* WorldContextObject, TEnumAsByte<EGlimpseDamageCategory> DamageType);
	bool STATIC_IsUserProfileFlagSet(class UObject* WorldContextObject, const struct FName& InName);
	bool STATIC_IsPlayerInActorZone(class AActor* Actor, float PlayerZoneTolerance);
	bool STATIC_IsPIE();
	bool STATIC_IsMapMarkerRevealed(class UObject* WorldContextObject, const struct FString& MarkerName);
	bool STATIC_IsLowMaterialQuality();
	bool STATIC_IsLoadingSaveGame(class UObject* WorldContextObject);
	bool STATIC_IsGameProfileFlagSet(class UObject* WorldContextObject, const struct FName& InName);
	bool STATIC_IsConsolePlatform();
	bool STATIC_IsActorInPlayerSight(class AActor* Actor, float MinFrustumCheckDistance, float MaxFrustumCheckDistance);
	void STATIC_InstantSuspicion(class UObject* Source, class AActor* Target, const struct FSuspicionEffect& Effect, bool bVisible, bool bAudible, TEnumAsByte<EAIDetectionTarget> TargetType, float Loudness, float DirectRange, bool bDirectWithLineOfSight, float LockDuration, class AGlimpseAIController* SpecificController);
	void STATIC_IncrementObjectiveCounterForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, const struct FName& ObjectiveKey, int Increment, bool bForceActivate);
	void STATIC_IncrementObjectiveCounter(class AGlimpsePlayerController* Controller, class UClass* QuestType, const struct FName& ObjectiveKey, int Increment, bool bForceActivate);
	void STATIC_HideMapMarker(class UObject* WorldContextObject, const struct FString& MarkerName);
	bool STATIC_HasTutorialObjectBeenUsed(class UObject* WorldContextObject, class UObject* TutorialRefObject);
	bool STATIC_HasTutorialNameBeenUsed(class UObject* WorldContextObject, const struct FName& TutorialName);
	int STATIC_GetUserProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	TEnumAsByte<EGlimpseSuspicionReason> STATIC_GetSuspicionReasonForConformity(TEnumAsByte<ESuspicionConformityRequest> Conformity);
	float STATIC_GetScreenFadeAmount(class UObject* WorldContextObject);
	TEnumAsByte<EQuestStatus> STATIC_GetQuestStatusForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType);
	TEnumAsByte<EQuestStatus> STATIC_GetQuestStatus(class AGlimpsePlayerController* Controller, class UClass* QuestType);
	class UQuest* STATIC_GetQuestForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType);
	void STATIC_GetQuestDetailedStatusForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, TEnumAsByte<EQuestStatus>* QuestStatus, struct FName* CurrentObjective);
	void STATIC_GetQuestDetailedStatus(class AGlimpsePlayerController* Controller, class UClass* QuestType, TEnumAsByte<EQuestStatus>* QuestStatus, struct FName* CurrentObjective);
	class UQuest* STATIC_GetQuest(class AGlimpsePlayerController* Controller, class UClass* QuestType);
	int STATIC_GetObjectRandomSeed(class UObject* Object, bool bChecked);
	TEnumAsByte<EObjectiveStatus> STATIC_GetObjectiveStatusForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, const struct FName& ObjectiveKey);
	TEnumAsByte<EObjectiveStatus> STATIC_GetObjectiveStatus(class AGlimpsePlayerController* Controller, class UClass* QuestType, const struct FName& ObjectiveKey);
	int STATIC_GetObjectiveCounterForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, const struct FName& ObjectiveKey);
	int STATIC_GetObjectiveCounter(class AGlimpsePlayerController* Controller, class UClass* QuestType, const struct FName& ObjectiveKey);
	struct FVector STATIC_GetLookAtLocationOnLocalPlayer(class USkeletalMeshComponent* SkeletalMesh, const struct FName& LeftBoneName, const struct FName& RightBoneName, float BehindCameraOffset);
	int STATIC_GetLightQuality();
	class UWidget* STATIC_GetHUDWidgetByRef(class UObject* WorldContextObject, const struct FName& WidgetRef);
	struct FTimespan STATIC_GetGlimpseTimestamp(class UObject* WorldContextObject);
	TEnumAsByte<ETimeOfDay> STATIC_GetGlimpseTimeOfDay(class UObject* WorldContextObject);
	TEnumAsByte<EGlimpseGameMode> STATIC_GetGlimpseGameTypeSafe(class UObject* WorldContextObject);
	TEnumAsByte<EGlimpseGameMode> STATIC_GetGlimpseGameType(class UObject* WorldContextObject);
	class AGlimpseGameMode* STATIC_GetGlimpseGameMode(class UObject* WorldContextObject);
	TEnumAsByte<EStoryCharacter> STATIC_GetGlimpseGameCharacterSafe(class UObject* WorldContextObject);
	TEnumAsByte<EStoryCharacter> STATIC_GetGlimpseGameCharacter(class UObject* WorldContextObject);
	int STATIC_GetGameProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	TEnumAsByte<EGlimpseGameDifficulty> STATIC_GetGameDifficulty(class UObject* WorldContextObject);
	class UGlimpseBroadcaster* STATIC_GetDefaultBroadcaster(class UObject* WorldContextObject);
	TEnumAsByte<EGlimpseBiome> STATIC_GetCurrentBiome(class UObject* WorldContextObject);
	TEnumAsByte<EAISuspicionReaction> STATIC_GetControllerSuspicionReactionForTarget(class AGlimpseAIController* Controller);
	TEnumAsByte<EGlimpseBiome> STATIC_GetBiome(class UObject* WorldContextObject, const struct FVector& Position);
	struct FVector STATIC_FindLocationMarker(class UObject* WorldContextObject, const struct FName& LocationName, bool* Found);
	struct FVector STATIC_FindClosestLocationMarkerToPlayer(class UObject* WorldContextObject, const struct FName& LocationName, bool* Found);
	struct FVector STATIC_FindClosestLocationMarker(class UObject* WorldContextObject, const struct FName& LocationName, const struct FVector& RefLocation, bool* Found);
	void STATIC_ExitAmbienceVolume(class AActor* AmbienceVolume);
	void STATIC_EnterAmbienceVolume(class AActor* AmbienceVolume, class UAkAudioEvent* AmbienceSoundEvent, bool bNoAmbientMusic, class UAkAudioEvent* OveriddenCombatMusic);
	void STATIC_DontStopAudioOnFullscreenMovieClose(class UObject* WorldContextObject);
	bool STATIC_DoesMapMarkerExist(class UObject* WorldContextObject, const struct FString& MarkerName);
	void STATIC_DestroyMapMarker(class UObject* WorldContextObject, const struct FString& MarkerName);
	void STATIC_CreateMapMarker(class UObject* WorldContextObject, const struct FString& MarkerName, TEnumAsByte<EGlimpseMapPOI> Category, const struct FText& DisplayName, const struct FSlateBrush& CloseZoomIcon, const struct FSlateBrush& FarZoomIcon);
	void STATIC_ContinuousSuspicion(class UObject* Source, class AActor* Target, const struct FSuspicionEffect& Effect, bool bVisible, bool bAudible, const struct FName& SuspicionTag, TEnumAsByte<EAIDetectionTarget> TargetType, float Loudness, float DirectRange, float TickPeriod, float TimeToLive, bool bDirectWithLineOfSight, TEnumAsByte<EGlimpseTeamId> AffectTeam, class AActor* SourceOverride);
	void STATIC_CompleteQuestForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType);
	void STATIC_CompleteQuest(class AGlimpsePlayerController* Controller, class UClass* QuestType);
	void STATIC_CloseFullscreenMovie(class UObject* WorldContextObject);
	void STATIC_ClearUserProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	void STATIC_ClearTutorialObjectUsed(class UObject* WorldContextObject, class UObject* TutorialRefObject);
	void STATIC_ClearTutorialNameUsed(class UObject* WorldContextObject, const struct FName& TutorialName);
	void STATIC_ClearSuspicionEffectOverride(class UObject* WorldContextObject, TEnumAsByte<EAISuspicionStimulusType> ActionType);
	void STATIC_ClearHUDWidgetByRef(class UObject* WorldContextObject, const struct FName& WidgetRef);
	void STATIC_ClearGameProfileFlag(class UObject* WorldContextObject, const struct FName& InName);
	void STATIC_ClearControllerSuspicionForTarget(class AGlimpseAIController* Controller, class AActor* SuspicionTarget, float CooldownTime);
	void STATIC_ClearContinuousSuspicion(class UObject* Source, const struct FName& SuspicionTag);
	void STATIC_ClearAllSuspicionForTarget(class UObject* WorldContextObject, class AActor* SuspicionTarget, const struct FGameplayTag& SuspicionTag);
	void STATIC_ClearAllControllerSuspicion(class AGlimpseAIController* Controller);
	void STATIC_BlockScriptedSave(class UObject* WorldContextObject);
	void STATIC_BlockAutoSaveWithActor(class AActor* Actor);
	void STATIC_BlockAutoSave(class UObject* WorldContextObject);
	void STATIC_AwardAchievement(class APawn* Pawn, const struct FString& AchievementName);
	void STATIC_AdjustAchievementProgress(class APawn* Pawn, const struct FName& AchievementName, float Percent);
	void STATIC_ActivateQuestForCharacter(class AGlimpsePlayerCharacter* Character, class UClass* QuestType, bool bForceReset);
	void STATIC_ActivateQuest(class AGlimpsePlayerController* Controller, class UClass* QuestType, bool bForceReset);
};


// Class GlimpseGame.GlimpseGameSingleton
// 0x0030 (0x0058 - 0x0028)
class UGlimpseGameSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameSingleton");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseGameSlotPresenter
// 0x0090 (0x00B8 - 0x0028)
class UGlimpseGameSlotPresenter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameSlotPresenter");
		return ptr;
	}


	void OnSetupNewGame();
	void OnSelectGameConfirmButton();
	void OnPostClearSpaceNewGameSetupPressed();
	void OnDeletePressed();
	void OnConfirmNewGame();
	void OnBackPressed();
	bool IsHighlightingTheClearSpaceNewGameButton();
	float GetTotalSpace();
	float GetRequiredFreeSpace();
	float GetHighlightedSlotSpace();
	float GetCurrentFreeSpace();
};


// Class GlimpseGame.GlimpseGameViewportClient
// 0x0030 (0x04B0 - 0x0480)
class UGlimpseGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0480(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseGameViewportClient");
		return ptr;
	}


	void DrugIntensity(float InIntensity);
};


// Class GlimpseGame.GlimpseHighwayPreviewComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseHighwayPreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHighwayPreviewComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseHighwayActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseHighwayActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHighwayActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseHighwayEdgeComponent
// 0x0010 (0x0370 - 0x0360)
class UGlimpseHighwayEdgeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHighwayEdgeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseInGameTip
// 0x0028 (0x0260 - 0x0238)
class UGlimpseInGameTip : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseInGameTip");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseUserWidget
// 0x0348 (0x0580 - 0x0238)
class UGlimpseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0238(0x0348) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseUserWidget");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetDesktopVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.GlimpseHUDWidget
// 0x04E0 (0x0A60 - 0x0580)
class UGlimpseHUDWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x4E0];                                     // 0x0580(0x04E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHUDWidget");
		return ptr;
	}


	void UpdatePlayerVisibility(TEnumAsByte<EHUDPlayerVisibility> CurrentVisibility);
	void UpdatePlayerSuspicion(TEnumAsByte<EHUDPlayerSuspicion> CurrentSuspicion);
	void UpdatePlayerLoudness(TEnumAsByte<EHUDPlayerLoudness> CurrentLoudness);
	void UpdateCountdownWidget(bool Show, const struct FText& TimeString, bool danger);
	struct FLinearColor OnGetHealthOverlayOpacity();
	TEnumAsByte<ESlateVisibility> GetTrespassingVisibility();
	struct FLinearColor GetStealthVignetteColour();
	class AGlimpsePlayerController* GetPlayerController();
	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetCurfewVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetAudioWarningVisibility();
};


// Class GlimpseGame.GlimpseHUD
// 0x0390 (0x08A0 - 0x0510)
class AGlimpseHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0510(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHUD");
		return ptr;
	}


	void ShowPresetDiscoveryText(TEnumAsByte<EDiscoveryPreset> Preset, const struct FText& InBodyText);
	void ShowFloatingText(const struct FText& InText);
	void ShowDiscoveryText(TEnumAsByte<EDiscoveryIcon> InIcon, const struct FText& InTitleText, const struct FText& InBodyText);
	void ShowDebugNotification();
	void ShowDebugInGameTip();
	void ShowDateTime(bool bAutoHide);
	void SetHUDVisibility(TEnumAsByte<EHUDVisibility> InVisibility);
	void OnSurvivalStatChanged(TEnumAsByte<ESurvivalNeed> StatType, float NewValue, float DeltaValue);
	void OnStatusEffectTierChanged(class UGlimpseStatusEffectTiered* Effect, int OldTier, int NewTier);
	void OnStatusEffectRemoved(class UGlimpseStatusEffectBase* Effect);
	void OnStatusEffectApplied(class UGlimpseStatusEffectBase* Effect);
	TEnumAsByte<ESlateVisibility> OnGetTopRightVisibility();
	struct FText OnGetTimeText();
	TEnumAsByte<ESlateVisibility> OnGetTargetPromptVisibility();
	struct FText OnGetTargetDescriptiveName();
	TEnumAsByte<ESlateVisibility> OnGetStatusEffectVisibility();
	TEnumAsByte<ESlateVisibility> OnGetStaminaBarVisibility();
	TEnumAsByte<ESlateVisibility> OnGetSecondaryInteractionVisibility();
	struct FText OnGetSecondaryInteractionText();
	TEnumAsByte<ESlateVisibility> OnGetSecondaryInteractionHoldTextVisibility();
	TEnumAsByte<ESlateVisibility> OnGetSecondaryInputBindingStandardVisibility();
	TEnumAsByte<ESlateVisibility> OnGetSecondaryInputBindingFireVisibility();
	TEnumAsByte<ESlateVisibility> OnGetProgressVisibility();
	float OnGetProgressPercent();
	TEnumAsByte<ESlateVisibility> OnGetPrimaryInteractionVisibility();
	struct FLinearColor OnGetPrimaryInteractionTint();
	struct FText OnGetPrimaryInteractionText();
	TEnumAsByte<ESlateVisibility> OnGetPrimaryInteractionHoldTextVisibility();
	TEnumAsByte<ESlateVisibility> OnGetPrimaryInputBindingStandardVisibility();
	TEnumAsByte<ESlateVisibility> OnGetPrimaryInputBindingFireVisibility();
	TEnumAsByte<ESlateVisibility> OnGetPlayerImpactIconsVisibility();
	TEnumAsByte<ESlateVisibility> OnGetPersistentStatusVisibility();
	struct FText OnGetPersistentStatusText();
	TEnumAsByte<ESlateVisibility> OnGetPerceptionIconVisibility();
	int OnGetPerceptionIconSuspicionLevel();
	bool OnGetPerceptionIconStealthMode();
	bool OnGetPerceptionIconShouldPulse();
	int OnGetPerceptionIconIndex();
	TEnumAsByte<ESlateVisibility> OnGetNoHUDModeVisibility();
	TEnumAsByte<ESlateVisibility> OnGetMantleVisibility();
	struct FText OnGetMantleText();
	TEnumAsByte<ESlateVisibility> OnGetInfoVisibility();
	TEnumAsByte<ESlateVisibility> OnGetFullVisibility();
	TEnumAsByte<ESlateVisibility> OnGetEquipSlotsVisibility();
	TEnumAsByte<ESlateVisibility> OnGetDiscoveryTextVisibility();
	struct FText OnGetDayText();
	TEnumAsByte<ESlateVisibility> OnGetDateTimeVisibility();
	TEnumAsByte<ESlateVisibility> OnGetCrouchVisibility();
	struct FText OnGetCrouchText();
	struct FSlateColor OnGetCrosshairsTint();
	TEnumAsByte<ESlateVisibility> OnGetCrosshairsReticleVisibility();
	TEnumAsByte<ESlateVisibility> OnGetCrosshairsDotVisibility();
	TEnumAsByte<ESlateVisibility> OnGetCompassVisibility();
	TEnumAsByte<ESlateVisibility> OnGetAttackVisibility();
	struct FText OnGetAttackText();
	void HideDateTime();
	float GetViewportScale();
	struct FText GetTipTitleText();
	struct FLinearColor GetTipTint();
	struct FSlateBrush GetTipIcon();
	struct FText GetTipBodyText();
	TEnumAsByte<EHUDCrosshairsVisibility> GetReticleStyle();
	TEnumAsByte<ESlateVisibility> GetJoyIndicatorVisibility();
	bool GetIsPlayerMenuVisible(TEnumAsByte<EPlayerMenu> Menu);
	TEnumAsByte<EHUDVisibility> GetHUDVisibility();
	TEnumAsByte<ESlateVisibility> GetHiddenByPlayerMenuVisibility();
	struct FText GetCompactTipText();
};


// Class GlimpseGame.GlimpseHUDBar
// 0x0360 (0x0478 - 0x0118)
class UGlimpseHUDBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0118(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHUDBar");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseHUDBarWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UGlimpseHUDBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0030(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseHUDBarWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseInGameTipData
// 0x0010 (0x0038 - 0x0028)
class UGlimpseInGameTipData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseInGameTipData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseIntersectionComponent
// 0x0030 (0x0760 - 0x0730)
class UGlimpseIntersectionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0730(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseIntersectionComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAreaComponent
// 0x0000 (0x07E0 - 0x07E0)
class UGlimpseAreaComponent : public UGlimpseTagComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAreaComponent");
		return ptr;
	}


	void SetAreaExtent(const struct FVector2D& InAreaExtent, bool bUpdateOverlaps);
	struct FVector2D GetUnscaledAreaExtent();
	struct FVector2D GetScaledAreaExtent();
};


// Class GlimpseGame.GlimpseFillerActor
// 0x0160 (0x0640 - 0x04E0)
class AGlimpseFillerActor : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x04E0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFillerActor");
		return ptr;
	}

};


// Class GlimpseGame.CraftingRecipePickup
// 0x0000 (0x07A0 - 0x07A0)
class ACraftingRecipePickup : public AGlimpsePickupTransient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CraftingRecipePickup");
		return ptr;
	}

};


// Class GlimpseGame.LorePickup
// 0x0010 (0x07B0 - 0x07A0)
class ALorePickup : public AGlimpsePickupTransient
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.LorePickup");
		return ptr;
	}

};


// Class GlimpseGame.ManualPickup
// 0x0000 (0x07A0 - 0x07A0)
class AManualPickup : public AGlimpsePickupTransient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ManualPickup");
		return ptr;
	}

};


// Class GlimpseGame.MoneyPickup
// 0x0000 (0x07A0 - 0x07A0)
class AMoneyPickup : public AGlimpsePickupTransient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MoneyPickup");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePickupSurvival
// 0x0070 (0x0870 - 0x0800)
class AGlimpsePickupSurvival : public AGlimpsePickupUsable
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0800(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupSurvival");
		return ptr;
	}


	float GetStatVariation(TEnumAsByte<ESurvivalNeed> Type);
};


// Class GlimpseGame.GlimpsePickupMutableWeapon
// 0x0030 (0x0C20 - 0x0BF0)
class AGlimpsePickupMutableWeapon : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BF0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupMutableWeapon");
		return ptr;
	}


	void TriggerHolsterAttack(class AGlimpsePlayerCharacter* PlayerCharacter);
	void SwitchToMeleeConfiguration();
	void SwitchToFireConfiguration();
	void SetChargeEnabled(bool Enabled);
	bool IsMeleeConfigurationActive();
	bool IsFireConfigurationActive();
	void ForceBeginCharge(class APawn* InstigatorPawn);
	void ChangeWeaponMode(class AGlimpsePlayerCharacter* PlayerCharacter);
	bool CanChangeWeaponMode(class AGlimpsePlayerCharacter* PlayerCharacter);
};


// Class GlimpseGame.GlimpseRailroadBridgeActor
// 0x0010 (0x04F0 - 0x04E0)
class AGlimpseRailroadBridgeActor : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRailroadBridgeActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRiverBridgeActor
// 0x0010 (0x04F0 - 0x04E0)
class AGlimpseRiverBridgeActor : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRiverBridgeActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadActor
// 0x0040 (0x0520 - 0x04E0)
class AGlimpseRoadActor : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x04E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseShoreActor
// 0x0010 (0x04F0 - 0x04E0)
class AGlimpseShoreActor : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseShoreActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLivenessComponent
// 0x0010 (0x0370 - 0x0360)
class UGlimpseLivenessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLivenessComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLivenessManager
// 0x0148 (0x0170 - 0x0028)
class UGlimpseLivenessManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLivenessManager");
		return ptr;
	}


	bool STATIC_IsActorLive(class UObject* WorldContextObject, class AActor* Actor);
};


// Class GlimpseGame.GlimpseLocalPlayer
// 0x0038 (0x01C8 - 0x0190)
class UGlimpseLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0190(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLocalPlayer");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLocationMarker
// 0x0000 (0x0430 - 0x0430)
class AGlimpseLocationMarker : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLocationMarker");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLoosePickupManager
// 0x01D8 (0x0200 - 0x0028)
class UGlimpseLoosePickupManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0028(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLoosePickupManager");
		return ptr;
	}


	void OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnActorDestroyed(class AActor* Actor);
};


// Class GlimpseGame.GlimpseLootManager
// 0x01E8 (0x0210 - 0x0028)
class UGlimpseLootManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0028(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLootManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseLoreData
// 0x0010 (0x0038 - 0x0028)
class UGlimpseLoreData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseLoreData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapMaker
// 0x02F8 (0x0320 - 0x0028)
class UGlimpseMapMaker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0028(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapMaker");
		return ptr;
	}


	void RevealMarker(const struct FString& MarkerName);
	void MoveMarker(const struct FString& MarkerName, const struct FVector2D& NewLocation);
	bool IsMarkerRevealed(const struct FString& MarkerName);
	void HideMarker(const struct FString& MarkerName);
	bool DoesMarkerExist(const struct FString& MarkerName);
	void DestroyMarker(const struct FString& MarkerName);
	void CreateMarker(const struct FString& MarkerName, TEnumAsByte<EGlimpseMapPOI> Category, const struct FText& DisplayName, const struct FSlateBrush& CloseZoomIcon, const struct FSlateBrush& FarZoomIcon);
};


// Class GlimpseGame.GlimpseMapMakerStyle
// 0x0100 (0x0128 - 0x0028)
class UGlimpseMapMakerStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapMakerStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapMarker
// 0x0000 (0x0430 - 0x0430)
class AGlimpseMapMarker : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapMarker");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapPOIComponent
// 0x0300 (0x0660 - 0x0360)
class UGlimpseMapPOIComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0360(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapPOIComponent");
		return ptr;
	}


	void SetMarkerIsDynamic(bool bIsDynamic);
	struct FString GetMapPOIName();
};


// Class GlimpseGame.GlimpseMapSpawnModelComponent
// 0x0010 (0x0740 - 0x0730)
class UGlimpseMapSpawnModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapSpawnModelComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapStyle
// 0x2010 (0x2040 - 0x0030)
class UGlimpseMapStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x2010];                                    // 0x0030(0x2010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapZone
// 0x0200 (0x0630 - 0x0430)
class AGlimpseMapZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0430(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapZone");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMarkupDebugComponent
// 0x0030 (0x0760 - 0x0730)
class UGlimpseMarkupDebugComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0730(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMarkupDebugComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMenuGameMode
// 0x0000 (0x0500 - 0x0500)
class AGlimpseMenuGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMenuGameMode");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMenuNews
// 0x0050 (0x0078 - 0x0028)
class UGlimpseMenuNews : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMenuNews");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMenuNewsWidgetStyle
// 0x0F58 (0x0F88 - 0x0030)
class UGlimpseMenuNewsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0xF58];                                     // 0x0030(0x0F58) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMenuNewsWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMeshWithReflection
// 0x0000 (0x0440 - 0x0440)
class AGlimpseMeshWithReflection : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMeshWithReflection");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMusicManager
// 0x0030 (0x0058 - 0x0028)
class UGlimpseMusicManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMusicManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseNavLinkComponent
// 0x0060 (0x0290 - 0x0230)
class UGlimpseNavLinkComponent : public UNavLinkCustomComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0230(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseNavLinkComponent");
		return ptr;
	}


	void SetLinkPoints(const struct FVector& Start, const struct FVector& End);
};


// Class GlimpseGame.PropNotifyState
// 0x0090 (0x00C0 - 0x0030)
class UPropNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PropNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseNewspaper
// 0x0048 (0x0070 - 0x0028)
class UGlimpseNewspaper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseNewspaper");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseNewspaperWidget
// 0x0040 (0x0278 - 0x0238)
class UGlimpseNewspaperWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0238(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseNewspaperWidget");
		return ptr;
	}


	struct FText GetIssueNumberText();
	struct FText GetDateText();
};


// Class GlimpseGame.NewspaperNotifyState
// 0x0000 (0x00C0 - 0x00C0)
class UNewspaperNotifyState : public UPropNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewspaperNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePickupList
// 0x0058 (0x0080 - 0x0028)
class UGlimpsePickupList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupList");
		return ptr;
	}

};


// Class GlimpseGame.PickupSpawnerComponent
// 0x0160 (0x04C0 - 0x0360)
class UPickupSpawnerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0360(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PickupSpawnerComponent");
		return ptr;
	}


	void Spawn(bool bForceRespawn);
	void OnSpawnedPickupPickedUp(class APawn* InteractSource);
	void AbandonSpawnedPickup();
};


// Class GlimpseGame.GlimpsePickupSpawner
// 0x0010 (0x0440 - 0x0430)
class AGlimpsePickupSpawner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePickupSpawner");
		return ptr;
	}


	void Spawn(bool bForceRespawn);
};


// Class GlimpseGame.GlimpsePlanSemantic
// 0x0018 (0x0040 - 0x0028)
class UGlimpsePlanSemantic : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlanSemantic");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlayerArmsSet
// 0x0038 (0x0060 - 0x0028)
class UGlimpsePlayerArmsSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerArmsSet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlayerCameraManager
// 0x0040 (0x1A70 - 0x1A30)
class AGlimpsePlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x1A30(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerCameraManager");
		return ptr;
	}


	void RestrictView(const struct FVector& BaseDirection, float MinPitch, float MaxPitch, float MinYaw, float MaxYaw);
	void OverrideFOV(float NewFOV);
	class AGlimpsePlayerController* GetOwningGlimpsePlayerController();
	float GetBaseFOVAngle();
	void FadeOut(float FadeDuration, const struct FLinearColor& FadeColour, bool bAutoClearFade);
	void FadeIn(float FadeDuration, const struct FLinearColor& FadeColour);
	void CustomFade(float FadeDuration, const struct FLinearColor& FadeColour, float StartingFadePercent, float EndingFadePercent, bool bAutoClearFade);
	void ClearFade();
};


// Class GlimpseGame.GlimpseProcGenActor
// 0x0030 (0x0460 - 0x0430)
class AGlimpseProcGenActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseProcGenActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseProjectile
// 0x0010 (0x0440 - 0x0430)
class AGlimpseProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseProjectile");
		return ptr;
	}


	void OnOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
};


// Class GlimpseGame.QuestPredicate
// 0x0058 (0x0080 - 0x0028)
class UQuestPredicate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate");
		return ptr;
	}


	void BroadcastPredicateChanged();
};


// Class GlimpseGame.QuestPredicateBlueprint
// 0x0000 (0x0080 - 0x0080)
class UQuestPredicateBlueprint : public UQuestPredicate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicateBlueprint");
		return ptr;
	}


	void ReceiveUnbind();
	bool ReceiveTest();
	void ReceiveBind();
};


// Class GlimpseGame.QuestPredicate_And
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_And : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_And");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_Or
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_Or : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_Or");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_Counter
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_Counter : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_Counter");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseQuestLibrary
// 0x0000 (0x0028 - 0x0028)
class UGlimpseQuestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseQuestLibrary");
		return ptr;
	}


	void STATIC_StartTestQuest(class UObject* WorldContextObject, class UClass* QuestClass);
	void STATIC_PushPuppetShowContext(class UObject* WorldContextObject);
	void STATIC_PuppetShowTurnToLocation(class UObject* WorldContextObject, class AGlimpseCharacter* Character, const struct FVector& Location, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowTurnToActor(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AActor* Target, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowTextToSpeech(class UObject* WorldContextObject, class AGlimpseCharacter* Character, const struct FString& Text, bool bFemale, float StartOffset, float EndOffset);
	void STATIC_PuppetShowSetLookAt(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AActor* LookAtTarget, bool bFaceLookAtTarget, float StartOffset, float EndOffset);
	void STATIC_PuppetShowPOI(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AActor* ActorWithPOI, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowNewThread(class UObject* WorldContextObject);
	void STATIC_PuppetShowMoveToLocation(class UObject* WorldContextObject, class AGlimpseCharacter* Character, const struct FVector& Location, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowMoveToActor(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AActor* Target, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowLookAt(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AActor* LookAtTarget, float StartOffset, float EndOffset, float Duration);
	void STATIC_PuppetShowIdle(class UObject* WorldContextObject, class AGlimpseCharacter* Character, float StartOffset, float EndOffset);
	void STATIC_PuppetShowFlee(class UObject* WorldContextObject, class AGlimpseCharacter* Character, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowExecInternal(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool bIgnoreOnSkip, float StartOffset, float EndOffset);
	void STATIC_PuppetShowConversationSettings(class UObject* WorldContextObject, const struct FConversationModeSettings& ConversationSettings, float StartOffset, float EndOffset);
	void STATIC_PuppetShowConversation(class UObject* WorldContextObject, class UGlimpseConversationAsset* Conversation, TArray<class AGlimpseCharacter*> Characters, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAudioAndAnimMontage(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class UAkAudioEvent* AudioEvent, class UAnimMontage* Montage, bool bLoopMontage, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAudioAndAnimChain(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class UAkAudioEvent* AudioEvent, class UGlimpseAnimationChain* Chain, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAudio(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class UAkAudioEvent* AudioEvent, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAttack(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class AGlimpseCharacter* Target, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAnimMontage(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class UAnimMontage* Montage, bool bLoopMontage, float StartOffset, float EndOffset);
	void STATIC_PuppetShowAnimChain(class UObject* WorldContextObject, class AGlimpseCharacter* Character, class UGlimpseAnimationChain* Chain, float StartOffset, float EndOffset);
	void STATIC_PopPuppetShowContext(class UObject* WorldContextObject);
	void STATIC_PlayPuppetShowWithDelegate(class UObject* WorldContextObject, class UPuppetShow* PuppetShow, bool bAllowSkipping, const struct FScriptDelegate& Delegate);
	void STATIC_PlayPuppetShow(class UObject* WorldContextObject, class UPuppetShow* PuppetShow, bool bAllowSkipping, const struct FLatentActionInfo& LatentInfo);
	void STATIC_PlayConversationModeMultiple(class UObject* WorldContextObject, class AGlimpseAICharacter* Target, class AGlimpsePlayerCharacter* Player, TArray<class AGlimpseAICharacter*> OtherCharacters, class UGlimpseConversationAsset* Conversation, const struct FConversationModeSettings& ConversationModeSettings, const struct FLatentActionInfo& LatentInfo, int StartingIndex, bool bSuspicionInterruptConversation, bool bConvModeWithSkip);
	void STATIC_PlayConversationMode(class UObject* WorldContextObject, class AGlimpseAICharacter* Target, class AGlimpsePlayerCharacter* Player, class UGlimpseConversationAsset* Conversation, const struct FConversationModeSettings& ConversationModeSettings, const struct FLatentActionInfo& LatentInfo, int StartingIndex, bool bSuspicionInterruptConversation, bool bConvModeWithSkip);
	void STATIC_PlayConversationAsset(class UObject* WorldContextObject, class UGlimpseConversationAsset* Conversation, TArray<class AGlimpseCharacter*> Characters, const struct FLatentActionInfo& LatentInfo, int StartingIndex, bool bSuspicionInterruptConversation, bool bConvModeWithSkip);
	void STATIC_PlayActorConversationModeMultiple(class UObject* WorldContextObject, class AActor* Target, class AGlimpsePlayerCharacter* Player, TArray<class AActor*> OtherActors, class UGlimpseConversationAsset* Conversation, const struct FConversationModeSettings& ConversationModeSettings, const struct FLatentActionInfo& LatentInfo, int StartingIndex, bool bSuspicionInterruptConversation, bool bConvModeWithSkip);
	void STATIC_NewPuppetShow(class UObject* WorldContextObject);
	class UPuppetShow* STATIC_FinalizePuppetShow(class UObject* WorldContextObject);
};


// Class GlimpseGame.GlimpseQuestSet
// 0x0018 (0x0040 - 0x0028)
class UGlimpseQuestSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseQuestSet");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRailroadActor
// 0x0030 (0x0460 - 0x0430)
class AGlimpseRailroadActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRailroadActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRespawnManager
// 0x00D0 (0x00F8 - 0x0028)
class UGlimpseRespawnManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRespawnManager");
		return ptr;
	}


	void STATIC_UnlockShelterRespawnComponent(const struct FName& ShelterName, class UGlimpseRespawnPointComponent* Component);
	void STATIC_UnlockShelterRespawnActor(const struct FName& ShelterName, class AActor* Actor);
	void STATIC_UnlockRespawnComponent(class UGlimpseRespawnPointComponent* Actor, bool bMakeActive);
	void STATIC_UnlockRespawn(class AActor* Actor, bool bMakeActive);
	void STATIC_SetShelterAsRespawnOverride(class UObject* WorldContextObject, const struct FName& ShelterName);
	void STATIC_SetRespawnOverride(class AActor* RespawnPoint, bool bUnlock);
	void STATIC_LockRespawnComponent(class UGlimpseRespawnPointComponent* Actor);
	void STATIC_LockRespawn(class AActor* Actor);
	bool STATIC_IsShelterRespawnUnlocked(class UObject* WorldContextObject, const struct FName& ShelterName);
	bool STATIC_IsRespawnValid(class AActor* Actor);
	bool STATIC_IsRespawnUnlocked(class AActor* Actor);
	bool STATIC_IsRespawnComponentValid(class UGlimpseRespawnPointComponent* Actor);
	bool STATIC_IsRespawnComponentUnlocked(class UGlimpseRespawnPointComponent* Actor);
	void STATIC_ClearRespawnOverride(class AActor* RespawnPoint, bool Block);
	void STATIC_ClearAllRespawnOverride(class UObject* WorldContextObject);
};


// Class GlimpseGame.GlimpseRespawnPointComponent
// 0x0020 (0x0380 - 0x0360)
class UGlimpseRespawnPointComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRespawnPointComponent");
		return ptr;
	}


	void EnableRespawnComponent();
	void DisableRespawnComponent();
};


// Class GlimpseGame.GlimpseRichTextBlock
// 0x0018 (0x0390 - 0x0378)
class UGlimpseRichTextBlock : public URichTextBlock
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0378(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRichTextBlock");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldInstance
// 0x0300 (0x0328 - 0x0028)
class UGlimpseWorldInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0028(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldInstance");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldInstanceV2
// 0x0000 (0x0328 - 0x0328)
class UGlimpseWorldInstanceV2 : public UGlimpseWorldInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldInstanceV2");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadManager
// 0x0150 (0x0178 - 0x0028)
class UGlimpseRoadManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0028(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadPlannerCircleComponent
// 0x0020 (0x0750 - 0x0730)
class UGlimpseRoadPlannerCircleComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadPlannerCircleComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseRoadPlannerNodeComponent
// 0x0020 (0x0750 - 0x0730)
class UGlimpseRoadPlannerNodeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRoadPlannerNodeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseProfileFlagsSaveGameBase
// 0x0010 (0x0188 - 0x0178)
class UGlimpseProfileFlagsSaveGameBase : public UGlimpseSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseProfileFlagsSaveGameBase");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePlaythroughProfile
// 0x00C8 (0x0250 - 0x0188)
class UGlimpsePlaythroughProfile : public UGlimpseProfileFlagsSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0188(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlaythroughProfile");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseUserProfile
// 0x00B0 (0x0238 - 0x0188)
class UGlimpseUserProfile : public UGlimpseProfileFlagsSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0188(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseUserProfile");
		return ptr;
	}

};


// Class GlimpseGame.SavedInputMappings
// 0x0020 (0x0048 - 0x0028)
class USavedInputMappings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SavedInputMappings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSavedUserSettings
// 0x00A0 (0x0218 - 0x0178)
class UGlimpseSavedUserSettings : public UGlimpseSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0178(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSavedUserSettings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameWorldGen
// 0x0038 (0x01B0 - 0x0178)
class UGlimpseSaveGameWorldGen : public UGlimpseSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0178(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameWorldGen");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameWorldDetail
// 0x0010 (0x0188 - 0x0178)
class UGlimpseSaveGameWorldDetail : public UGlimpseSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameWorldDetail");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSaveGameWorldState
// 0x0538 (0x06B0 - 0x0178)
class UGlimpseSaveGameWorldState : public UGlimpseSaveGameBase
{
public:
	unsigned char                                      UnknownData00[0x538];                                     // 0x0178(0x0538) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSaveGameWorldState");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSecurityCircuit
// 0x0010 (0x0440 - 0x0430)
class AGlimpseSecurityCircuit : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSecurityCircuit");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSemanticsComponent
// 0x0068 (0x0158 - 0x00F0)
class UGlimpseSemanticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSemanticsComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSemanticsActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseSemanticsActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSemanticsActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseShapeComponent
// 0x0030 (0x0760 - 0x0730)
class UGlimpseShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0730(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseShapeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseBiomeComponent
// 0x0000 (0x0760 - 0x0760)
class UGlimpseBiomeComponent : public UGlimpseShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBiomeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseExcludeComponent
// 0x0010 (0x0770 - 0x0760)
class UGlimpseExcludeComponent : public UGlimpseShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseExcludeComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseFootprintComponent
// 0x0000 (0x0760 - 0x0760)
class UGlimpseFootprintComponent : public UGlimpseShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseFootprintComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMapZoneComponent
// 0x0010 (0x0770 - 0x0760)
class UGlimpseMapZoneComponent : public UGlimpseShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapZoneComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSimplePatternComponent
// 0x0000 (0x0760 - 0x0760)
class UGlimpseSimplePatternComponent : public UGlimpseShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSimplePatternComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSimpleFoliageSeedComponent
// 0x0010 (0x0770 - 0x0760)
class UGlimpseSimpleFoliageSeedComponent : public UGlimpseShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSimpleFoliageSeedComponent");
		return ptr;
	}

};


// Class GlimpseGame.MenuEntry
// 0x0BB8 (0x0CD0 - 0x0118)
class UMenuEntry : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xBB8];                                     // 0x0118(0x0BB8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MenuEntry");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseShellMenu
// 0x05E0 (0x0B60 - 0x0580)
class UGlimpseShellMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0580(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseShellMenu");
		return ptr;
	}


	bool ShouldDisplayHelpText();
	void SetSelectGameMode(TEnumAsByte<ESelectGameMode> InSelectGameMode);
	void SetPaperBackgroundStyle(TEnumAsByte<EPaperBackgroundState> BackgroundState);
	void SetOverrideMenuEntry(class UMenuEntry* MenuEntry);
	void SetNextActiveNewGameOption(int Direction);
	void SetActivePanel(TEnumAsByte<EShellMenuPanel> InActivePanel);
	void SetActiveNewGameOption(int OptionIndex);
	void RefocusOnMenu();
	void OnWelcomeScreenStateChanged(bool Shown);
	void OnStartSandBoxNewGame();
	void OnStartNewGame();
	void OnSetActivePanel(TEnumAsByte<EShellMenuPanel> InActivePanel);
	void OnSaveSlotPanelStateChanged(bool Shown);
	void OnPlaythroughButtonsChanged();
	void OnOptionsPanelStateChanged(bool Shown);
	void OnNewSaveslotHighlighted();
	void OnNewMenuEntryFocused(class UMenuEntry* MenuEntry);
	void OnChangeMenu(class UWidget* MenuWidget);
	bool IsSandboxModeGame();
	bool IsFirstTimePlayer();
	bool IsDLCModeGame();
	bool HasSaveGames();
	TEnumAsByte<ESelectGameMode> GetSelectGameMode();
	TEnumAsByte<ESlateVisibility> GetSaveSlotPanelVisibility();
	TEnumAsByte<ESaveSlotInteractionState> GetSaveSlotInteractionState();
	TEnumAsByte<ESlateVisibility> GetPCOnlySettingsVisibility();
	TEnumAsByte<ESlateVisibility> GetOptionsPanelVisibility();
	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	int GetFocusUserIndex();
	struct FText GetEntryDescriptionText();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.GlimpseShellMenuPresenter
// 0x0138 (0x0160 - 0x0028)
class UGlimpseShellMenuPresenter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseShellMenuPresenter");
		return ptr;
	}


	void SetNewGameStartingType(TEnumAsByte<ENewGameMode> NewType);
	void RestoreCurrentMenuDefaults();
	void ResetShellMenu();
	void RefreshCharacterSelectWidget(class UNewGameOptionEnum* CharacterSelectWidget);
	void OnSupportAndFeedback();
	void OnSaveGame();
	void OnSaveAndReturnToMainMenu();
	void OnSaveAndQuit();
	void OnRevertDeferredConfigs();
	void OnResetViewedInGameTips();
	void OnQuit();
	void OnNewStoryGameStart();
	void OnNewSandboxGameStart();
	void OnNewGameStart(TEnumAsByte<ENewGameMode> NewConfiguration);
	void OnMenuBack();
	bool OnGetCheatShelterIsEnabled();
	void OnContinueGame();
	void OnConfirmNewGameDemo();
	void OnCheatShelter();
	void OnCheatRevealMap();
	void OnCheatResetSkills();
	void OnCheatMaxCarryWeight();
	void OnCheatHeal();
	void OnCheatGiveSkillPoints();
	void OnCheatCompleteObjective();
	void OnChangeUser();
	void OnApplyDeferredConfigs();
	bool IsInRestrictedWidthResolution();
	void HideShellMenu();
	TEnumAsByte<ESlateVisibility> GetVRVisibility();
	struct FText GetVersionText();
	int GetTimeSinceLastWorldSave();
	TEnumAsByte<ESlateVisibility> GetTheatreVisibility();
	TEnumAsByte<ESlateVisibility> GetTelemetryOptionVisibility();
	struct FText GetSupportAndFeedbackEntryDescriptionText();
	bool GetShadowCustomQualityEnabled();
	TEnumAsByte<ESlateVisibility> GetSelectGameVisibility();
	TEnumAsByte<ESlateVisibility> GetSelectEntryVisibility();
	TEnumAsByte<ESlateVisibility> GetSaveTimeVisibility();
	TEnumAsByte<ESlateVisibility> GetSaveQuitEntryVisibility();
	struct FText GetSaveQuitEntryText();
	struct FText GetSaveQuitEntryDescriptionText();
	struct FText GetSaveMainMenuEntryText();
	struct FText GetSaveMainMenuEntryDescriptionText();
	TEnumAsByte<ESlateVisibility> GetSaveGameVisibility();
	TEnumAsByte<ESlateVisibility> GetSaveEntryVisibility();
	bool GetSaveEntryEnabled();
	TEnumAsByte<ESlateVisibility> GetRestoreDefaultsVisibility();
	bool GetResolutionEntryEnabled();
	TEnumAsByte<ESlateVisibility> GetQuitEntryVisibility();
	struct FText GetPlayerNicknameText();
	TEnumAsByte<ESlateVisibility> GetPAXTimeLimitVisibility();
	TEnumAsByte<ESlateVisibility> GetNewVersionVisibility();
	struct FText GetNewVersionText();
	TEnumAsByte<ESlateVisibility> GetNewsVisibility();
	TEnumAsByte<ESlateVisibility> GetNewGameVisibility();
	TEnumAsByte<ENewGameMode> GetNewGameStartingType();
	struct FText GetNewGameEntryDescriptionText();
	TEnumAsByte<ESlateVisibility> GetNewGameDemoVisibility();
	TEnumAsByte<ESlateVisibility> GetMainMenuVisibility();
	bool GetLoadGamesEnabled();
	TEnumAsByte<ESlateVisibility> GetInGameVisibility();
	TEnumAsByte<ESlateVisibility> GetGammaGuideVisibility();
	struct FText GetEntryHelpText();
	TEnumAsByte<ESlateVisibility> GetDesktopVisibility();
	TEnumAsByte<ESlateVisibility> GetDeferredEntriesVisibility();
	TEnumAsByte<ESlateVisibility> GetCustomQualityVisibility();
	bool GetCustomQualityEnabled();
	struct FText GetControllerOptionsEntryText();
	struct FText GetControllerOptionsEntryDescription();
	TEnumAsByte<ESlateVisibility> GetContinueEntryVisibility();
	TEnumAsByte<ESlateVisibility> GetClearSpaceGuideVisibility();
	TEnumAsByte<ESlateVisibility> GetCheatsVisibility();
	TEnumAsByte<ESlateVisibility> GetCharacterSelectVisibility();
	TEnumAsByte<ESlateVisibility> GetChangeUserVisibility();
	TEnumAsByte<ESlateVisibility> GetBackEntryVisibility();
};


// Class GlimpseGame.GlimpseShoreModel
// 0x0028 (0x0050 - 0x0028)
class UGlimpseShoreModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseShoreModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSkeletalMeshActor
// 0x0010 (0x04C0 - 0x04B0)
class AGlimpseSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSkeletalMeshActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSpawnModelProxy
// 0x0010 (0x0440 - 0x0430)
class AGlimpseSpawnModelProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSpawnModelProxy");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStaticLootList
// 0x0010 (0x0038 - 0x0028)
class UGlimpseStaticLootList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStaticLootList");
		return ptr;
	}

};


// Class GlimpseGame.DifficultyBaseBase
// 0x0008 (0x0120 - 0x0118)
class UDifficultyBaseBase : public UGlimpseStatusEffectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DifficultyBaseBase");
		return ptr;
	}

};


// Class GlimpseGame.AutoFoliageInvisibilityBase
// 0x0000 (0x0288 - 0x0288)
class UAutoFoliageInvisibilityBase : public UGlimpseStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.AutoFoliageInvisibilityBase");
		return ptr;
	}

};


// Class GlimpseGame.DyingBase
// 0x0038 (0x02C0 - 0x0288)
class UDyingBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0288(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DyingBase");
		return ptr;
	}


	bool IsDyingFinished();
	float GetDyingIntensity();
};


// Class GlimpseGame.GlimpseRecurringStatusEffect
// 0x0048 (0x02D0 - 0x0288)
class UGlimpseRecurringStatusEffect : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0288(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseRecurringStatusEffect");
		return ptr;
	}


	void OnRecurringTaskDue();
};


// Class GlimpseGame.GlimpseStatusEffectStacking
// 0x0048 (0x02D0 - 0x0288)
class UGlimpseStatusEffectStacking : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0288(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusEffectStacking");
		return ptr;
	}


	void SetCurrentStacks(int NumStacks);
	void Increase(int Increment);
	void Decrease(int Decrement);
};


// Class GlimpseGame.GlimpseStatusEffectTiered
// 0x0028 (0x02B0 - 0x0288)
class UGlimpseStatusEffectTiered : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0288(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusEffectTiered");
		return ptr;
	}


	void SetActiveTier(int InActiveTier);
	void OnTierChanged(int LastTier, int NewTier);
	void IncreaseActiveTier(int Increment);
	int GetActiveTier();
	void DecreaseActiveTier(int Decrement);
	void AddTieredValueModifier(int Tier, const struct FGameplayTag& ValueType, TEnumAsByte<EValueModifierApplication> Application, float Modifier);
	int ActiveTierOverride();
};


// Class GlimpseGame.GlimpseStatusEffectTieredValue
// 0x0060 (0x0310 - 0x02B0)
class UGlimpseStatusEffectTieredValue : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusEffectTieredValue");
		return ptr;
	}


	float GetTieredValue();
};


// Class GlimpseGame.Encumbered
// 0x0030 (0x02E0 - 0x02B0)
class UEncumbered : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.Encumbered");
		return ptr;
	}


	void OnStatusEffectApplied(class UGlimpseStatusEffectBase* Effect);
};


// Class GlimpseGame.FoodPoisoningBase
// 0x0058 (0x0308 - 0x02B0)
class UFoodPoisoningBase : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FoodPoisoningBase");
		return ptr;
	}


	void OnVomiting();
	void OnDryHeaving();
	void OnDizziness();
	void OnBlackout();
};


// Class GlimpseGame.DiabetesBase
// 0x0040 (0x0350 - 0x0310)
class UDiabetesBase : public UGlimpseStatusEffectTieredValue
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0310(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DiabetesBase");
		return ptr;
	}


	void OnInsultGreet();
};


// Class GlimpseGame.JoyBase
// 0x0060 (0x0370 - 0x0310)
class UJoyBase : public UGlimpseStatusEffectTieredValue
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0310(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.JoyBase");
		return ptr;
	}

};


// Class GlimpseGame.NeedStatusBase
// 0x0010 (0x0320 - 0x0310)
class UNeedStatusBase : public UGlimpseStatusEffectTieredValue
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NeedStatusBase");
		return ptr;
	}

};


// Class GlimpseGame.ContinuousBarksBase
// 0x0030 (0x0350 - 0x0320)
class UContinuousBarksBase : public UNeedStatusBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ContinuousBarksBase");
		return ptr;
	}

};


// Class GlimpseGame.PAXTimerBase
// 0x0000 (0x0310 - 0x0310)
class UPAXTimerBase : public UGlimpseStatusEffectTieredValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PAXTimerBase");
		return ptr;
	}

};


// Class GlimpseGame.InCombatBase
// 0x0068 (0x02F0 - 0x0288)
class UInCombatBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0288(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InCombatBase");
		return ptr;
	}

};


// Class GlimpseGame.JoyCrashBase
// 0x0030 (0x02B8 - 0x0288)
class UJoyCrashBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0288(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.JoyCrashBase");
		return ptr;
	}


	void OnVomit(bool* bSucceeded);
};


// Class GlimpseGame.JoyOverdoseBase
// 0x0010 (0x0298 - 0x0288)
class UJoyOverdoseBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.JoyOverdoseBase");
		return ptr;
	}

};


// Class GlimpseGame.JoyWithdrawalBase
// 0x0020 (0x02A8 - 0x0288)
class UJoyWithdrawalBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0288(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.JoyWithdrawalBase");
		return ptr;
	}

};


// Class GlimpseGame.NakedSuitEffectBase
// 0x0000 (0x0288 - 0x0288)
class UNakedSuitEffectBase : public UGlimpseStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NakedSuitEffectBase");
		return ptr;
	}

};


// Class GlimpseGame.SuspicionBase
// 0x00A0 (0x0328 - 0x0288)
class USuspicionBase : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0288(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SuspicionBase");
		return ptr;
	}

};


// Class GlimpseGame.WindedBase
// 0x0008 (0x0120 - 0x0118)
class UWindedBase : public UGlimpseStatusEffectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.WindedBase");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStealthFootprintActor
// 0x0090 (0x04C0 - 0x0430)
class AGlimpseStealthFootprintActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0430(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStealthFootprintActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseStraightProjectile
// 0x0020 (0x0450 - 0x0430)
class AGlimpseStraightProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStraightProjectile");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& HitResult);
};


// Class GlimpseGame.GlimpseStreamingComponent
// 0x0020 (0x0780 - 0x0760)
class UGlimpseStreamingComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0760(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStreamingComponent");
		return ptr;
	}


	void ZoneTransition(const struct FName& EnteringZone, const struct FName& LeavingZone);
	void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class GlimpseGame.GlimpseStreamingMetrics
// 0x00A0 (0x00C8 - 0x0028)
class UGlimpseStreamingMetrics : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStreamingMetrics");
		return ptr;
	}

};


// Class GlimpseGame.Presenter
// 0x0000 (0x0028 - 0x0028)
class UPresenter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.Presenter");
		return ptr;
	}

};


// Class GlimpseGame.SubtitlePresenter
// 0x0198 (0x01C0 - 0x0028)
class USubtitlePresenter : public UPresenter
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SubtitlePresenter");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSubtitleScriptList
// 0x0060 (0x0088 - 0x0028)
class UGlimpseSubtitleScriptList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSubtitleScriptList");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSubtitleData
// 0x0010 (0x0038 - 0x0028)
class UGlimpseSubtitleData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSubtitleData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSuspicionAlarm
// 0x0008 (0x01C8 - 0x01C0)
class UGlimpseSuspicionAlarm : public UGlimpseSuspicionAttractor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSuspicionAlarm");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UGlimpseSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSystemLibrary");
		return ptr;
	}


	void STATIC_StartBindQuest(class UQuest* Quest, const struct FString& BindContext, class UObject* Instigator);
	class UQuest* STATIC_GetFirstQuestInstanceByName(class UObject* WorldContextObject, const struct FName& Quest);
	class UQuest* STATIC_GetFirstQuestInstance(class UObject* WorldContextObject, class UClass* Quest);
	void STATIC_FinishBindQuest(class UQuest* Quest);
	void STATIC_BranchOnDebug(TEnumAsByte<EBranchOnDebug>* Result);
	void STATIC_BindQuestNotify(class UQuest* Quest, const struct FString& Variable);
};


// Class GlimpseGame.GlimpseTagActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseTagActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTagActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseAreaActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseAreaActor : public AGlimpseTagActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAreaActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseBoxComponent
// 0x0010 (0x07F0 - 0x07E0)
class UGlimpseBoxComponent : public UGlimpseTagComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBoxComponent");
		return ptr;
	}


	void SetAreaExtent(const struct FVector& InAreaExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledAreaExtent();
	struct FVector GetScaledAreaExtent();
};


// Class GlimpseGame.GlimpseBoxActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseBoxActor : public AGlimpseTagActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseBoxActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePointComponent
// 0x0000 (0x07E0 - 0x07E0)
class UGlimpsePointComponent : public UGlimpseTagComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePointComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDecoratorTagComponent
// 0x0000 (0x07E0 - 0x07E0)
class UGlimpseDecoratorTagComponent : public UGlimpsePointComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDecoratorTagComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseDecoratorTagActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseDecoratorTagActor : public AGlimpseTagActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDecoratorTagActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpsePointActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpsePointActor : public AGlimpseTagActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePointActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseCircleComponent
// 0x0000 (0x07E0 - 0x07E0)
class UGlimpseCircleComponent : public UGlimpseTagComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCircleComponent");
		return ptr;
	}


	void SetRadius(float InRadius);
	float GetUnscaledRadius();
	float GetScaledRadius();
};


// Class GlimpseGame.GlimpseTerrainModifierComponent
// 0x0020 (0x0750 - 0x0730)
class UGlimpseTerrainModifierComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTerrainModifierComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTestManager
// 0x0000 (0x0028 - 0x0028)
class UGlimpseTestManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTestManager");
		return ptr;
	}


	void ZoneTour(const struct FName& ZoneName);
	void WorldTour();
	void VisitLockables();
	void VisitFeatures(int Cycles);
	void VisitBadRoads();
	void StressZoneHops(int NumCycles);
	void StressFeature(const struct FName& FeatureName, int NumSteps);
	void SnapshotPackages(const struct FString& SnapshotName);
	void SetSDRUIScale(float Scale);
	void SetSDRUISaturation(float Saturation);
	void SetSDRUIBrightness(float Brightness);
	void SetSDRScale(float Scale);
	void SetSDRSaturation(float Saturation);
	void SetSDRBrightness(float Brightness);
	void SetHDRUIScale(float Scale);
	void SetHDRUISaturation(float Saturation);
	void SetHDRUIBrightness(float Brightness);
	void SetHDRScale(float Scale);
	void SetHDRSaturation(float Saturation);
	void SetHDRBrightness(float Brightness);
	void ResetPackageLeaks();
	void PlayMovie(const struct FString& MoviePath);
	void NowhereSnapshot();
	void LoadQuestDebug();
	void LoadMap(const struct FString& MapRef);
	void LoadDefaultSettings();
	void LeakTestCycle(int NumCycles);
	void GoToNowhere();
	void EndlessZoneTour(const struct FName& ZoneName);
	void EndlessTour();
	void DumpPackages(const struct FString& ReportName);
	void DumpPackageReferrents(const struct FString& PackageName);
	void DumpPackageLeaks();
	void DumpPackageChildren(const struct FString& PackageName);
	void DumpObjectLeaks();
	void DumpArtAssets(const struct FString& ReportName);
	void CycleRoad(const struct FName& ZoneName, int NumCycles, float EndPointDelay);
	void CycleBadRoads(int NumCycles);
	void ClearNPCCache();
	void CancelTest();
	void AutomateSoakWorldGen();
	void AutomateSoakMemory();
	void AutomateSoakLoadSave();
	void AutomateSmokeTest();
};


// Class GlimpseGame.GlimpseTheatreCollectibleData
// 0x0038 (0x0060 - 0x0028)
class UGlimpseTheatreCollectibleData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTheatreCollectibleData");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTheatreTVComponent
// 0x0030 (0x0390 - 0x0360)
class UGlimpseTheatreTVComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTheatreTVComponent");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseTrajectoryComponent
// 0x0070 (0x07A0 - 0x0730)
class UGlimpseTrajectoryComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0730(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTrajectoryComponent");
		return ptr;
	}

};


// Class GlimpseGame.ActionDurationPresenter
// 0x0070 (0x0098 - 0x0028)
class UActionDurationPresenter : public UPresenter
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ActionDurationPresenter");
		return ptr;
	}


	bool ShowWarningForEffectRange(const struct FName& InEffectKey, int MinAcceptableTier, int MaxAcceptableTier);
	bool ShowWarningForEffect(const struct FName& InEffectKey, int MinWarningTier);
	bool ShowBloodSugar();
	bool ShowBabyNeed();
	void SetActionRestricted(bool Val);
	void SetActionDurationHours(float InActionDurationHours);
	float OnGetThirstOutcome();
	float OnGetSleepOutcome();
	float OnGetRequiredActionHours();
	float OnGetLowBloodSugarOutcome();
	float OnGetLowBloodSugarCurrent();
	float OnGetJoyOutcome();
	float OnGetHungerOutcome();
	float OnGetHighBloodSugarOutcome();
	float OnGetHighBloodSugarCurrent();
	float OnGetHealthOutcome();
	struct FText OnGetDesiredActionAmountText();
	float OnGetCurrentThirst();
	float OnGetCurrentSleep();
	float OnGetCurrentJoy();
	float OnGetCurrentHunger();
	float OnGetCurrentHealth();
	float OnGetCurrentBaby();
	float OnGetBabyOutcome();
	bool IsBloodSugarOutcomeCritical();
	void GetEffectInfo(const struct FName& InEffectKey, bool* bOutActive, bool* bWillKillPlayer, int* Tier);
	float GetDesiredDurationHours();
	void Detach();
	bool CanDoActionWhileEncumbered();
	bool CanDoActionWhileBleeding();
	void Attach(class AGlimpsePlayerCharacter* InCharacter);
	bool AllowUserChangeTime();
	bool AllowActionIfZeroDuration();
};


// Class GlimpseGame.ActionDurationWidget
// 0x0120 (0x06A0 - 0x0580)
class UActionDurationWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0580(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ActionDurationWidget");
		return ptr;
	}


	void SetDesiredDurationHours(float Hours);
	void OnTryConfirmButNotAllowed();
	void OnDurationChanged();
	void OnActionSetup(const struct FText& InTitleText, const struct FText& InAcceptButtonText);
	TEnumAsByte<ESlateVisibility> GetNeedVisibility(TEnumAsByte<ESurvivalNeed> SurvivalNeed);
	float GetDesiredDurationHours();
	float GetCurrentTimeHours();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibilty();
	void Confirm();
	bool CanDoAction();
	void Cancel();
};


// Class GlimpseGame.ClockWidget
// 0x0050 (0x05D0 - 0x0580)
class UClockWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0580(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ClockWidget");
		return ptr;
	}


	void SetHighlightTint(const struct FLinearColor& InTintColor);
	void SetHighlightDuration(float InStartHours, float InStopHours);
	float HourToAngle(float hour);
};


// Class GlimpseGame.CraftingButton
// 0x0110 (0x0690 - 0x0580)
class UCraftingButton : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0580(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CraftingButton");
		return ptr;
	}


	void UpdateCanCraft(bool bInCanCraft);
	void OnCraftingError();
	void OnCraftButtonReleased();
	void OnCraftButtonPressed();
};


// Class GlimpseGame.CraftingIngredientLayout
// 0x0080 (0x0600 - 0x0580)
class UCraftingIngredientLayout : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0580(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CraftingIngredientLayout");
		return ptr;
	}


	void SetItems(TArray<struct FIngredientInfo> IngredientList);
	void SetCanCraft(bool bCanCraft);
};


// Class GlimpseGame.CraftingTableSeparator
// 0x0010 (0x0590 - 0x0580)
class UCraftingTableSeparator : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CraftingTableSeparator");
		return ptr;
	}


	void OnSetup(TEnumAsByte<ECraftingStation> InCraftingStation);
	void OnCraftingTableAvailable(bool bAvailablehil);
};


// Class GlimpseGame.CutsceneWidget
// 0x0010 (0x0590 - 0x0580)
class UCutsceneWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.CutsceneWidget");
		return ptr;
	}


	void SetSkipProgress(float progress);
	TEnumAsByte<ESlateVisibility> OnGetSkipVisibility();
	struct FText OnGetSkipText();
	class AGlimpsePlayerController* OnGetPlayerController();
	TEnumAsByte<ESlateVisibility> OnGetBarVisibility();
};


// Class GlimpseGame.DiscoveryText
// 0x00D0 (0x0650 - 0x0580)
class UDiscoveryText : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0580(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DiscoveryText");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetTrackTextVisibility();
	struct FText GetTitleText();
	TEnumAsByte<ESlateVisibility> GetIconVisibility();
	struct FSlateBrush GetIcon();
	TEnumAsByte<ESlateVisibility> GetBodyTextVisibility();
	struct FText GetBodyText();
};


// Class GlimpseGame.FastTravelBox
// 0x0040 (0x05C0 - 0x0580)
class UFastTravelBox : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0580(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FastTravelBox");
		return ptr;
	}


	void UpdateMapName(const struct FText& InMapName);
	void OnLocationSelectActive(bool bInActive);
};


// Class GlimpseGame.GlimpsePlayerMenu
// 0x03C0 (0x0940 - 0x0580)
class UGlimpsePlayerMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x0580(0x03C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerMenu");
		return ptr;
	}


	void SetSubMenu(TEnumAsByte<EPlayerMenu> MenuType);
	void OnSubMenuChanged(TEnumAsByte<EPlayerMenu> MenuType);
	TEnumAsByte<ESlateVisibility> GetUnreadNotesIndicatorVisibility();
	TEnumAsByte<EPlayerMenu> GetSubMenu();
	TEnumAsByte<ESlateVisibility> GetSkillPointIndicatorVisibility();
	class AGlimpsePlayerController* GetPlayerController();
	int GetNumUnreadNotes();
	int GetNumSkillPoints();
	TEnumAsByte<ESlateVisibility> GetNavigationBindingVisibility();
	class UGlimpseGameInstance* GetGameInstance();
	TEnumAsByte<ESlateVisibility> GetClosePlayerMenuVisibility();
};


// Class GlimpseGame.GlimpsePlayerSubMenu
// 0x0170 (0x06F0 - 0x0580)
class UGlimpsePlayerSubMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0580(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpsePlayerSubMenu");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.GlimpseMapMenu
// 0x0380 (0x0A70 - 0x06F0)
class UGlimpseMapMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x06F0(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMapMenu");
		return ptr;
	}


	void SetLeftPanelHovered(bool bHovered);
	void OnZoomSliderValueChanged(float NewValue);
	void OnMenuShown();
	void OnMapIconClicked(const struct FGlimpseMapPOI& POIData);
	void OnMapDisplayType(TEnumAsByte<EMapDisplayMode> InDisplayMode);
	void OnFastTravelClickDenied(TEnumAsByte<EFastTravelDeniedReason> Reason);
	float GetZoomPercent();
};


// Class GlimpseGame.FastTravelEntry
// 0x0030 (0x05B0 - 0x0580)
class UFastTravelEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0580(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FastTravelEntry");
		return ptr;
	}


	void UpdateSelected(bool bInSelected);
	void UpdateHighlighted(bool bInHighlighted);
	void OnSetupEntry(const struct FName& InDisplayName, bool bInFound, bool bInActive);
	void OnEntryHovered();
	void OnEntryClicked();
};


// Class GlimpseGame.GlimpseAchievementsListEntry
// 0x0060 (0x05E0 - 0x0580)
class UGlimpseAchievementsListEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0580(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAchievementsListEntry");
		return ptr;
	}


	void UpdateSelected(bool bInSelected);
	void SetupEntry(const struct FText& AchievementName, const struct FText& AchievementDescription, class UTexture2D* AchievementIcon);
	void SetSelectedVisuals(bool bSelected);
	void OnEntryClicked();
};


// Class GlimpseGame.GlimpseAchievementsMenu
// 0x0050 (0x05D0 - 0x0580)
class UGlimpseAchievementsMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0580(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseAchievementsMenu");
		return ptr;
	}


	void RefreshAchievementsList();
	void OnItemSelected(int InAchievementIndex);
};


// Class GlimpseGame.GlimpseCredits
// 0x0080 (0x0600 - 0x0580)
class UGlimpseCredits : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0580(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCredits");
		return ptr;
	}


	void Show();
	void Hide();
	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.MenuPresenter
// 0x0010 (0x0038 - 0x0028)
class UMenuPresenter : public UPresenter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MenuPresenter");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
	class AGlimpsePlayerController* GetController();
};


// Class GlimpseGame.DeathMenuPresenter
// 0x0068 (0x00A0 - 0x0038)
class UDeathMenuPresenter : public UMenuPresenter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.DeathMenuPresenter");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetContinuePromptVisibility();
};


// Class GlimpseGame.GlimpseDeathMenu
// 0x01B0 (0x0730 - 0x0580)
class UGlimpseDeathMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0580(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDeathMenu");
		return ptr;
	}


	class AGlimpsePlayerController* OnGetPlayerController();
	void OnDeathMenuShown();
	void OnDeathMenuHidden();
};


// Class GlimpseGame.GlimpseScoreScreen
// 0x0000 (0x0730 - 0x0730)
class UGlimpseScoreScreen : public UGlimpseDeathMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseScoreScreen");
		return ptr;
	}


	void ReturnToMainMenu();
	void RelaunchMode();
	void LoadLastSave();
};


// Class GlimpseGame.GlimpseDLCMenu
// 0x0030 (0x05B0 - 0x0580)
class UGlimpseDLCMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0580(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseDLCMenu");
		return ptr;
	}


	void RefreshMenu();
	void OnDLCConfirmAttempt();
	void OnDLCClicked(TEnumAsByte<EDLCTypeUI> DLCType);
	void OnActionButtonClicked();
	TEnumAsByte<EDLCStateUI> GetDLCStatus(TEnumAsByte<EDLCTypeUI> DLCType);
};


// Class GlimpseGame.GlimpseEffectsDisplay
// 0x00A0 (0x0620 - 0x0580)
class UGlimpseEffectsDisplay : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0580(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseEffectsDisplay");
		return ptr;
	}


	void OnWidgetDisplay(class AGlimpsePickup* Pickup);
};


// Class GlimpseGame.SaveSlotStyleAsset
// 0x0798 (0x07C8 - 0x0030)
class USaveSlotStyleAsset : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x798];                                     // 0x0030(0x0798) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SaveSlotStyleAsset");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseMainMenu
// 0x07F0 (0x0D70 - 0x0580)
class UGlimpseMainMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x7F0];                                     // 0x0580(0x07F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseMainMenu");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetWelcomeThrobberVisibility();
	TEnumAsByte<ESlateVisibility> GetWelcomePromptVisibility();
	TEnumAsByte<ESlateVisibility> GetLogoVisibility();
};


// Class GlimpseGame.GlimpseCraftingMenu
// 0x07B0 (0x0EA0 - 0x06F0)
class UGlimpseCraftingMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0x7B0];                                     // 0x06F0(0x07B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseCraftingMenu");
		return ptr;
	}


	void ShowCraftingTutorial(const struct FName& TutorialKey);
	void SetCategory(TEnumAsByte<EPickupCategory> Category);
	void SetCanCraft(bool bCanCraft);
	void OnSetCanCraft(bool bCanCraft, bool bWarning, const struct FText& CraftError);
	void OnItemChanged(const struct FText& ItemName, int AmountInInventory);
	void OnCraftingSuccess(const struct FName& RecipeKey);
	void OnCraftingError();
	void OnCategoryChanged(TEnumAsByte<EPickupCategory> Category);
	bool IsCraftingTutorialActive();
	bool IsCraftingInProgress();
	bool HideCraftingTutorial(const struct FName& TutorialKey);
	bool HasRecipes(TEnumAsByte<EPickupCategory> Category);
	void AltCraftingButtonReleased();
	void AltCraftingButtonPressed();
};


// Class GlimpseGame.GlimpseInventoryMenu
// 0x0320 (0x0A10 - 0x06F0)
class UGlimpseInventoryMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x06F0(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseInventoryMenu");
		return ptr;
	}


	void TakeAllItems();
	void SwitchSort();
	void SwitchItemsViewed();
	void StartMoveAllCraftingToContainer();
	TEnumAsByte<ESlateVisibility> ShouldShowTakeAllPrompt();
	void SetIsDescriptionShowing(bool Val);
	void SetCategory(TEnumAsByte<ESelectedCategory> Category);
	void RefocusOnItems(float Delay);
	void OnTransactionInputChanged(bool Pressed);
	void OnTransactionButtonReleased();
	void OnTransactionButtonPressed();
	void OnSort();
	void OnShowError(const struct FText& ErrorMsg);
	void OnSetContainerImage();
	void OnSetCharacterImage();
	void OnSelectedItemChanged(bool transactionPossible);
	void OnPlayerWeightChanged(float PreviousAmount, float NewAmount);
	void OnPlayerItemsShown();
	void OnPlayerCurrencyChanged(float PreviousAmount, float NewAmount);
	void OnPickupEquipped(class AGlimpseCharacter* CharacterSource, class AGlimpsePickup* Pickup);
	void OnNoItemsInPlayerInventory();
	void OnNoItemsInContainer();
	void OnNoItemsInBarter();
	void OnMenuShown();
	void OnItemSold(class AGlimpsePickup* Pickup, const struct FSlateBrush& Brush);
	void OnItemDescriptionClicked();
	void OnItemBought(class AGlimpsePickup* Pickup, const struct FSlateBrush& Brush);
	void OnInventoryUpdated();
	void OnHideEmptyMessage();
	bool OnGetCancelBindingVisibility();
	void OnContainerItemsShown();
	void OnCategoryChanged();
	void OnBarterItemsShown();
	void OnBarterCharacterCurrencyChanged(float PreviousAmount, float NewAmount);
	void MoveAllToCurrentContainer(TEnumAsByte<ESelectedCategory> Category);
	bool LookingInStash();
	bool LookingInContainer();
	bool IsTransactionPossible();
	bool IsMoveAllCraftingItemsToConainerEnabled();
	bool IsBuying();
	bool IsBartering();
	bool GetShouldShowWeightWarning();
	class UPanelWidget* GetSelectedWidgetParent();
	class UInventoryItemWidget* GetSelectedWidget();
	int GetSelectedPickupBuySellValue();
	class AGlimpsePickup* GetSelectedPickup();
	struct FText GetSelectedItemFunctionalDescription();
	struct FText GetSelectedItemDescription();
	TEnumAsByte<EPlayerWeightStatus> GetPlayerWeightStatus();
	bool GetIsStealing();
	bool GetIsSortByWeight();
	bool GetIsDescriptionShowing();
	float GetInventoryWeightLimit();
	float GetInventoryWeight();
	float GetInventoryWarningWeight();
	float GetCurrencyTotal();
	struct FText GetContainerOrBarterHeading();
	TEnumAsByte<ESelectedCategory> GetCategory();
	float GetBarterCharacterCurrency();
	void FlipSort();
	void EndMoveAllCraftingToContainer();
	void CloseItemDescription();
	void BeginUseItem(class AGlimpsePickup* PickupUsed);
};


// Class GlimpseGame.GlimpseJournalMenu
// 0x0480 (0x0B70 - 0x06F0)
class UGlimpseJournalMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x06F0(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseJournalMenu");
		return ptr;
	}


	void SetQuestListCategory(TEnumAsByte<EQuestListCategory> InCategory);
	void OnShowTutorial(const struct FName& TutorialKey);
	void OnSetQuestData(const struct FText& InJournalTitle, float QuestProgress, TEnumAsByte<EQuestStatus> QuestStatus, int NumSkillPoints, int NumCurrency, bool bHasLoot);
	void OnSecondaryListEnabled(bool bInEnabled);
	void OnQuestListCategoryChanged(TEnumAsByte<EQuestListCategory> Category);
	void OnPrimaryListEnabled(bool bInEnabled);
	void OnObjectivesChanged();
	void OnLoreListEnabled(bool bInEnabled);
	void OnHideTutorial(const struct FName& TutorialKey);
};


// Class GlimpseGame.GlimpseSkillTreeMenu
// 0x01C0 (0x08B0 - 0x06F0)
class UGlimpseSkillTreeMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x06F0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSkillTreeMenu");
		return ptr;
	}


	void UpdateSkillSpecList(class UGlimpseSkill* SkillToSelect);
	bool TryHideTutorialTip();
	void SetEnableBuyInput(bool bEnable, bool ignoreSounds);
	bool OnUpPressed();
	bool OnSwitchCategoryRight();
	bool OnSwitchCategoryLeft();
	bool OnSubMenuSwitchRight();
	bool OnSubMenuSwitchLeft();
	void OnSkillPointsChanged(int SkillPoints);
	void OnSkillMenuShown();
	void OnSkillMenuHidden();
	void OnSkillChanged(class UGlimpseSkill* Skill, bool bSkillAvailable, bool bSkillBought);
	void OnSkillBought();
	void OnSetEnableBuy(bool bEnable);
	bool OnRightPressed();
	bool OnLeftPressed();
	bool OnInputConfirm();
	bool OnInputCancel();
	bool OnDownPressed();
	bool IsSelectedSkillBought();
	bool IsSelectedSkillAvailable();
	struct FText GetVisibleSkillDescription();
	int GetTutorialStep();
	struct FText GetTransitionSkillDescription();
	int GetSkillCost(class UGlimpseSkill* Skill);
	class UGlimpseSkill* GetSelectedSkill();
	class AGlimpsePlayerController* GetPlayerController();
	bool CanBuySelectedSkill();
	void BuySelectedSkill();
};


// Class GlimpseGame.GlimpseStatusMenu
// 0x00E0 (0x07D0 - 0x06F0)
class UGlimpseStatusMenu : public UGlimpsePlayerSubMenu
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x06F0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseStatusMenu");
		return ptr;
	}


	bool ShouldNeeedBeVisible(TEnumAsByte<ESurvivalNeed> SurvivalNeed);
	void SetCurrentEffectList(TEnumAsByte<EEffectListType> InListType);
	void OnThirstChanged(float InCurrentValue, float InTotalValue);
	void OnSleepChanged(float InCurrentValue, float InTotalValue);
	void OnMoveSpeedChanged(float InCurrentValue, float InMaxValue);
	void OnHungerChanged(float InCurrentValue, float InTotalValue);
	void OnHealthChanged(float InCurrentValue, float InTotalValue);
	void OnEncumberanceChanged(float InCurrentValue, float InTotalValue);
	void OnEffectListChanged(TEnumAsByte<EEffectListType> InListType);
	void OnDrugLevelChanged(float InCurrentValue, float InTotalValue);
	void OnCrashLevelChanged(float CrashLevel);
	void OnArmorChanged(float InCurrentValue);
};


// Class GlimpseGame.GlimpseSandboxMenu
// 0x0130 (0x06B0 - 0x0580)
class UGlimpseSandboxMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0580(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSandboxMenu");
		return ptr;
	}


	void UpdateListOrder(TArray<class UNewGameOption*> NewOrder);
	void SetSandboxRuleset(int I);
	void SandboxStringTextCommitted();
	bool OnSandboxWorldseedChanged(const struct FText& InText, TEnumAsByte<ETextCommit> InCommitType);
	bool OnSandboxStringChanged(const struct FText& InText, TEnumAsByte<ETextCommit> InCommitType);
	void OnSandboxSettingsUpdated();
	void OnSandboxListSwitched(int Direction);
	void MenuActiveOptionChanged();
	struct FText GetAchievementDisabledText();
};


// Class GlimpseGame.TheatreCollectibleListEntry
// 0x0090 (0x0610 - 0x0580)
class UTheatreCollectibleListEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0580(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TheatreCollectibleListEntry");
		return ptr;
	}


	void UpdateSelected(bool bInSelected);
	void SetupEntry(const struct FText& CollectibleName, const struct FText& CollectibleDescription, const struct FText& CollectibleUnlockTime, class UTexture2D* CollectibleIcon);
	void SetSelectedVisuals(bool bSelected);
	void OnEntryClicked();
};


// Class GlimpseGame.GlimpseTheatreMenu
// 0x00E0 (0x0660 - 0x0580)
class UGlimpseTheatreMenu : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0580(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTheatreMenu");
		return ptr;
	}


	void RefreshCollectibleList();
	void PlayCollectible();
	void OnStopPressed();
	void OnPlayPreviousCollectible();
	void OnPlayPressed();
	void OnPlayNextCollectible();
	void OnPausePressed();
	void OnMediaPlayerOpenFailed(const struct FString& FailedUrl);
	void OnMediaPlayerOpened(const struct FString& OpenedUrl);
	void OnMediaPlayerEndReached();
	void OnMediaPlayerClosed();
	void OnItemSelected(int InCollectibleIndex);
	int GetNumberOfCollectibles();
	int GetMaxCollectibles();
};


// Class GlimpseGame.GlimpseTutorialWidget
// 0x00B0 (0x0630 - 0x0580)
class UGlimpseTutorialWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0580(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseTutorialWidget");
		return ptr;
	}


	void Confirm();
};


// Class GlimpseGame.InputBindingDisplay
// 0x0278 (0x0390 - 0x0118)
class UInputBindingDisplay : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x0118(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InputBindingDisplay");
		return ptr;
	}


	void SetPlayerController(class AGlimpsePlayerController* InController);
};


// Class GlimpseGame.HUDNotification
// 0x01A0 (0x0720 - 0x0580)
class UHUDNotification : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0580(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.HUDNotification");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetViewBindingVisibility();
	struct FText GetTitleText();
	TEnumAsByte<ESlateVisibility> GetIconVisibility();
	struct FSlateBrush GetIcon();
	TEnumAsByte<ESlateVisibility> GetCheckmarkVisibility();
	struct FText GetBodyText();
};


// Class GlimpseGame.HUDNotificationData
// 0x0010 (0x0038 - 0x0028)
class UHUDNotificationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.HUDNotificationData");
		return ptr;
	}

};


// Class GlimpseGame.InteractiveListEntry
// 0x00B0 (0x0630 - 0x0580)
class UInteractiveListEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0580(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InteractiveListEntry");
		return ptr;
	}


	void UpdateInteractionState(TEnumAsByte<EInteractionState> State);
	void SetupWidgets();
};


// Class GlimpseGame.RecipeListEntry
// 0x0260 (0x0890 - 0x0630)
class URecipeListEntry : public UInteractiveListEntry
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0630(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.RecipeListEntry");
		return ptr;
	}


	void UpdateUnread(bool bUnread);
	void UpdateItem(class UTexture2D* ItemIcon, const struct FText& ItemName, bool CanCraft);
};


// Class GlimpseGame.InventoryItemDetails
// 0x00B0 (0x0630 - 0x0580)
class UInventoryItemDetails : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0580(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryItemDetails");
		return ptr;
	}


	void SetUseProgress(float progress);
	void RefreshWidget(class AGlimpsePickup* Pickup);
	void OnShow();
};


// Class GlimpseGame.InventoryItemWidget
// 0x00D0 (0x0650 - 0x0580)
class UInventoryItemWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0580(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryItemWidget");
		return ptr;
	}


	void SetUseProgress(float progress, bool CanCancelProgress);
	void RefreshWidget(class AGlimpsePickup* Pickup);
	void ItemTaken();
	void ItemSold();
	void ItemPlaced();
	void ItemDropped();
	void ItemBought();
};


// Class GlimpseGame.ItemEffectEntry
// 0x0000 (0x0580 - 0x0580)
class UItemEffectEntry : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ItemEffectEntry");
		return ptr;
	}


	void UpdateDisplay(TEnumAsByte<EStatusEffectSelection> EffectChange, const struct FSlateBrush& StatusIcon, const struct FText& EffectDesc);
};


// Class GlimpseGame.ItemSpecList
// 0x0070 (0x05F0 - 0x0580)
class UItemSpecList : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0580(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ItemSpecList");
		return ptr;
	}


	bool HasDetailsToDisplay();
};


// Class GlimpseGame.JoyHUDIndicator
// 0x0000 (0x0580 - 0x0580)
class UJoyHUDIndicator : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.JoyHUDIndicator");
		return ptr;
	}


	void OnSetToxicityFill(float progress);
	void OnSetJoyFill(float progress);
	void OnSetIndicatorMode(TEnumAsByte<EHUDJoyIndicatorState> Mode);
};


// Class GlimpseGame.MapLegend
// 0x00D0 (0x0650 - 0x0580)
class UMapLegend : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0580(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MapLegend");
		return ptr;
	}


	void UpdateMapName(const struct FText& InMapName);
	void OnLegendActive(bool bInActive);
	void LegendHoverChanged(bool bHovered);
	void LegendClicked();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.MapLegendEntry
// 0x0160 (0x06E0 - 0x0580)
class UMapLegendEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0580(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MapLegendEntry");
		return ptr;
	}


	void UpdateSelected(bool bInSelected);
	void UpdateEntryEnabled(bool bInEnabled);
	void SetupEntry(const struct FText& EntryText, class UTexture2D* EntryIcon, class UTexture2D* SecondaryEntryIcon, bool EntryEnabled);
	void OnEntryClicked();
	void OnCultureChanged(const struct FText& EntryText);
};


// Class GlimpseGame.NativeUserWidget
// 0x0010 (0x0590 - 0x0580)
class UNativeUserWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NativeUserWidget");
		return ptr;
	}

};


// Class GlimpseGame.Compass
// 0x0010 (0x05A0 - 0x0590)
class UCompass : public UNativeUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.Compass");
		return ptr;
	}

};


// Class GlimpseGame.InventoryItemToolTip
// 0x03A0 (0x0930 - 0x0590)
class UInventoryItemToolTip : public UNativeUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x0590(0x03A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryItemToolTip");
		return ptr;
	}

};


// Class GlimpseGame.NewGameOption
// 0x00B0 (0x0630 - 0x0580)
class UNewGameOption : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0580(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewGameOption");
		return ptr;
	}


	void OnSetActiveOption(bool bActive);
	bool OnSelectInput();
	void OnRightInput();
	void OnLeftInput();
	bool IsActiveOption();
};


// Class GlimpseGame.NewGameOptionBool
// 0x0000 (0x0630 - 0x0630)
class UNewGameOptionBool : public UNewGameOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewGameOptionBool");
		return ptr;
	}


	void SetValue(bool Value);
	void OnValueChanged();
	bool OnSelectInput();
	void OnRightInput();
	void OnLeftInput();
};


// Class GlimpseGame.NewGameOptionButton
// 0x0000 (0x0630 - 0x0630)
class UNewGameOptionButton : public UNewGameOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewGameOptionButton");
		return ptr;
	}


	bool OnSelectInput();
};


// Class GlimpseGame.NewGameOptionEnum
// 0x00A0 (0x06D0 - 0x0630)
class UNewGameOptionEnum : public UNewGameOption
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0630(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewGameOptionEnum");
		return ptr;
	}


	void SetSelectedValue(unsigned char Value);
	void SelectOption(int OptionIndex);
	void SelectNextOption(int SelectDirection);
	bool OnSelectInput();
	void OnRightInput();
	void OnLeftInput();
	void Init();
	unsigned char GetSelectedValue();
};


// Class GlimpseGame.NewGameOptionEnumEntry
// 0x0010 (0x0590 - 0x0580)
class UNewGameOptionEnumEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NewGameOptionEnumEntry");
		return ptr;
	}


	void OnUpdateWidth(float Width);
	void OnUpdateOptionText(const struct FText& OptionText);
};


// Class GlimpseGame.NotificationsArea
// 0x0060 (0x05E0 - 0x0580)
class UNotificationsArea : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0580(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NotificationsArea");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetSecondaryNotificationVisibility();
	class AGlimpsePlayerController* GetPlayerController();
	TEnumAsByte<ESlateVisibility> GetNormalNotificationVisibility();
};


// Class GlimpseGame.NPCIndicator
// 0x0110 (0x0690 - 0x0580)
class UNPCIndicator : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0580(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NPCIndicator");
		return ptr;
	}


	void OnSetSuspicionProgress(float progress);
	void OnSetNPCOffscreen(bool offscreen, float Angle);
	void OnSetNPCHealthAmount(float normalisedHealth, float actualHealth, int InTier);
	void OnSetNPCDistance(float Distance);
	void OnSetIndicatorMode(TEnumAsByte<ENPCIndicatorState> Mode);
	void OnSetBleedingVisibility(bool Show);
	void OnSetAgressionProgress(float progress);
};


// Class GlimpseGame.ObjectiveListEntry
// 0x0000 (0x0580 - 0x0580)
class UObjectiveListEntry : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ObjectiveListEntry");
		return ptr;
	}


	void UpdateObjectiveStatus(TEnumAsByte<EObjectiveStatus> InObjectiveStatus);
	void SetupEntry(const struct FText& InObjectiveText, TEnumAsByte<EObjectiveStatus> InObjectiveStatus);
};


// Class GlimpseGame.QuestCompletionWidget
// 0x0E60 (0x13E0 - 0x0580)
class UQuestCompletionWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE60];                                     // 0x0580(0x0E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestCompletionWidget");
		return ptr;
	}

};


// Class GlimpseGame.QuestListEntry
// 0x01F0 (0x0770 - 0x0580)
class UQuestListEntry : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0580(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestListEntry");
		return ptr;
	}


	void UpdateUnread(bool bInUnread);
	void UpdateTracked(bool bInTracked);
	void UpdateSelected(bool bInSelected);
	void SetupEntry(const struct FText& InEntryText, bool bInSelected, bool bInTracked, bool bInUnread, TEnumAsByte<EQuestStatus> InStatus);
	void OnEntryDoubleClicked();
	void OnEntryClicked();
};


// Class GlimpseGame.QuestListLocationSeparator
// 0x0000 (0x0580 - 0x0580)
class UQuestListLocationSeparator : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestListLocationSeparator");
		return ptr;
	}


	void OnSetup(const struct FText& LocationName);
};


// Class GlimpseGame.QuickLoot
// 0x0E10 (0x1390 - 0x0580)
class UQuickLoot : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE10];                                     // 0x0580(0x0E10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuickLoot");
		return ptr;
	}


	void RefreshWidget(class AGlimpsePickup* Pickup);
};


// Class GlimpseGame.QuickSlotWidget
// 0x08F0 (0x0E70 - 0x0580)
class UQuickSlotWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8F0];                                     // 0x0580(0x08F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuickSlotWidget");
		return ptr;
	}


	void StopMoving();
	void StartMoving();
	void SetQuickSlotUniqueItemAllowed(TEnumAsByte<EPickupQuickslotGroup> QuickslotGroup, class UClass* PickupClass);
	void SetListOrder(TArray<int> NewListOrder);
	void OnSwitchActiveSlot();
	void OnShow();
	void OnRefresh();
	void OnQuickslotUseStart();
	void OnQuickslotCycled(int I);
	void OnHide();
	bool IsScrolling();
	class AGlimpsePickup* GetPickupInSlot(TEnumAsByte<EQuickSlotPosition> Position);
	class AGlimpsePickup* GetPickupForSlot(int slotIndx);
	TEnumAsByte<ESlateVisibility> GetMouseAndKeyboardVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerVisibility();
	int GetActiveSlot();
	bool CanUseActiveSlot();
};


// Class GlimpseGame.MixedUseQuickslotWidget
// 0x0010 (0x0E80 - 0x0E70)
class UMixedUseQuickslotWidget : public UQuickSlotWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0E70(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MixedUseQuickslotWidget");
		return ptr;
	}

};


// Class GlimpseGame.RageMeter
// 0x0040 (0x05C0 - 0x0580)
class URageMeter : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0580(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.RageMeter");
		return ptr;
	}


	void UpdateRageMeters(float RageLevel);
};


// Class GlimpseGame.SaveSlotWidget
// 0x0190 (0x0710 - 0x0580)
class USaveSlotWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0580(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SaveSlotWidget");
		return ptr;
	}


	void SetHighlighted(bool IsHighlighted);
	void RefreshWidget();
	TEnumAsByte<ESlateVisibility> GetMouseKeyboardPromptVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerPromptVisibility();
};


// Class GlimpseGame.SkillButton
// 0x00D0 (0x0650 - 0x0580)
class USkillButton : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0580(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkillButton");
		return ptr;
	}


	void OnSetupSkillDisplay(const struct FSlateBrush& SkillBrush, bool InSkillAvailable, bool InSkillBought);
	void OnSelectionChanged(bool bSelected);
	void OnButtonPressed();
};


// Class GlimpseGame.SkillConnection
// 0x0090 (0x0610 - 0x0580)
class USkillConnection : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0580(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkillConnection");
		return ptr;
	}


	void OnUpdateDisplay(bool ConnectedSkillAvailable, bool ConnectedSkillBought);
};


// Class GlimpseGame.SkillInfoSpecEntry
// 0x0000 (0x0580 - 0x0580)
class USkillInfoSpecEntry : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkillInfoSpecEntry");
		return ptr;
	}


	void DisplayInfo(const struct FText& InfoText);
};


// Class GlimpseGame.SkillTreeCategory
// 0x0130 (0x06B0 - 0x0580)
class USkillTreeCategory : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0580(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SkillTreeCategory");
		return ptr;
	}

};


// Class GlimpseGame.StaminaBarMarkerWidget
// 0x0000 (0x0580 - 0x0580)
class UStaminaBarMarkerWidget : public UGlimpseUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StaminaBarMarkerWidget");
		return ptr;
	}


	void OnDisplay();
};


// Class GlimpseGame.StaminaBarWidget
// 0x0060 (0x05E0 - 0x0580)
class UStaminaBarWidget : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0580(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StaminaBarWidget");
		return ptr;
	}


	void OnDebuffChanged(bool bInDebuffed);
	void OnBuffChanged(bool bInBuffed);
	float GetPenaltyPercent();
	float GetDefferedStaminaPercent();
	float GetCurrentStaminaPercent();
};


// Class GlimpseGame.StatusEffectDetailsBase
// 0x0250 (0x07D0 - 0x0580)
class UStatusEffectDetailsBase : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0580(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatusEffectDetailsBase");
		return ptr;
	}


	void SetSelected(bool bInSelected);
	void OnStatusChanged(TEnumAsByte<EStatusEffectType> InStatusType);
	void OnNameChanged(const struct FText& InEffectName);
	void OnIconChanged(const struct FSlateBrush& InIcon, bool bInHasIcon);
	void OnDescriptionChanged(const struct FText& InEffectDescription);
	void NotifyPressed();
	struct FText GetNameText();
	bool GetIconVisibility();
	struct FSlateBrush GetIcon();
};


// Class GlimpseGame.StatusEffectIconBase
// 0x0310 (0x0890 - 0x0580)
class UStatusEffectIconBase : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x310];                                     // 0x0580(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatusEffectIconBase");
		return ptr;
	}

};


// Class GlimpseGame.ToggleableButton
// 0x02E0 (0x0860 - 0x0580)
class UToggleableButton : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0580(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ToggleableButton");
		return ptr;
	}


	void SetActive(bool bInActive);
	bool IsActive();
};


// Class GlimpseGame.GlimpseVRSettings
// 0x0010 (0x0038 - 0x0028)
class UGlimpseVRSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseVRSettings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWallActor
// 0x0010 (0x0440 - 0x0430)
class AGlimpseWallActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWallActor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWallModel
// 0x00C8 (0x00F0 - 0x0028)
class UGlimpseWallModel : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWallModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWeatherManager
// 0x12B8 (0x12E0 - 0x0028)
class UGlimpseWeatherManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x12B8];                                    // 0x0028(0x12B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWeatherManager");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldPlanner
// 0x0568 (0x0590 - 0x0028)
class UGlimpseWorldPlanner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x568];                                     // 0x0028(0x0568) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldPlanner");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldBuilder
// 0x0460 (0x0890 - 0x0430)
class AGlimpseWorldBuilder : public AActor
{
public:
	unsigned char                                      UnknownData00[0x460];                                     // 0x0430(0x0460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldBuilder");
		return ptr;
	}


	void OnManTrapOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class GlimpseGame.GlimpseSandBoxWorldModel
// 0x00A0 (0x01C8 - 0x0128)
class UGlimpseSandBoxWorldModel : public UGlimpseWorldModel
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0128(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSandBoxWorldModel");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseSandBoxWorldBuilder
// 0x0050 (0x08E0 - 0x0890)
class AGlimpseSandBoxWorldBuilder : public AGlimpseWorldBuilder
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0890(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseSandBoxWorldBuilder");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldSettings
// 0x0140 (0x0720 - 0x05E0)
class AGlimpseWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x05E0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldSettings");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseWorldShore
// 0x0018 (0x0040 - 0x0028)
class UGlimpseWorldShore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseWorldShore");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseZoneAnchor
// 0x0010 (0x0440 - 0x0430)
class AGlimpseZoneAnchor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseZoneAnchor");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseZoning
// 0x0260 (0x0288 - 0x0028)
class UGlimpseZoning : public UGlimpseZoningInterface
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0028(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseZoning");
		return ptr;
	}

};


// Class GlimpseGame.GlimpseZoningV2
// 0x0328 (0x0350 - 0x0028)
class UGlimpseZoningV2 : public UGlimpseZoningInterface
{
public:
	unsigned char                                      UnknownData00[0x328];                                     // 0x0028(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.GlimpseZoningV2");
		return ptr;
	}

};


// Class GlimpseGame.HideEquippedPickupNotifyState
// 0x0008 (0x0038 - 0x0030)
class UHideEquippedPickupNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.HideEquippedPickupNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.IconBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UIconBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.IconBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class GlimpseGame.IconBox
// 0x01E8 (0x0318 - 0x0130)
class UIconBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0130(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.IconBox");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class GlimpseGame.ImageCaptionComponent
// 0x0030 (0x0390 - 0x0360)
class UImageCaptionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ImageCaptionComponent");
		return ptr;
	}

};


// Class GlimpseGame.InputBindingDisplayDecorator
// 0x0018 (0x0040 - 0x0028)
class UInputBindingDisplayDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InputBindingDisplayDecorator");
		return ptr;
	}

};


// Class GlimpseGame.InputBindingDisplayWidgetStyle
// 0x01D8 (0x0208 - 0x0030)
class UInputBindingDisplayWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0030(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InputBindingDisplayWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.InstalledDLC
// 0x00E0 (0x0108 - 0x0028)
class UInstalledDLC : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InstalledDLC");
		return ptr;
	}

};


// Class GlimpseGame.ConversationComponent
// 0x00D0 (0x03C0 - 0x02F0)
class UConversationComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ConversationComponent");
		return ptr;
	}


	void OnSuspicionStateChange(TEnumAsByte<EAISuspicionState> OldState, TEnumAsByte<EAISuspicionState> NewState);
	void OnConversationFinished(bool bSuccess);
};


// Class GlimpseGame.VendorInteractionComponent
// 0x0100 (0x03F0 - 0x02F0)
class UVendorInteractionComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02F0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.VendorInteractionComponent");
		return ptr;
	}


	void ResetVendor();
	TEnumAsByte<EInteractionResult> OnCanBarterInteract(class APawn* InteractSource);
	void OnBarterCompleteInteraction(class APawn* InteractSource);
};


// Class GlimpseGame.InteractiveList
// 0x0018 (0x08E8 - 0x08D0)
class UInteractiveList : public UScrollBox
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InteractiveList");
		return ptr;
	}

};


// Class GlimpseGame.InventoryDropSlot
// 0x0020 (0x0258 - 0x0238)
class UInventoryDropSlot : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0238(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryDropSlot");
		return ptr;
	}


	void UpdateFocusHighlight(bool Highlighted);
	void SetPickup(class AGlimpsePickup* Pickup);
	void SetDisplayImage(class UTexture2D* newTexture);
	void OnSlotUnMatchSelected();
	void OnSlotMatchesSelected();
	void OnNonSlottableSelected();
	void OnMatchingDragBegin();
	void OnDragEnd();
};


// Class GlimpseGame.InventoryGrid
// 0x10B0 (0x11C8 - 0x0118)
class UInventoryGrid : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10B0];                                    // 0x0118(0x10B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryGrid");
		return ptr;
	}


	void SetRows(int InRows);
	void SetLockedRows(int InLockedRows);
	void SetLockedColumns(int InLockedColumns);
	void SetColumns(int InColumns);
};


// Class GlimpseGame.InventoryGridWidgetStyle
// 0x05C0 (0x05F0 - 0x0030)
class UInventoryGridWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x5C0];                                     // 0x0030(0x05C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryGridWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.InventoryItemToolTipWidgetStyle
// 0x1498 (0x14C8 - 0x0030)
class UInventoryItemToolTipWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1498];                                    // 0x0030(0x1498) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryItemToolTipWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.InventoryItemWidgetStyle
// 0x0548 (0x0578 - 0x0030)
class UInventoryItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x548];                                     // 0x0030(0x0548) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryItemWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.InventoryList
// 0x08D8 (0x09F0 - 0x0118)
class UInventoryList : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8D8];                                     // 0x0118(0x08D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryList");
		return ptr;
	}

};


// Class GlimpseGame.InventoryListWidgetStyle
// 0x0330 (0x0360 - 0x0030)
class UInventoryListWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0030(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.InventoryListWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.LevelStreamingGlimpse
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingGlimpse : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.LevelStreamingGlimpse");
		return ptr;
	}

};


// Class GlimpseGame.LookAtNotifyState
// 0x0008 (0x0038 - 0x0030)
class ULookAtNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.LookAtNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.MaterialExpressionDrugIntensity
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionDrugIntensity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MaterialExpressionDrugIntensity");
		return ptr;
	}

};


// Class GlimpseGame.MenuEntryWidgetStyle
// 0x1C20 (0x1C50 - 0x0030)
class UMenuEntryWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1C20];                                    // 0x0030(0x1C20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MenuEntryWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.MessageBoxWidgetStyle
// 0x0870 (0x08A0 - 0x0030)
class UMessageBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x870];                                     // 0x0030(0x0870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.MessageBoxWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Alley
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Alley : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Alley");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Building
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Building : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Building");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Bushes
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Bushes : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Bushes");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Door
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Door : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Door");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Guarded
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Guarded : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Guarded");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_MainRoad
// 0x0000 (0x0040 - 0x0040)
class UNavArea_MainRoad : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_MainRoad");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_SideRoad
// 0x0000 (0x0040 - 0x0040)
class UNavArea_SideRoad : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_SideRoad");
		return ptr;
	}

};


// Class GlimpseGame.NavArea_Window
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Window : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NavArea_Window");
		return ptr;
	}

};


// Class GlimpseGame.NoiseEmitterComponent
// 0x0018 (0x0108 - 0x00F0)
class UNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NoiseEmitterComponent");
		return ptr;
	}


	void MakeNoise(class AActor* NoiseMaker, const struct FVector& NoiseLocation, TEnumAsByte<EGlimpseNoiseEvent> NoiseType, TEnumAsByte<EGlimpseAnnoyingEvent> AnnoyingEvent);
};


// Class GlimpseGame.PairedHitNotifyState
// 0x0018 (0x0048 - 0x0030)
class UPairedHitNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PairedHitNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.ParticleWithDecalNotifyState
// 0x0028 (0x0088 - 0x0060)
class UParticleWithDecalNotifyState : public UAnimNotifyState_TimedParticleEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.ParticleWithDecalNotifyState");
		return ptr;
	}


	void OnParticleCollided(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
};


// Class GlimpseGame.PassiveBarkComponent
// 0x0030 (0x0120 - 0x00F0)
class UPassiveBarkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PassiveBarkComponent");
		return ptr;
	}


	void SetTimeBetweenBarks(float TimeBetweenBarks, float RandomVariance);
	void SetInEncounter(bool Val);
	void RemovePassiveBark(const struct FName& BarkKey);
	void ClearBarks();
	void AddNewPassiveBark(const struct FName& BarkKey, class UAkAudioEvent* BarkEvent, float BarkWeight, bool CanPlayDuringEncounters, bool SaveBark);
};


// Class GlimpseGame.PerceptionIcon
// 0x0210 (0x0410 - 0x0200)
class UPerceptionIcon : public UImage
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0200(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PerceptionIcon");
		return ptr;
	}

};


// Class GlimpseGame.PickupNotifyState
// 0x0020 (0x0050 - 0x0030)
class UPickupNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PickupNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.SleepDurationPresenter
// 0x0008 (0x00A0 - 0x0098)
class USleepDurationPresenter : public UActionDurationPresenter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SleepDurationPresenter");
		return ptr;
	}


	float OnGetRequiredActionHours();
	bool CanDoActionWhileEncumbered();
	bool AllowActionIfZeroDuration();
};


// Class GlimpseGame.TravelDurationPresenter
// 0x0010 (0x00A8 - 0x0098)
class UTravelDurationPresenter : public UActionDurationPresenter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TravelDurationPresenter");
		return ptr;
	}


	float OnGetRequiredActionHours();
};


// Class GlimpseGame.WaitDurationPresenter
// 0x0000 (0x0098 - 0x0098)
class UWaitDurationPresenter : public UActionDurationPresenter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.WaitDurationPresenter");
		return ptr;
	}


	float OnGetRequiredActionHours();
	bool CanDoActionWhileEncumbered();
	bool AllowActionIfZeroDuration();
};


// Class GlimpseGame.FullscreenMoviePresenter
// 0x0228 (0x0250 - 0x0028)
class UFullscreenMoviePresenter : public UPresenter
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0028(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.FullscreenMoviePresenter");
		return ptr;
	}


	void OnMediaPlayerOpenFailed(const struct FString& FailedUrl);
	void OnMediaPlayerOpened(const struct FString& OpenedUrl);
	void OnMediaPlayerEndReached();
	void OnMediaPlayerClosed();
};


// Class GlimpseGame.SurvivalComponentPresenter
// 0x0008 (0x0030 - 0x0028)
class USurvivalComponentPresenter : public UPresenter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SurvivalComponentPresenter");
		return ptr;
	}


	struct FText OnGetThirstPercentText();
	float OnGetThirstPercent();
	float OnGetStaminaPercent();
	float OnGetStaminaPenaltyPercent();
	float OnGetStaminaPassiveMax();
	float OnGetStaminaPassiveFraction();
	float OnGetStaminaMax();
	float OnGetStaminaDeferredPercent();
	float OnGetStaminaDeferredCost();
	float OnGetStaminaBonusPercent();
	float OnGetStamina();
	struct FText OnGetSleepPercentText();
	float OnGetSleepPercent();
	struct FText OnGetHungerPercentText();
	float OnGetHungerPercent();
	float OnGetHPValue();
	struct FText OnGetHPPercentText();
	float OnGetHPPercent();
	float OnGetHPPenaltyPercent();
	float OnGetHPPassiveFraction();
	struct FText OnGetDrugLevelPercentText();
	float OnGetDrugLevelPercent();
	struct FText OnGetCrashMeterPercentText();
	float OnGetCrashMeterPercent();
	struct FDateTime GetTimeInStateRemaining(TEnumAsByte<ESurvivalNeed> InSurvivalNeed);
	struct FText GetSecondsInStateRemaining(TEnumAsByte<ESurvivalNeed> InSurvivalNeed);
	class UPlayerSurvivalComponent* GetPresentedComponent();
	struct FText GetMinutesInStateRemaining(TEnumAsByte<ESurvivalNeed> InSurvivalNeed, int MaxMinutes);
	void Detach();
	void Attach(class UPlayerSurvivalComponent* InComponent);
};


// Class GlimpseGame.PuppetBrain
// 0x0040 (0x0068 - 0x0028)
class UPuppetBrain : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PuppetBrain");
		return ptr;
	}


	void STATIC_PuppetTurnToLocation(class AGlimpseAICharacter* Character, const struct FVector& Location, float Timeout);
	void STATIC_PuppetTurnToActor(class AGlimpseAICharacter* Character, class AActor* Target, float Timeout);
	void STATIC_PuppetRelease(class AGlimpseAICharacter* Character);
	void STATIC_PuppetPOI(class AGlimpseAICharacter* Character, class AActor* ActorWithPOI, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout);
	void STATIC_PuppetMoveToLocation(class AGlimpseAICharacter* Character, const struct FVector& Location, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout);
	void STATIC_PuppetMoveToActor(class AGlimpseAICharacter* Character, class AActor* Target, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout);
	void STATIC_PuppetIdle(class AGlimpseAICharacter* Character);
	void STATIC_PuppetFlee(class AGlimpseAICharacter* Character, float Timeout, class AActor* FleeToActor);
	void STATIC_PuppetAttack(class AGlimpseAICharacter* Character, class AGlimpseCharacter* Target, TEnumAsByte<EWalkPace> MovementSpeed, float Timeout);
};


// Class GlimpseGame.PuppetBrainTask
// 0x0030 (0x0058 - 0x0028)
class UPuppetBrainTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PuppetBrainTask");
		return ptr;
	}

};


// Class GlimpseGame.PuppetShowBuilder
// 0x0018 (0x0040 - 0x0028)
class UPuppetShowBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PuppetShowBuilder");
		return ptr;
	}

};


// Class GlimpseGame.StateQuest
// 0x0130 (0x04F0 - 0x03C0)
class UStateQuest : public UQuest
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x03C0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StateQuest");
		return ptr;
	}


	void WaitOnPredicate(class UQuestPredicate* Predicate, const struct FLatentActionInfo& LatentInfo);
	void SetStateObjectiveStatus(TEnumAsByte<EObjectiveStatus> InStatus, bool bForceActivate);
	void RefreshCurrentState();
	class UQuestPredicate* PredicateTimeOfDay(bool bMorning, bool bAfternoon, bool bEvening, bool bNight);
	class UQuestPredicate* PredicateQuestVariableBound(const struct FName& Variable);
	class UQuestPredicate* PredicateQuestContextBound(const struct FName& BindContext);
	class UQuestPredicate* PredicateQuestBound();
	class UQuestPredicate* PredicatePlayerWearingOutfit(class UClass* OutfitType);
	class UQuestPredicate* PredicatePlayerUsedPickup(class UClass* PickupType);
	class UQuestPredicate* PredicatePlayerSeen();
	class UQuestPredicate* PredicatePlayerQuestStatus(class UClass* QuestType, bool bUnavailable, bool bAvailable, bool bActive, bool bComplete, bool bFailed);
	class UQuestPredicate* PredicatePlayerQuestObjectiveStatus(class UClass* QuestType, const struct FName& ObjectiveKey, bool bUnavailable, bool bActive, bool bComplete, bool bFailed);
	class UQuestPredicate* PredicatePlayerOpenedLootable(class AGlimpseLootable* Lootable);
	class UQuestPredicate* PredicatePlayerOnJoy();
	class UQuestPredicate* PredicatePlayerLoreUnlocked(const struct FName& LoreKey);
	class UQuestPredicate* PredicatePlayerInCombat();
	class UQuestPredicate* PredicatePlayerHasPickup(class UClass* PickupType, int MinCount);
	class UQuestPredicate* PredicatePlayerHasManual(class UClass* ManualType);
	class UQuestPredicate* PredicatePlayerCarryingCorpse(class AGlimpseCharacter* CarriedCorpse);
	class UQuestPredicate* PredicatePickupPickedUp(class AGlimpsePickup* Pickup, class AGlimpseCharacter* Character);
	class UQuestPredicate* PredicateOr(class UQuestPredicate* InA, class UQuestPredicate* InB);
	class UQuestPredicate* PredicateNot(class UQuestPredicate* In);
	class UQuestPredicate* PredicateNextTimeOfDay(const struct FTimespan& RefTime, bool bMorning, bool bAfternoon, bool bEvening, bool bNight);
	class UQuestPredicate* PredicateMatineeFinished(class AMatineeActor* Matinee);
	class UQuestPredicate* PredicateMatineeEvent(class AMatineeActor* Matinee, const struct FName& EventName);
	class UQuestPredicate* PredicateGameTimeReached(const struct FTimespan& time);
	class UQuestPredicate* PredicateGameTimeElapsed(const struct FTimespan& RefTime, float Elapsed);
	class UQuestPredicate* PredicateCounter(class UQuestPredicate* In, int MinValue, bool bSignalOnIncrement, int* CounterVariable);
	class UQuestPredicate* PredicateComponentInteraction(class UInteractionComponent* Component, TEnumAsByte<EInteractionEvent> Event);
	class UQuestPredicate* PredicateCharacterSuspicionTargetChange(class AGlimpseAICharacter* Character, class AActor* TargetActor);
	class UQuestPredicate* PredicateCharacterSuspicion(class AGlimpseAICharacter* Character, TEnumAsByte<EAISuspicionState> SuspicionState);
	class UQuestPredicate* PredicateCharacterStatusEffect(class AGlimpseCharacter* Character, class UClass* StatusEffectType);
	class UQuestPredicate* PredicateCharacterStatRatio(class AGlimpseCharacter* Character, TEnumAsByte<ESurvivalNeed> Stat, float Threshold, TEnumAsByte<EStatThreshold> ThresholdType, bool bWatchForRegen);
	class UQuestPredicate* PredicateCharacterStat(class AGlimpseCharacter* Character, TEnumAsByte<ESurvivalNeed> Stat, float Threshold, TEnumAsByte<EStatThreshold> ThresholdType, bool bWatchForRegen);
	class UQuestPredicate* PredicateCharacterGreet(class AGlimpseAICharacter* Character, bool bAlwaysSucceed);
	class UQuestPredicate* PredicateCharacterGift(class AGlimpseAICharacter* Character, class UClass* GiftType);
	class UQuestPredicate* PredicateCharacterDeath(class AGlimpseCharacter* Character, class AController* DamageInstigator, class AActor* DamageCauser);
	class UQuestPredicate* PredicateCharacterConversationDone(class AGlimpseAICharacter* Character, bool bAlwaysSucceed, class UGlimpseConversationAsset* ConversationAsset);
	class UQuestPredicate* PredicateAnd(class UQuestPredicate* InA, class UQuestPredicate* InB);
	class UQuestPredicate* PredicateActorTakeDamage(class AActor* Actor, float MinimumDamage, class UClass* DamageType, class AController* DamageInstigator, class AActor* DamageCauser);
	class UQuestPredicate* PredicateActorOverlap(class AActor* OverlapActor, class AActor* OtherActor);
	TEnumAsByte<EObjectiveStatus> GetStateObjectiveStatus();
	void FailStateObjective(bool bEvenIfCompleted);
	bool DoesStateHaveBlueprintNode(const struct FName& State);
	void DeactivateStateObjective();
	void CompleteStateObjective(bool bEvenIfFailed);
};


// Class GlimpseGame.QuestPredicate_ActorOverlap
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_ActorOverlap : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_ActorOverlap");
		return ptr;
	}


	void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* InOtherActor);
	void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* InOtherActor);
};


// Class GlimpseGame.QuestPredicate_ActorTakeDamage
// 0x0030 (0x00B0 - 0x0080)
class UQuestPredicate_ActorTakeDamage : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_ActorTakeDamage");
		return ptr;
	}


	void OnActorTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* InDamageType, class AController* InDamageInstigator, class AActor* InDamageCauser);
};


// Class GlimpseGame.QuestPredicate_AISuspicion
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_AISuspicion : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_AISuspicion");
		return ptr;
	}


	void OnSuspicionStateChange(TEnumAsByte<EAISuspicionState> OldState, TEnumAsByte<EAISuspicionState> NewState);
};


// Class GlimpseGame.QuestPredicate_AISuspicionTarget
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_AISuspicionTarget : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_AISuspicionTarget");
		return ptr;
	}


	void OnDetectionTargetChange(class AActor* OldTarget, class AActor* NewTarget);
};


// Class GlimpseGame.QuestPredicate_CharacterCarryingCorpse
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_CharacterCarryingCorpse : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterCarryingCorpse");
		return ptr;
	}


	void OnCorpseCarryStop(class AGlimpseCharacter* Corpse);
	void OnCorpseCarryStart(class AGlimpseCharacter* Corpse);
};


// Class GlimpseGame.QuestPredicate_CharacterConversationDone
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_CharacterConversationDone : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterConversationDone");
		return ptr;
	}


	void OnCharacterConversationDone(class AGlimpseCharacter* Talker, class AGlimpseCharacter* Talkee, class UGlimpseConversationAsset* Asset, bool bSuccess);
};


// Class GlimpseGame.QuestPredicate_CharacterDeath
// 0x0030 (0x00B0 - 0x0080)
class UQuestPredicate_CharacterDeath : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterDeath");
		return ptr;
	}


	void OnCharacterDeath(class AGlimpseCharacter* CharacterSource, class AController* LastDamageInstigator, class AActor* LastDamageCauser);
};


// Class GlimpseGame.QuestPredicate_CharacterGift
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_CharacterGift : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterGift");
		return ptr;
	}


	void OnCharacterGifted(class UClass* GiftClass);
};


// Class GlimpseGame.QuestPredicate_CharacterGreet
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_CharacterGreet : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterGreet");
		return ptr;
	}


	void OnCharacterGreeted(bool bSuccess);
};


// Class GlimpseGame.QuestPredicate_CharacterHasPickup
// 0x0070 (0x00F0 - 0x0080)
class UQuestPredicate_CharacterHasPickup : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0080(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterHasPickup");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_CharacterStat
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_CharacterStat : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterStat");
		return ptr;
	}


	void OnSurvivalStatChanged(TEnumAsByte<ESurvivalNeed> StatType, float NewValue, float DeltaValue);
};


// Class GlimpseGame.QuestPredicate_CharacterStatusEffect
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_CharacterStatusEffect : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterStatusEffect");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_CharacterUsedPickup
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_CharacterUsedPickup : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_CharacterUsedPickup");
		return ptr;
	}


	void OnCharacterUsePickup(class AGlimpseCharacter* CharacterSource, class AGlimpsePickup* Pickup);
};


// Class GlimpseGame.QuestPredicate_ComponentInteraction
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_ComponentInteraction : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_ComponentInteraction");
		return ptr;
	}


	void OnInteractionEvent(class APawn* InteractSource);
};


// Class GlimpseGame.QuestPredicate_LoreUnlocked
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_LoreUnlocked : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_LoreUnlocked");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_MatineeEvent
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_MatineeEvent : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_MatineeEvent");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_TimeOfDay
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_TimeOfDay : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_TimeOfDay");
		return ptr;
	}


	void OnTimeOfDayChanged();
};


// Class GlimpseGame.QuestPredicate_NextTimeOfDay
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_NextTimeOfDay : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_NextTimeOfDay");
		return ptr;
	}


	void OnTimeOfDayChanged();
};


// Class GlimpseGame.QuestPredicate_TimeElapsed
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_TimeElapsed : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_TimeElapsed");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_ObjectiveStatus
// 0x0030 (0x00B0 - 0x0080)
class UQuestPredicate_ObjectiveStatus : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_ObjectiveStatus");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_PickupPickedUp
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_PickupPickedUp : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_PickupPickedUp");
		return ptr;
	}


	void OnPickedUp(class APawn* PickupSource);
};


// Class GlimpseGame.QuestPredicate_PlayerCombatMode
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_PlayerCombatMode : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_PlayerCombatMode");
		return ptr;
	}


	void OnPlayerCombatModeChange();
};


// Class GlimpseGame.QuestPredicate_PlayerConformity
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_PlayerConformity : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_PlayerConformity");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_PlayerSeen
// 0x0010 (0x0090 - 0x0080)
class UQuestPredicate_PlayerSeen : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_PlayerSeen");
		return ptr;
	}


	void OnPlayerSeenChanged(bool bSeen);
};


// Class GlimpseGame.QuestPredicate_PlayerWearingOutfit
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_PlayerWearingOutfit : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_PlayerWearingOutfit");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_QuestBound
// 0x0020 (0x00A0 - 0x0080)
class UQuestPredicate_QuestBound : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_QuestBound");
		return ptr;
	}

};


// Class GlimpseGame.QuestPredicate_QuestStatus
// 0x0030 (0x00B0 - 0x0080)
class UQuestPredicate_QuestStatus : public UQuestPredicate
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.QuestPredicate_QuestStatus");
		return ptr;
	}

};


// Class GlimpseGame.SleepNotifyState
// 0x0008 (0x0038 - 0x0030)
class USleepNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SleepNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.SquadComponent
// 0x0010 (0x0100 - 0x00F0)
class USquadComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SquadComponent");
		return ptr;
	}

};


// Class GlimpseGame.StatusEffectComponent
// 0x08F0 (0x09E0 - 0x00F0)
class UStatusEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8F0];                                     // 0x00F0(0x08F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatusEffectComponent");
		return ptr;
	}


	class UGlimpseStatusEffectBase* SetStatusEffect(class UClass* StatusEffectType, int Tier);
	void SetDrugIntensity(bool overrideOn, float Val);
	class UGlimpseStatusEffectBase* SelectStatusEffect(const struct FStatusEffectSelector& Selector, class AController* Instigator);
	void RemoveStatusEffectInstance(class UGlimpseStatusEffectBase* EffectInstance);
	void RemoveStatusEffectByKey(const struct FName& StatusEffectKey);
	void RemoveStatusEffect(class UClass* StatusEffectType);
	void RemoveAllStatusEffects();
	float ModifyGameplayValue(const struct FGameplayTag& Tag, float BaseValue);
	bool HasStatusEffectByKey(const struct FName& EffectKey);
	bool HasStatusEffect(class UClass* StatusEffectType);
	class UClass* GetStatusEffectType(const struct FName& StatusEffectKey);
	float GetDrugIntensity();
	class UGlimpseStatusEffectBase* GetDefaultStatusEffect(const struct FName& StatusEffectKey);
	bool GetActiveStatusEffectByKey(const struct FName& EffectKey, class UGlimpseStatusEffectBase** OutEffect);
	bool GetActiveStatusEffect(class UClass* EffectType, class UGlimpseStatusEffectBase** OutEffect);
	class UGlimpseStatusEffectBase* DecreaseOrRemoveStatusEffect(class UClass* StatusEffectType, int Decrement);
	class UGlimpseStatusEffectBase* AddStatusEffectByKey(const struct FName& StatusEffectKey, bool bApplyOnAdd, class AController* Instigator);
	class UGlimpseStatusEffectBase* AddStatusEffect(class UClass* StatusEffectType, bool bApplyOnAdd, class AController* Instigator);
	class UGlimpseStatusEffectBase* AddOrIncreaseStatusEffect(class UClass* StatusEffectType, int Increment, float DurationOverride, class AController* Instigator);
};


// Class GlimpseGame.StatusEffectNotify
// 0x0008 (0x0040 - 0x0038)
class UStatusEffectNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatusEffectNotify");
		return ptr;
	}

};


// Class GlimpseGame.StatusEffectNotifyState
// 0x0010 (0x0040 - 0x0030)
class UStatusEffectNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.StatusEffectNotifyState");
		return ptr;
	}

};


// Class GlimpseGame.SubtitleStyleSheet
// 0x0928 (0x0958 - 0x0030)
class USubtitleStyleSheet : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x928];                                     // 0x0030(0x0928) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SubtitleStyleSheet");
		return ptr;
	}

};


// Class GlimpseGame.SurvivalComponent
// 0x08C0 (0x09B0 - 0x00F0)
class USurvivalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8C0];                                     // 0x00F0(0x08C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.SurvivalComponent");
		return ptr;
	}


	void SetStatPercent(TEnumAsByte<ESurvivalNeed> Type, float Percent);
	void SetStat(TEnumAsByte<ESurvivalNeed> Type, float Value);
	float GetStatRegenRate(TEnumAsByte<ESurvivalNeed> Type);
	float GetStatRatio(TEnumAsByte<ESurvivalNeed> Type);
	float GetStatMax(TEnumAsByte<ESurvivalNeed> Type);
	float GetStat(TEnumAsByte<ESurvivalNeed> Type);
	float GetFastTravelStatRegenRate(TEnumAsByte<ESurvivalNeed> Type);
	float GetBaseStatMax(TEnumAsByte<ESurvivalNeed> Type);
	void DemiGod(bool bInDemiGod);
	void AddStat(TEnumAsByte<ESurvivalNeed> Type, float Delta);
};


// Class GlimpseGame.PlayerSurvivalComponent
// 0x0320 (0x0CD0 - 0x09B0)
class UPlayerSurvivalComponent : public USurvivalComponent
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x09B0(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.PlayerSurvivalComponent");
		return ptr;
	}


	void SetOverrideGlimpseEnvironmentJoyState(bool bOverride, TEnumAsByte<EPlayerDrugState> CurrentState, TEnumAsByte<EPlayerDrugState> TargetState, float transition);
	void SetCrashMeter(float Val);
	void SetBloodSugarLevel(float Level);
	void OnPlayerSurvivalStatChanged(TEnumAsByte<ESurvivalNeed> StatType, float NewValue, float DeltaValue);
	bool IsStatSafe(TEnumAsByte<ESurvivalNeed> Type);
	bool IsStatCritical(TEnumAsByte<ESurvivalNeed> Type);
	bool IsGivenBloodSugarCritical(float BloodSugarLevel);
	bool IsBloodSugarSafe();
	bool IsBloodSugarCritical();
	float GetTimeToCrash();
	float GetSafeThreshold();
	float GetMaxBloodSugarLevel();
	float GetCriticalThreshold();
	float GetBloodSugarLevel();
	void ForceJoyState(int JoyStateAsInt);
	void AddToBloodSugarLevel(float Increase);
};


// Class GlimpseGame.NickPlayerSurvivalComponent
// 0x0030 (0x0D00 - 0x0CD0)
class UNickPlayerSurvivalComponent : public UPlayerSurvivalComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0CD0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.NickPlayerSurvivalComponent");
		return ptr;
	}


	void SetIsThirdDay(bool bThirdDay);
	void EnableSanitySystem(bool bEnable);
};


// Class GlimpseGame.TargetingComponent
// 0x0068 (0x0158 - 0x00F0)
class UTargetingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TargetingComponent");
		return ptr;
	}


	void SetTargetComponent(class UPrimitiveComponent* NewTargetComponent);
	void EndTarget(class AController* TargetSource);
	void BeginTarget(class AController* TargetSource);
};


// Class GlimpseGame.TargetStatNotify
// 0x0008 (0x0040 - 0x0038)
class UTargetStatNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TargetStatNotify");
		return ptr;
	}

};


// Class GlimpseGame.TexturedBox
// 0x0168 (0x0298 - 0x0130)
class UTexturedBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0130(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TexturedBox");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class GlimpseGame.TexturedBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UTexturedBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TexturedBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class GlimpseGame.TexturedBoxWidgetStyle
// 0x0138 (0x0168 - 0x0030)
class UTexturedBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0030(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TexturedBoxWidgetStyle");
		return ptr;
	}

};


// Class GlimpseGame.TickerStyleSheet
// 0x0878 (0x08A8 - 0x0030)
class UTickerStyleSheet : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x878];                                     // 0x0030(0x0878) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TickerStyleSheet");
		return ptr;
	}

};


// Class GlimpseGame.TimedSFXNotify
// 0x0008 (0x0040 - 0x0038)
class UTimedSFXNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.TimedSFXNotify");
		return ptr;
	}

};


// Class GlimpseGame.WaypointWidget
// 0x0000 (0x0238 - 0x0238)
class UWaypointWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.WaypointWidget");
		return ptr;
	}


	void SetIsAreaWaypoint(bool areaWaypoint);
	void SetAngleVisibility(bool showAngle, float Angle);
};


// Class GlimpseGame.WorldBuilderVisualizationComponent
// 0x0000 (0x00F0 - 0x00F0)
class UWorldBuilderVisualizationComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseGame.WorldBuilderVisualizationComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
