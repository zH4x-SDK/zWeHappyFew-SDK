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

// Class Engine.DataAsset
// 0x0000 (0x0028 - 0x0028)
class UDataAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x00C8 (0x00F0 - 0x0028)
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetIsReplicated(bool ShouldReplicate);
	void SetComponentTickInterval(float TickInterval, bool bUsesAbsoluteDeltaTime);
	void SetComponentTickEnabled(bool bEnabled);
	void SetActive(bool bNewActive, bool bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject* Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(const struct FName& Tag);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void Activate(bool bReset);
};


// Class Engine.AnimNotifyState
// 0x0008 (0x0030 - 0x0028)
class UAnimNotifyState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	struct FString GetNotifyName();
};


// Class Engine.Actor
// 0x0408 (0x0430 - 0x0028)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0028(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	bool WasRecentlyRenderedOnScreen(float Tolerance);
	bool WasRecentlyRendered(float Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	void SetActorTickInterval(float TickInterval);
	void SetActorTickEnabled(bool bEnabled);
	void SetActorScale3D(const struct FVector& NewScale3D);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(TEnumAsByte<EDetachmentRule> LocationRule, TEnumAsByte<EDetachmentRule> RotationRule, TEnumAsByte<EDetachmentRule> ScaleRule);
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachmentRule> LocationRule, TEnumAsByte<EAttachmentRule> RotationRule, TEnumAsByte<EAttachmentRule> ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, TEnumAsByte<EAttachmentRule> LocationRule, TEnumAsByte<EAttachmentRule> RotationRule, TEnumAsByte<EAttachmentRule> ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class Engine.AnimNotify
// 0x0010 (0x0038 - 0x0028)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	struct FString GetNotifyName();
};


// Class Engine.Controller
// 0x0060 (0x0490 - 0x0430)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0430(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetIgnoreMoveInput(bool bNewMoveInput);
	void SetIgnoreLookInput(bool bNewLookInput);
	void SetControlRotation(const struct FRotator& NewRotation);
	void ResetIgnoreMoveInput();
	void ResetIgnoreLookInput();
	void ResetIgnoreInputFlags();
	void ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void Possess(class APawn* InPawn);
	void OnRep_PlayerState();
	void OnRep_Pawn();
	bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks);
	class APawn* K2_GetPawn();
	bool IsPlayerController();
	bool IsMoveInputIgnored();
	bool IsLookInputIgnored();
	bool IsLocalPlayerController();
	bool IsLocalController();
	class AActor* GetViewTarget();
	struct FRotator GetDesiredRotation();
	struct FRotator GetControlRotation();
	void ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera);
	void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	class APlayerController* CastToPlayerController();
};


// Class Engine.SceneComponent
// 0x0270 (0x0360 - 0x00F0)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x00F0(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}


	void ToggleVisibility(bool bPropagateToChildren);
	bool SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	void SetWorldScale3D(const struct FVector& NewScale);
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void SetRelativeScale3D(const struct FVector& NewScale3D);
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void ResetRelativeTransform();
	void OnRep_Visibility(bool OldValue);
	void OnRep_Transform();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void K2_DetachFromComponent(TEnumAsByte<EDetachmentRule> LocationRule, TEnumAsByte<EDetachmentRule> RotationRule, TEnumAsByte<EDetachmentRule> ScaleRule, bool bCallModify);
	bool K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachmentRule> LocationRule, TEnumAsByte<EAttachmentRule> RotationRule, TEnumAsByte<EAttachmentRule> ScaleRule, bool bWeldSimulatedBodies);
	bool K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	void K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsVisible();
	bool IsSimulatingPhysics(const struct FName& BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	struct FRotator GetSocketRotation(const struct FName& InSocketName);
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	struct FVector GetSocketLocation(const struct FName& InSocketName);
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int ChildIndex);
	struct FName GetAttachSocketName();
	class USceneComponent* GetAttachParent();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(const struct FName& InSocketName);
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};


// Class Engine.Info
// 0x0000 (0x0430 - 0x0430)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.GameMode
// 0x00D0 (0x0500 - 0x0430)
class AGameMode : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0430(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}


	void StartPlay();
	void StartMatch();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
	bool ShouldReset(class AActor* ActorToReset);
	void SetBandwidthLimit(float AsyncIOBandwidthLimit);
	void ReturnToMainMenuHost();
	void RestartGame();
	void ResetLevel();
	bool ReadyToStartMatch();
	bool ReadyToEndMatch();
	bool PlayerCanRestart(class APlayerController* Player);
	bool MustSpectate(class APlayerController* NewPlayerController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	void K2_OnSetMatchState(const struct FName& NewState);
	void K2_OnRestartPlayer(class AController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void K2_OnChangeName(class AController* Other, const struct FString& NewName, bool bNameChange);
	class AActor* K2_FindPlayerStart(class AController* Player);
	bool IsMatchInProgress();
	void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
	bool HasMatchStarted();
	bool HasMatchEnded();
	int GetNumPlayers();
	struct FName GetMatchState();
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	class AActor* FindPlayerStart(class AController* Player, const struct FString& IncomingName);
	void EndMatch();
	class AActor* ChoosePlayerStart(class AController* Player);
	void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);
	void AbortMatch();
};


// Class Engine.PlayerController
// 0x02D0 (0x0760 - 0x0490)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0490(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	bool WasInputKeyJustReleased(const struct FKey& Key);
	bool WasInputKeyJustPressed(const struct FKey& Key);
	void ToggleSpeaking(bool bInSpeaking);
	void SwitchLevel(const struct FString& URL);
	void StopHapticEffect(TEnumAsByte<EControllerHand> Hand);
	void StartFire(unsigned char FireModeNum);
	void SetVirtualJoystickVisibility(bool bVisible);
	void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetName(const struct FString& S);
	void SetHapticsByValue(float Frequency, float Amplitude, TEnumAsByte<EControllerHand> Hand);
	void SetControllerLightColor(const struct FColor& Color);
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	void SetAudioListenerOverride(class USceneComponent* AttachToComponent, const struct FVector& Location, const struct FRotator& Rotation);
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	void ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw);
	void ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorWaiting(bool bWaiting);
	void ServerSetSpectatorLocation(const struct FVector& NewLoc, const struct FRotator& NewRot);
	void ServerRestartPlayer();
	void ServerPause();
	void ServerNotifyLoadedWorld(const struct FName& WorldPackageName);
	void ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerCheckClientPossessionReliable();
	void ServerCheckClientPossession();
	void ServerChangeName(const struct FString& S);
	void ServerCamera(const struct FName& NewMode);
	void ServerAcknowledgePossession(class APawn* P);
	void SendToConsole(const struct FString& Command);
	void RestartLevel();
	bool ProjectWorldLocationToScreen(const struct FVector& WorldLocation, struct FVector2D* ScreenLocation);
	void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, TEnumAsByte<EControllerHand> Hand, float Scale, bool bLoop);
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo);
	void Pause();
	void OnServerStartedVisualLogger(bool bIsLogging);
	void LocalTravel(const struct FString& URL);
	bool IsInputKeyDown(const struct FKey& Key);
	void GetViewportSize(int* SizeX, int* SizeY);
	class ASpectatorPawn* GetSpectatorPawn();
	bool GetMousePosition(float* LocationX, float* LocationY);
	struct FVector GetInputVectorKeyState(const struct FKey& Key);
	void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	void GetInputMouseDelta(float* DeltaX, float* DeltaY);
	void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	float GetInputKeyTimeDown(const struct FKey& Key);
	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetInputAnalogKeyState(const struct FKey& Key);
	class AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	struct FVector GetFocalLocation();
	void FOV(float NewFOV);
	void EnableCheats();
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	void ConsoleKey(const struct FKey& Key);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientVoiceHandshakeComplete();
	void ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex);
	void ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientTravelInternal(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTeamMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	void ClientStopCameraShake(class UClass* Shake, bool bImmediately);
	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
	void ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams);
	void ClientSetSpectatorWaiting(bool bWaiting);
	void ClientSetHUD(class UClass* NewHUDClass);
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups);
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	void ClientSetCameraMode(const struct FName& NewCamMode);
	void ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio);
	void ClientSetBlockOnAsyncLoading();
	void ClientReturnToMainMenu(const struct FString& ReturnReason);
	void ClientRetryClientRestart(class APawn* NewPawn);
	void ClientRestart(class APawn* NewPawn);
	void ClientReset();
	void ClientRepObjRef(class UObject* Object);
	void ClientReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
	void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups);
	void ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast);
	void ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const struct FName& Tag);
	void ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	void ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientMessage(const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientIgnoreMoveInput(bool bIgnore);
	void ClientIgnoreLookInput(bool bIgnore);
	void ClientGotoState(const struct FName& NewState);
	void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEndOnlineSession();
	void ClientEnableNetworkVoice(bool bEnable);
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth(int Cap);
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation);
	void ClearAudioListenerOverride();
	void Camera(const struct FName& NewMode);
	void AddYawInput(float Val);
	void AddRollInput(float Val);
	void AddPitchInput(float Val);
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);
};


// Class Engine.PrimitiveComponent
// 0x03D0 (0x0730 - 0x0360)
class UPrimitiveComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0360(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	void WakeRigidBody(const struct FName& BoneName);
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	void SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void SetSimulatePhysics(bool bSimulate);
	void SetRenderInMainPass(bool bValue);
	void SetRenderCustomDepth(bool bValue);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetOwnerNoSee(bool bNewOwnerNoSee);
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void SetMassScale(const struct FName& BoneName, float InMassScale);
	void SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	void SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	void SetLinearDamping(float InDamping);
	void SetEnableGravity(bool bGravityEnabled);
	void SetCustomDepthStencilValue(int Value);
	void SetCullDistance(float NewCullDistance);
	void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	void SetCastShadow(bool NewCastShadow);
	void SetBoundsScale(float NewBoundsScale);
	void SetAngularDamping(float InDamping);
	void SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void SetAllMassScale(float InMassScale);
	struct FVector ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	void PutRigidBodyToSleep(const struct FName& BoneName);
	bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName);
	bool K2_IsQueryCollisionEnabled();
	bool K2_IsPhysicsCollisionEnabled();
	bool K2_IsCollisionEnabled();
	bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	bool IsOverlappingActor(class AActor* Other);
	bool IsGravityEnabled();
	void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TArray<struct FOverlapInfo> GetOverlapInfos();
	int GetNumMaterials();
	class UMaterialInterface* GetMaterial(int ElementIndex);
	float GetMassScale(const struct FName& BoneName);
	float GetMass();
	float GetLinearDamping();
	struct FVector GetInertiaTensor(const struct FName& BoneName);
	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	struct FName GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	TEnumAsByte<ECollisionEnabled> GetCollisionEnabled();
	float GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	struct FVector GetCenterOfMass(const struct FName& BoneName);
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreActors();
	bool CanCharacterStepUp(class APawn* Pawn);
	void AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	void AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	void AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
	void AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
};


// Class Engine.MeshComponent
// 0x00D0 (0x0800 - 0x0730)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0730(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}


	void SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	void SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	TArray<class UMaterialInterface*> GetMaterials();
};


// Class Engine.SkinnedMeshComponent
// 0x0160 (0x0960 - 0x0800)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0800(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}


	void UnHideBoneByName(const struct FName& BoneName);
	void TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void ShowMaterialSection(int MaterialID, bool bShow, int LODIndex);
	void SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose);
	void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	void SetMinLOD(int InNewMinLOD);
	void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent);
	void SetForcedLOD(int InNewForcedLOD);
	bool IsBoneHiddenByName(const struct FName& BoneName);
	void HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
	struct FName GetSocketBoneName(const struct FName& InSocketName);
	struct FName GetParentBone(const struct FName& BoneName);
	int GetNumBones();
	struct FName GetBoneName(int BoneIndex);
	int GetBoneIndex(const struct FName& BoneName);
	struct FName FindClosestBone_K2(const struct FVector& TestLocation, float IgnoreScale, bool bRequirePhysicsAsset, struct FVector* BoneLocation);
	bool BoneIsChildOf(const struct FName& BoneName, const struct FName& ParentBoneName);
};


// Class Engine.SkeletalMeshComponent
// 0x0560 (0x0EC0 - 0x0960)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x560];                                     // 0x0960(0x0560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	void Stop();
	void SetPosition(float InPos, bool bFireNotifies);
	void SetPlayRate(float Rate);
	void SetPhysicsBlendWeight(float PhysicsBlendWeight);
	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName, bool bIncludeSelf);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value, bool bRemoveZeroWeight);
	void SetEnablePhysicsBlending(bool bNewBlendPhysics);
	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, const struct FName& BoneName, bool bIncludeSelf);
	void SetEnableBodyGravity(bool bEnableGravity, const struct FName& BoneName);
	void SetConstraintProfileForAll(const struct FName& ProfileName, bool bDefaultIfNotFound);
	void SetConstraintProfile(const struct FName& JointName, const struct FName& ProfileName, bool bDefaultIfNotFound);
	void SetClothMaxDistanceScale(float Scale);
	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName);
	void SetAnimInstanceClass(class UClass* NewClass);
	void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);
	void SetAnimation(class UAnimationAsset* NewAnimToPlay);
	void SetAngularLimits(const struct FName& InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
	void SetAllBodiesSimulatePhysics(bool bNewSimulate);
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
	void SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
	void ResetClothTeleportMode();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	void Play(bool bLooping);
	bool K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance);
	bool IsPlaying();
	bool IsBodyGravityEnabled(const struct FName& BoneName);
	float GetPosition();
	float GetPlayRate();
	float GetMorphTarget(const struct FName& MorphTargetName);
	void GetCurrentJointAngles(const struct FName& InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);
	float GetClothMaxDistanceScale();
	class UAnimInstance* GetAnimInstance();
	TEnumAsByte<EAnimationMode> GetAnimationMode();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void ClearMorphTargets();
	void BreakConstraint(const struct FVector& Impulse, const struct FVector& HitLocation, const struct FName& InBoneName);
	void BindClothToMasterPoseComponent();
	void AddImpulseToAllBodiesBelow(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange, bool bIncludeSelf);
	void AddForceToAllBodiesBelow(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange, bool bIncludeSelf);
	void AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};


// Class Engine.DamageType
// 0x0018 (0x0040 - 0x0028)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.MovementComponent
// 0x0048 (0x0138 - 0x00F0)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}


	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin);
	void SetPlaneConstraintNormal(const struct FVector& PlaneNormal);
	void SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up);
	void SetPlaneConstraintEnabled(bool bEnabled);
	void SetPlaneConstraintAxisSetting(TEnumAsByte<EPlaneConstraintAxisSetting> NewAxisSetting);
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	bool K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutHit);
	float K2_GetModifiedMaxSpeed();
	float K2_GetMaxSpeedModifier();
	bool IsExceedingMaxSpeed(float MaxSpeed);
	struct FVector GetPlaneConstraintOrigin();
	struct FVector GetPlaneConstraintNormal();
	TEnumAsByte<EPlaneConstraintAxisSetting> GetPlaneConstraintAxisSetting();
	class APhysicsVolume* GetPhysicsVolume();
	float GetMaxSpeed();
	float GetGravityZ();
	struct FVector ConstrainNormalToPlane(const struct FVector& Normal);
	struct FVector ConstrainLocationToPlane(const struct FVector& Location);
	struct FVector ConstrainDirectionToPlane(const struct FVector& Direction);
};


// Class Engine.NavMovementComponent
// 0x0038 (0x0170 - 0x0138)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0138(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}


	void StopMovementKeepPathing();
	void StopActiveMovement();
	bool IsSwimming();
	bool IsMovingOnGround();
	bool IsLeaningRight();
	bool IsLeaningLeft();
	bool IsFlying();
	bool IsFalling();
	bool IsCrouching();
};


// Class Engine.PawnMovementComponent
// 0x0008 (0x0178 - 0x0170)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}


	struct FVector K2_GetInputVector();
	bool IsMoveInputIgnored();
	struct FVector GetPendingInputVector();
	class APawn* GetPawnOwner();
	struct FVector GetLastInputVector();
	struct FVector ConsumeInputVector();
	void AddInputVector(const struct FVector& WorldVector, bool bForce);
};


// Class Engine.CharacterMovementComponent
// 0x0588 (0x0700 - 0x0178)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x588];                                     // 0x0178(0x0588) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}


	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	float GetValidPerchRadius();
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMaxJumpHeight();
	float GetMaxAcceleration();
	struct FVector GetImpartedMovementBaseVelocity();
	struct FVector GetCurrentAcceleration();
	class ACharacter* GetCharacterOwner();
	float GetAnalogInputModifier();
	void DisableMovement();
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& Force);
};


// Class Engine.Pawn
// 0x0060 (0x0490 - 0x0430)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0430(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void SpawnDefaultController();
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
	void ReceiveUnpossessed(class AController* OldController);
	void ReceivePossessed(class AController* NewController);
	void PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
	void OnRep_PlayerState();
	void OnRep_Controller();
	void LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	struct FVector K2_GetMovementInputVector();
	bool IsPlayerControlled();
	bool IsMoveInputIgnored();
	bool IsLocallyControlled();
	bool IsControlled();
	struct FVector GetPendingMovementInputVector();
	struct FVector GetNavAgentLocation();
	class UPawnMovementComponent* GetMovementComponent();
	class AActor* STATIC_GetMovementBaseActor(class APawn* Pawn);
	struct FVector GetLastMovementInputVector();
	struct FRotator GetControlRotation();
	class AController* GetController();
	struct FRotator GetBaseAimRotation();
	void DetachFromControllerPendingDestroy();
	struct FVector ConsumeMovementInputVector();
	void AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void AddControllerYawInput(float Val);
	void AddControllerRollInput(float Val);
	void AddControllerPitchInput(float Val);
};


// Class Engine.Character
// 0x03D0 (0x0860 - 0x0490)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0490(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}


	void UnCrouch(bool bClientSimulation);
	void StopJumping();
	void StopAnimMontage(class UAnimMontage* AnimMontage);
	void SetReplicateMovement(bool bInReplicateMovement);
	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_IsLeaningRight();
	void OnRep_IsLeaningLeft();
	void OnRep_IsCrouched();
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsPlayingNetworkedRootMotionMontage();
	bool IsJumpProvidingForce();
	class UAnimMontage* GetCurrentMontage();
	float GetAnimRootMotionTranslationScale();
	void Crouch(bool bClientSimulation);
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	bool CanJumpInternal();
	bool CanJump();
};


// Class Engine.Brush
// 0x0030 (0x0460 - 0x0430)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0000 (0x0460 - 0x0460)
class AVolume : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000 (0x0460 - 0x0460)
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.AnimInstance
// 0x04C8 (0x04F0 - 0x0028)
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C8];                                     // 0x0028(0x04C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}


	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float InBlendOutTime, const struct FName& SlotNodeName);
	void SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	void Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);
	void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	void Montage_Resume(class UAnimMontage* Montage);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, TEnumAsByte<EMontagePlayReturnType> ReturnValueType);
	void Montage_Pause(class UAnimMontage* Montage);
	void Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool Montage_IsPlaying(class UAnimMontage* Montage);
	bool Montage_IsActive(class UAnimMontage* Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	bool IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	bool HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName);
	bool GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(const struct FName& InSyncGroupName);
	float GetStateWeight(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTime(int MachineIndex, int StateIndex);
	float GetRelevantAnimLength(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	float GetInstanceStateWeight(int MachineIndex, int StateIndex);
	float GetInstanceMachineWeight(int MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	float GetCurveValue(const struct FName& CurveName);
	struct FName GetCurrentStateName(int MachineIndex);
	float GetCurrentStateElapsedTime(int MachineIndex);
	float STATIC_GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset);
	void ClearMorphTargets();
	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
};


// Class Engine.CheatManager
// 0x0050 (0x0078 - 0x0028)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void Walk();
	void ViewSelf();
	void ViewPlayer(const struct FString& S);
	void ViewClass(class UClass* DesiredClass);
	void ViewActor(const struct FName& ActorName);
	void ToggleDebugMessageOnScreen();
	void ToggleDebugCamera();
	void ToggleAILogging();
	void TestCollisionDistance();
	void Teleport();
	void Summon(const struct FString& ClassName);
	void StreamLevelOut(const struct FName& PackageName);
	void StreamLevelIn(const struct FName& PackageName);
	void Slomo(float NewTimeDilation);
	void SetWorldOrigin();
	void SetNavDrawDistance(float DrawDistance);
	void SetMouseSensitivityToDefault();
	void ServerToggleAILogging();
	void ReceiveInitCheatManager();
	void RebuildNavigation();
	void PlayersOnly();
	void OnlyLoadLevel(const struct FName& PackageName);
	void LogLoc();
	void InvertMouse();
	void God();
	void Ghost();
	void FreezeFrame(float Delay);
	void Fly();
	void FlushLog();
	void DumpVoiceMutingState();
	void DumpPartyState();
	void DumpOnlineSessionState();
	void DumpChatState();
	void DestroyTarget();
	void DestroyPawns(class UClass* aClass);
	void DestroyAllPawnsExceptTarget();
	void DestroyAll(class UClass* aClass);
	void DebugCapsuleSweepSize(float HalfHeight, float Radius);
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex(bool bTraceComplex);
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget(float DamageAmount);
	void CheatScript(const struct FString& ScriptName);
	void ChangeSize(float F);
	void BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, struct FString* GoString, struct FString* LocString);
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void BugIt(const struct FString& ScreenShotDescription);
};


// Class Engine.Engine
// 0x0C58 (0x0C80 - 0x0028)
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC58];                                     // 0x0028(0x0C58) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0008 (0x0030 - 0x0028)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x0450 (0x0480 - 0x0030)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x450];                                     // 0x0030(0x0450) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget(int PlayerIndex);
};


// Class Engine.Console
// 0x0110 (0x0138 - 0x0028)
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.GameUserSettings
// 0x00F0 (0x0118 - 0x0028)
class UGameUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}


	void ValidateSettings();
	bool SupportsHDRDisplayOutput();
	void SetVSyncEnabled(bool bEnable);
	void SetVisualEffectQuality(int Value);
	void SetViewDistanceQuality(int Value);
	void SetToDefaults();
	void SetTextureQuality(int Value);
	void SetShadowQuality(int Value);
	void SetScreenResolution(const struct FIntPoint& Resolution);
	void SetResolutionScaleValueEx(float NewScaleValue);
	void SetResolutionScaleValue(int NewScaleValue);
	void SetResolutionScaleNormalized(float NewScaleNormalized);
	void SetPostProcessingQuality(int Value);
	void SetOverallScalabilityLevel(int Value);
	void SetFullscreenMode(TEnumAsByte<EWindowMode> InFullscreenMode);
	void SetFrameRateLimit(float NewLimit);
	void SetFoliageQuality(int Value);
	void SetBenchmarkFallbackValues();
	void SetAudioQualityLevel(int QualityLevel);
	void SetAntiAliasingQuality(int Value);
	void SaveSettings();
	void RunHardwareBenchmark(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	void RevertVideoMode();
	void ResetToCurrentSettings();
	void LoadSettings(bool bForceReload);
	bool IsVSyncEnabled();
	bool IsVSyncDirty();
	bool IsScreenResolutionDirty();
	bool IsHDREnabled();
	bool IsFullscreenModeDirty();
	bool IsDirty();
	int GetVisualEffectQuality();
	int GetViewDistanceQuality();
	int GetTextureQuality();
	int GetShadowQuality();
	struct FIntPoint GetScreenResolution();
	void GetResolutionScaleInformationEx(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue);
	void GetResolutionScaleInformation(float* CurrentScaleNormalized, int* CurrentScaleValue, int* MinScaleValue, int* MaxScaleValue);
	int GetPostProcessingQuality();
	int GetOverallScalabilityLevel();
	struct FIntPoint GetLastConfirmedScreenResolution();
	TEnumAsByte<EWindowMode> GetLastConfirmedFullscreenMode();
	class UGameUserSettings* STATIC_GetGameUserSettings();
	TEnumAsByte<EWindowMode> GetFullscreenMode();
	float GetFrameRateLimit();
	int GetFoliageQuality();
	struct FIntPoint GetDesktopResolution();
	struct FIntPoint STATIC_GetDefaultWindowPosition();
	TEnumAsByte<EWindowMode> STATIC_GetDefaultWindowMode();
	float GetDefaultResolutionScale();
	struct FIntPoint STATIC_GetDefaultResolution();
	int GetCurrentHDRDisplayNits();
	int GetAudioQualityLevel();
	int GetAntiAliasingQuality();
	void EnableHDRDisplayOutput(bool bEnable, int DisplayNits);
	void ConfirmVideoMode();
	void ApplySettings(bool bCheckForCommandLineOverrides);
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
	void ApplyNonResolutionSettings();
	void ApplyHardwareBenchmarkResults();
};


// Class Engine.StaticMeshComponent
// 0x0080 (0x0880 - 0x0800)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0800(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void SetForcedLodModel(int NewForcedLodModel);
	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Engine.ArrowComponent
// 0x0020 (0x0750 - 0x0730)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}


	void SetArrowColor_New(const struct FLinearColor& NewColor);
	void SetArrowColor_DEPRECATED(const struct FColor& NewColor);
};


// Class Engine.SaveGame
// 0x0000 (0x0028 - 0x0028)
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.GameInstance
// 0x00B8 (0x00E0 - 0x0028)
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}


	void ReceiveShutdown();
	void ReceiveInit();
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void DebugRemovePlayer(int ControllerId);
	void DebugCreatePlayer(int ControllerId);
};


// Class Engine.BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}


	struct FStringAssetReference STATIC_MakeStringAssetReference(const struct FString& AssetLongPathname);
};


// Class Engine.GameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void STATIC_UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& EndPos, float OverrideGravityZ, float ArcParam, struct FVector* OutLaunchVelocity);
	class UAudioComponent* STATIC_SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	class UAudioComponent* STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	class UAudioComponent* STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings);
	class UObject* STATIC_SpawnObject(class UClass* ObjectClass, class UObject* Outer);
	class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	class UAudioComponent* STATIC_SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	class UDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);
	class UDecalComponent* STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	void STATIC_SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	void STATIC_SetSubtitlesEnabled(bool bEnabled);
	void STATIC_SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
	void STATIC_SetPlayerControllerID(class APlayerController* Player, int ControllerId);
	void STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
	void STATIC_SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec);
	void STATIC_SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
	bool STATIC_SetGamePaused(class UObject* WorldContextObject, bool bPaused);
	void STATIC_SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix);
	bool STATIC_SaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex);
	void STATIC_RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
	void STATIC_PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	bool STATIC_ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition);
	bool STATIC_PredictProjectilePath(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	void STATIC_PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	void STATIC_PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings);
	void STATIC_PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	struct FString STATIC_ParseOption(const struct FString& Options, const struct FString& Key);
	void STATIC_OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& Options);
	struct FHitResult STATIC_MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float time, const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, const struct FName& HitBoneName, int HitItem, int FaceIndex, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void STATIC_LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	class USaveGame* STATIC_LoadGameFromSlot(const struct FString& SlotName, int UserIndex);
	bool STATIC_IsGamePaused(class UObject* WorldContextObject);
	bool STATIC_HasOption(const struct FString& Options, const struct FString& InKey);
	int STATIC_GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	struct FIntVector STATIC_GetWorldOriginLocation(class UObject* WorldContextObject);
	float STATIC_GetWorldDeltaSeconds(class UObject* WorldContextObject);
	TEnumAsByte<EPhysicalSurface> STATIC_GetSurfaceType(const struct FHitResult& Hit);
	class ULevelStreaming* STATIC_GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName);
	float STATIC_GetRealTimeSeconds(class UObject* WorldContextObject);
	class APawn* STATIC_GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex);
	int STATIC_GetPlayerControllerID(class APlayerController* Player);
	class APlayerController* STATIC_GetPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	class ACharacter* STATIC_GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerCameraManager* STATIC_GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex);
	struct FString STATIC_GetPlatformName();
	class UClass* STATIC_GetObjectClass(class UObject* Object);
	void STATIC_GetKeyValue(const struct FString& Pair, struct FString* Key, struct FString* Value);
	int STATIC_GetIntOption(const struct FString& Options, const struct FString& Key, int DefaultValue);
	float STATIC_GetGlobalTimeDilation(class UObject* WorldContextObject);
	class AGameState* STATIC_GetGameState(class UObject* WorldContextObject);
	class AGameMode* STATIC_GetGameMode(class UObject* WorldContextObject);
	class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
	class UReverbEffect* STATIC_GetCurrentReverbEffect(class UObject* WorldContextObject);
	struct FString STATIC_GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);
	float STATIC_GetAudioTimeSeconds(class UObject* WorldContextObject);
	void STATIC_GetAllActorsWithTag(class UObject* WorldContextObject, const struct FName& Tag, TArray<class AActor*>* OutActors);
	void STATIC_GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors);
	void STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void STATIC_GetActorArrayBounds(TArray<class AActor*> Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	struct FVector STATIC_GetActorArrayAverageLocation(TArray<class AActor*> Actors);
	void STATIC_GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds);
	void STATIC_FlushLevelStreaming(class UObject* WorldContextObject);
	class AActor* STATIC_FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	bool STATIC_FindCollisionUV(const struct FHitResult& Hit, int UVChannel, struct FVector2D* UV);
	void STATIC_EnableLiveStreaming(bool Enable);
	bool STATIC_DoesSaveGameExist(const struct FString& SlotName, int UserIndex);
	bool STATIC_DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
	bool STATIC_DeleteGameInSlot(const struct FString& SlotName, int UserIndex);
	void STATIC_DeactivateReverbEffect(class UObject* WorldContextObject, const struct FName& TagName);
	class UAudioComponent* STATIC_CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings);
	class USaveGame* STATIC_CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint);
	class USaveGame* STATIC_CreateSaveGameObject(class UClass* SaveGameClass);
	class APlayerController* STATIC_CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn);
	void STATIC_ClearSoundMixModifiers(class UObject* WorldContextObject);
	void STATIC_ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);
	void STATIC_CancelAsyncLoading();
	void STATIC_BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* time, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem, int* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd);
	bool STATIC_BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity);
	class AActor* STATIC_BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
	class AActor* STATIC_BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	class AActor* STATIC_BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, TEnumAsByte<ESpawnActorCollisionHandlingMethod> CollisionHandlingOverride, class AActor* Owner);
	bool STATIC_AreSubtitlesEnabled();
	bool STATIC_AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	void STATIC_ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	void STATIC_ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime);
};


// Class Engine.HUD
// 0x00E0 (0x0510 - 0x0430)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0430(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void ShowHUD();
	void ShowDebugToggleSubCategory(const struct FName& Category);
	void ShowDebugForReticleTargetToggle(class UClass* DesiredClass);
	void ShowDebug(const struct FName& DebugType);
	void RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease(const struct FName& BoxName);
	void ReceiveHitBoxEndCursorOver(const struct FName& BoxName);
	void ReceiveHitBoxClick(const struct FName& BoxName);
	void ReceiveHitBoxBeginCursorOver(const struct FName& BoxName);
	void ReceiveDrawHUD(int SizeX, int SizeY);
	struct FVector Project(const struct FVector& Location);
	void GetTextSize(const struct FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight);
	class APlayerController* GetOwningPlayerController();
	class APawn* GetOwningPawn();
	void GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors);
	void DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	void DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawText(const struct FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
	void DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	void DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color);
	void DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	void DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor, float LineThickness);
	void Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection);
	void AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& InName, bool bConsumesInput, int Priority);
	void AddDebugText(const struct FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow);
};


// Class Engine.Player
// 0x0020 (0x0048 - 0x0028)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x0148 (0x0190 - 0x0048)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0048(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0010 (0x0440 - 0x0430)
class AStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.NavRelevantComponent
// 0x0030 (0x0120 - 0x00F0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class Engine.NavLinkCustomComponent
// 0x0110 (0x0230 - 0x0120)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0120(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomComponent");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x1600 (0x1A30 - 0x0430)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1600];                                    // 0x0430(0x1600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}


	void StopCameraShake(class UCameraShake* ShakeInstance, bool bImmediately);
	void StopCameraFade();
	void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	void StopAllInstancesOfCameraShake(class UClass* Shake, bool bImmediately);
	void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	void StopAllCameraShakes(bool bImmediately);
	void StopAllCameraAnims(bool bImmediate);
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	class UCameraShake* PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class APlayerController* GetOwningPlayerController();
	float GetFOVAngle();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	class UCameraModifier* FindCameraModifierByClass(class UClass* ModifierClass);
	void ClearCameraLensEffects();
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	class UCameraModifier* AddNewCameraModifier(class UClass* ModifierClass);
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass* LensEffectEmitterClass);
};


// Class Engine.SkeletalMeshActor
// 0x0080 (0x04B0 - 0x0430)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0430(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};


// Class Engine.ShapeComponent
// 0x0020 (0x0750 - 0x0730)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0010 (0x0760 - 0x0750)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}


	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};


// Class Engine.WorldSettings
// 0x01B0 (0x05E0 - 0x0430)
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0430(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}


	void OnRep_WorldGravityZ();
};


// Class Engine.LevelStreaming
// 0x0138 (0x0160 - 0x0028)
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}


	bool IsStreamingStatePending();
	bool IsLevelVisible();
	bool IsLevelLoaded();
	class ALevelScriptActor* GetLevelScriptActor();
	class ULevelStreaming* CreateInstance(const struct FString& UniqueInstanceName);
};


// Class Engine.MaterialExpression
// 0x0048 (0x0070 - 0x0028)
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.NavArea
// 0x0018 (0x0040 - 0x0028)
class UNavArea : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x00A0 (0x0920 - 0x0880)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0880(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	void SetCullDistances(int StartCullDistance, int EndCullDistance);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	TArray<int> GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0120 (0x0A40 - 0x0920)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0920(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}


	bool RemoveInstances(TArray<int> InstancesToRemove);
};


// Class Engine.MaterialInterface
// 0x0030 (0x0058 - 0x0028)
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	class UPhysicalMaterial* GetPhysicalMaterial();
	class UMaterial* GetBaseMaterial();
};


// Class Engine.MaterialInstance
// 0x0168 (0x01C0 - 0x0058)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0058(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000 (0x01C0 - 0x01C0)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintAsyncActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.BlueprintGeneratedClass
// 0x00D0 (0x0320 - 0x0250)
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0250(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.CameraComponent
// 0x0540 (0x08A0 - 0x0360)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0360(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}


	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
	void SetProjectionMode(TEnumAsByte<ECameraProjectionMode> InProjectionMode);
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
	void SetOrthoWidth(float InOrthoWidth);
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
	void SetFieldOfView(float InFieldOfView);
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
	void SetAspectRatio(float InAspectRatio);
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.CameraActor
// 0x04F0 (0x0920 - 0x0430)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4F0];                                     // 0x0430(0x04F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	int GetAutoActivatePlayerIndex();
};


// Class Engine.AISystemBase
// 0x0020 (0x0048 - 0x0028)
class UAISystemBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0010 (0x00A8 - 0x0098)
class UUserDefinedStruct : public UScriptStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.NavigationQueryFilter
// 0x0048 (0x0070 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationQueryFilter");
		return ptr;
	}

};


// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000 (0x0028 - 0x0028)
class UOnlineBlueprintCallProxyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.Model
// 0x0540 (0x0568 - 0x0028)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0028(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0078 (0x00A0 - 0x0028)
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphPin_Deprecated
// 0x00E8 (0x0110 - 0x0028)
class UEdGraphPin_Deprecated : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0028 (0x0050 - 0x0028)
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x0140 (0x0190 - 0x0050)
class UBlueprint : public UBlueprintCore
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0050(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.Level
// 0x0378 (0x03A0 - 0x0028)
class ULevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x378];                                     // 0x0028(0x0378) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0000 (0x0430 - 0x0430)
class AAmbientSound : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void Stop();
	void Play(float StartTime);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class Engine.BrushShape
// 0x0000 (0x0460 - 0x0460)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x0050 (0x04B0 - 0x0460)
class AAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0460(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}


	void SetReverbSettings(const struct FReverbSettings& NewReverbSettings);
	void SetPriority(float NewPriority);
	void SetInteriorSettings(const struct FInteriorSettings& NewInteriorSettings);
	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
};


// Class Engine.BlockingVolume
// 0x0000 (0x0460 - 0x0460)
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraBlockingVolume
// 0x0000 (0x0460 - 0x0460)
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0020 (0x0480 - 0x0460)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0460(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.HLODMeshCullingVolume
// 0x0000 (0x0460 - 0x0460)
class AHLODMeshCullingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HLODMeshCullingVolume");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x0020 (0x0480 - 0x0460)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0460(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x0460 - 0x0460)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000 (0x0460 - 0x0460)
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0010 (0x0470 - 0x0460)
class ANavMeshBoundsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.NavigationTypes
// 0x0000 (0x0028 - 0x0028)
class UNavigationTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTypes");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000 (0x0028 - 0x0028)
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.NavModifierVolume
// 0x0010 (0x0470 - 0x0460)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class Engine.PhysicsVolume
// 0x0010 (0x0470 - 0x0460)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x0470 - 0x0470)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000 (0x0470 - 0x0470)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0030 (0x04A0 - 0x0470)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0470(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.BlendableInterface
// 0x0000 (0x0028 - 0x0028)
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000 (0x0028 - 0x0028)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0028 - 0x0028)
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x04E0 (0x0940 - 0x0460)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x4E0];                                     // 0x0460(0x04E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x0490 - 0x0460)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0460(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x0460 - 0x0460)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.PreCullTrianglesVolume
// 0x0000 (0x0460 - 0x0460)
class APreCullTrianglesVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreCullTrianglesVolume");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0138 (0x0160 - 0x0028)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}


	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


// Class Engine.InputComponent
// 0x0078 (0x0168 - 0x00F0)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	bool WasControllerKeyJustReleased(const struct FKey& Key);
	bool WasControllerKeyJustPressed(const struct FKey& Key);
	bool IsControllerKeyDown(const struct FKey& Key);
	void GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	struct FVector GetControllerVectorKeyState(const struct FKey& Key);
	void GetControllerMouseDelta(float* DeltaX, float* DeltaY);
	float GetControllerKeyTimeDown(const struct FKey& Key);
	void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetControllerAnalogKeyState(const struct FKey& Key);
};


// Class Engine.CurveBase
// 0x0008 (0x0030 - 0x0028)
class UCurveBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void GetValueRange(float* MinValue, float* MaxValue);
	void GetTimeRange(float* MinTime, float* MaxTime);
};


// Class Engine.CurveFloat
// 0x0080 (0x00B0 - 0x0030)
class UCurveFloat : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}


	float GetFloatValue(float InTime);
};


// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0040 - 0x0028)
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.DebugCameraController
// 0x0040 (0x07A0 - 0x0760)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0760(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}


	void ToggleDisplay();
	void ShowDebugSelectedInfo();
	void ReceiveOnDeactivate(class APlayerController* RestoredPC);
	void ReceiveOnActorSelected(class AActor* NewSelectedActor, const struct FVector& SelectHitLocation, const struct FVector& SelectHitNormal, const struct FHitResult& Hit);
	void ReceiveOnActivate(class APlayerController* OriginalPC);
	class AActor* GetSelectedActor();
};


// Class Engine.DecalActor
// 0x0000 (0x0430 - 0x0430)
class ADecalActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}


	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.DestructibleActor
// 0x0020 (0x0450 - 0x0430)
class ADestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleActor");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0x0000 (0x0430 - 0x0430)
class ADocumentationActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x0050 (0x0480 - 0x0430)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void ToggleActive();
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void OnRep_bCurrentlyActive();
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	bool IsActive();
	void Deactivate();
	void Activate();
};


// Class Engine.EmitterCameraLensEffectBase
// 0x0060 (0x04E0 - 0x0480)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0480(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0x0000 (0x0510 - 0x0510)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.AtmosphericFog
// 0x0000 (0x0430 - 0x0430)
class AAtmosphericFog : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0010 (0x0440 - 0x0430)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.NavigationObjectBase
// 0x0020 (0x0450 - 0x0430)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0010 (0x0460 - 0x0450)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.GameNetworkManager
// 0x0070 (0x04A0 - 0x0430)
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0430(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.GameSession
// 0x0010 (0x0440 - 0x0430)
class AGameSession : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.GameState
// 0x0060 (0x0490 - 0x0430)
class AGameState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0430(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}


	void OnRep_SpectatorClass();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_MatchState();
	void OnRep_GameModeClass();
	void OnRep_ElapsedTime();
	float GetServerWorldTimeSeconds();
};


// Class Engine.PlayerState
// 0x0090 (0x04C0 - 0x0430)
class APlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0430(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}


	void ReceiveOverrideWith(class APlayerState* OldPlayerState);
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_bIsInactive();
};


// Class Engine.SkyLight
// 0x0010 (0x0440 - 0x0430)
class ASkyLight : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.WindDirectionalSource
// 0x0000 (0x0430 - 0x0430)
class AWindDirectionalSource : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x0000 (0x0430 - 0x0430)
class ALevelBounds : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x0000 (0x0430 - 0x0430)
class ALevelScriptActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}


	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	bool RemoteEvent(const struct FName& EventName);
	void LevelReset();
};


// Class Engine.LightComponentBase
// 0x0030 (0x0390 - 0x0360)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}


	void SetCastShadows(bool bNewValue);
	struct FLinearColor GetLightColor();
};


// Class Engine.LightComponent
// 0x0150 (0x04E0 - 0x0390)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0390(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void SetTemperature(float NewTemperature);
	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightFunctionDisabledBrightness(float NewValue);
	void SetLightColor(const struct FLinearColor& NewLightColor, bool bSRGB);
	void SetIntensity(float NewIntensity);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetIESTexture(class UTextureLightProfile* NewValue);
	void SetEnableLightShaftBloom(bool bNewValue);
	void SetBloomTint(const struct FColor& NewValue);
	void SetBloomThreshold(float NewValue);
	void SetBloomScale(float NewValue);
	void SetAffectTranslucentLighting(bool bNewValue);
	void SetAffectDynamicIndirectLighting(bool bNewValue);
};


// Class Engine.Light
// 0x0010 (0x0440 - 0x0430)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void ToggleEnabled();
	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetEnabled(bool bSetEnabled);
	void SetCastShadows(bool bNewValue);
	void SetBrightness(float NewBrightness);
	void SetAffectTranslucentLighting(bool bNewValue);
	void OnRep_bEnabled();
	bool IsEnabled();
	struct FLinearColor GetLightColor();
	float GetBrightness();
};


// Class Engine.DirectionalLight
// 0x0000 (0x0440 - 0x0440)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0000 (0x0440 - 0x0440)
class APointLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void SetRadius(float NewRadius);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
};


// Class Engine.SpotLight
// 0x0000 (0x0440 - 0x0440)
class ASpotLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x0440 - 0x0440)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.LightmassPortal
// 0x0000 (0x0430 - 0x0430)
class ALightmassPortal : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x0030 (0x0460 - 0x0430)
class ALODActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0010 (0x0440 - 0x0430)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x0120 (0x0550 - 0x0430)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0430(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void Stop();
	void SetPosition(float NewPosition, bool bJump);
	void SetLoopingState(bool bNewLooping);
	void Reverse();
	void Play();
	void Pause();
	void EnableGroupByName(const struct FString& GroupName, bool bEnable);
	void ChangePlaybackDirection();
};


// Class Engine.MatineeActorCameraAnim
// 0x0000 (0x0550 - 0x0550)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.NavigationData
// 0x01A0 (0x05D0 - 0x0430)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0430(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationData");
		return ptr;
	}

};


// Class Engine.AbstractNavData
// 0x0000 (0x05D0 - 0x05D0)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AbstractNavData");
		return ptr;
	}

};


// Class Engine.NavigationGraph
// 0x0000 (0x05D0 - 0x05D0)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraph");
		return ptr;
	}

};


// Class Engine.RecastNavMesh
// 0x0100 (0x06D0 - 0x05D0)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x05D0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMesh");
		return ptr;
	}

};


// Class Engine.NavigationGraphNode
// 0x0000 (0x0430 - 0x0430)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNode");
		return ptr;
	}

};


// Class Engine.PlayerStartPIE
// 0x0000 (0x0460 - 0x0460)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavigationTestingActor
// 0x0100 (0x0530 - 0x0430)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0430(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTestingActor");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0028 (0x0050 - 0x0028)
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkHostInterface");
		return ptr;
	}

};


// Class Engine.NavLinkProxy
// 0x0050 (0x0480 - 0x0430)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};


// Class Engine.Note
// 0x0000 (0x0430 - 0x0430)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000 (0x0430 - 0x0430)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x02A8 (0x02D0 - 0x0028)
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0028 - 0x0028)
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0218 (0x0240 - 0x0028)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0028(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}


	int NumSockets();
	bool IsSectionUsingCloth(int InSectionIndex, bool bCheckCorrespondingSections);
	class USkeletalMeshSocket* GetSocketByIndex(int Index);
	struct FBoxSphereBounds GetImportedBounds();
	struct FBoxSphereBounds GetBounds();
	class USkeletalMeshSocket* FindSocketAndIndex(const struct FName& InSocketName, int* OutIndex);
	class USkeletalMeshSocket* FindSocket(const struct FName& InSocketName);
};


// Class Engine.AnimationAsset
// 0x0040 (0x0068 - 0x0028)
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.DefaultPawn
// 0x0020 (0x04B0 - 0x0490)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0490(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}


	void TurnAtRate(float Rate);
	void Turn(float Val);
	void MoveUp_World(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LookUpAtRate(float Rate);
	void LookUp(float Val);
};


// Class Engine.SpectatorPawn
// 0x0000 (0x04B0 - 0x04B0)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.WheeledVehicle
// 0x0010 (0x04A0 - 0x0490)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicle");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0000 (0x0430 - 0x0430)
class AReflectionCapture : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000 (0x0430 - 0x0430)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0430 - 0x0430)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0010 (0x0440 - 0x0430)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000 (0x0430 - 0x0430)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0020 (0x0450 - 0x0430)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsThruster
// 0x0000 (0x0430 - 0x0430)
class APhysicsThruster : public ARigidBodyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0000 (0x0430 - 0x0430)
class ARadialForceActor : public ARigidBodyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}


	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};


// Class Engine.SceneCapture
// 0x0000 (0x0430 - 0x0430)
class ASceneCapture : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.PlanarReflection
// 0x0010 (0x0440 - 0x0430)
class APlanarReflection : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCapture2D
// 0x0010 (0x0440 - 0x0430)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCaptureCube
// 0x0010 (0x0440 - 0x0430)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.MatineeAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.SplineMeshActor
// 0x0000 (0x0430 - 0x0430)
class ASplineMeshActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.SubDSurfaceActor
// 0x0010 (0x0440 - 0x0430)
class ASubDSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurfaceActor");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x0000 (0x0430 - 0x0430)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0000 (0x0430 - 0x0430)
class ATextRenderActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0010 (0x0440 - 0x0430)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0x0000 (0x0440 - 0x0440)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000 (0x0440 - 0x0440)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0x0000 (0x0440 - 0x0440)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0000 (0x0430 - 0x0430)
class AVectorFieldVolume : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0050 (0x0140 - 0x00F0)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}


	void ApplicationLifetimeDelegate__DelegateSignature();
};


// Class Engine.SplineComponent
// 0x00F0 (0x0820 - 0x0730)
class USplineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0730(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void UpdateSpline();
	void SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	void SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void SetSplineWorldPoints(TArray<struct FVector> Points);
	void SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline);
	void SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void SetSplineLocalPoints(TArray<struct FVector> Points);
	void SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void SetDrawDebug(bool bShow);
	void SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
	void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
	void RemoveSplinePoint(int Index, bool bUpdateSpline);
	bool IsClosedLoop();
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	struct FRotator GetWorldRotationAtTime(float time, bool bUseConstantVelocity);
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldLocationAtTime(float time, bool bUseConstantVelocity);
	struct FVector GetWorldLocationAtSplinePoint(int PointIndex);
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldDirectionAtTime(float time, bool bUseConstantVelocity);
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	struct FVector GetUpVectorAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform GetTransformAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	struct FTransform GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector GetTangentAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	TEnumAsByte<ESplinePointType> GetSplinePointType(int PointIndex);
	float GetSplineLength();
	struct FVector GetScaleAtTime(float time, bool bUseConstantVelocity);
	struct FVector GetScaleAtSplinePoint(int PointIndex);
	struct FVector GetScaleAtDistanceAlongSpline(float Distance);
	struct FRotator GetRotationAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FRotator GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	float GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	int GetNumberOfSplinePoints();
	struct FVector GetLocationAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	void GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	struct FVector GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetInputKeyAtDistanceAlongSpline(float Distance);
	float GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	struct FVector GetDirectionAtTime(float time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindScaleClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FRotator FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FVector FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void ClearSplinePoints(bool bUpdateSpline);
	void AddSplineWorldPoint(const struct FVector& Position);
	void AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void AddSplineLocalPoint(const struct FVector& Position);
	void AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline);
	void AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline);
};


// Class Engine.InterpToMovementComponent
// 0x00A0 (0x01D8 - 0x0138)
class UInterpToMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0138(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}


	void StopSimulating(const struct FHitResult& HitResult);
	void RestartMovement(float InitialDirection);
	void OnInterpToWaitEndDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float time);
	void OnInterpToWaitBeginDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float time);
	void OnInterpToStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float time);
	void OnInterpToReverseDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float time);
	void OnInterpToResetDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float time);
	void FinaliseControlPoints();
};


// Class Engine.World
// 0x0AA8 (0x0AD0 - 0x0028)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0xAA8];                                     // 0x0028(0x0AA8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.NavigationSystem
// 0x0448 (0x0470 - 0x0028)
class UNavigationSystem : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x448];                                     // 0x0028(0x0448) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(TEnumAsByte<ENavDataGatheringModeConfig> NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContext, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContext);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContext);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);
	class UNavigationSystem* STATIC_GetNavigationSystem(class UObject* WorldContext);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContext, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};


// Class Engine.RVOAvoidanceInterface
// 0x0000 (0x0028 - 0x0028)
class URVOAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.NetworkPredictionInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.FloatingPawnMovement
// 0x0018 (0x0190 - 0x0178)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0008 (0x0198 - 0x0190)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.WheeledVehicleMovementComponent
// 0x0148 (0x02C0 - 0x0178)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0178(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class Engine.WheeledVehicleMovementComponent4W
// 0x0170 (0x0430 - 0x02C0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02C0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x0068 (0x01A0 - 0x0138)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0138(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}


	void StopSimulating(const struct FHitResult& HitResult);
	void SetVelocityInLocalSpace(const struct FVector& NewVelocity);
	void OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	struct FVector LimitVelocity(const struct FVector& NewVelocity);
};


// Class Engine.RotatingMovementComponent
// 0x0020 (0x0158 - 0x0138)
class URotatingMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0138(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.NavigationInvokerComponent
// 0x0008 (0x00F8 - 0x00F0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationInvokerComponent");
		return ptr;
	}

};


// Class Engine.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomInterface");
		return ptr;
	}

};


// Class Engine.NavModifierComponent
// 0x0028 (0x0148 - 0x0120)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class Engine.PawnNoiseEmitterComponent
// 0x0028 (0x0118 - 0x00F0)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}


	void MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);
};


// Class Engine.PhysicalAnimationComponent
// 0x0038 (0x0128 - 0x00F0)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00F0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}


	void SetStrengthMultiplyer(float InStrengthMultiplyer);
	void SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);
	void ApplyPhysicalAnimationSettingsBelow(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
	void ApplyPhysicalAnimationSettings(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData);
	void ApplyPhysicalAnimationProfileBelow(const struct FName& BodyName, const struct FName& ProfileName, bool bIncludeSelf, bool bClearNotFound);
};


// Class Engine.PhysicsHandleComponent
// 0x00B0 (0x01A0 - 0x00F0)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}


	void SetTargetRotation(const struct FRotator& NewRotation);
	void SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetTargetLocation(const struct FVector& NewLocation);
	void SetLinearStiffness(float NewLinearStiffness);
	void SetLinearDamping(float NewLinearDamping);
	void SetInterpolationSpeed(float NewInterpolationSpeed);
	void SetAngularStiffness(float NewAngularStiffness);
	void SetAngularDamping(float NewAngularDamping);
	void ReleaseComponent();
	void GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	void GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation);
};


// Class Engine.PlatformEventsComponent
// 0x0020 (0x0110 - 0x00F0)
class UPlatformEventsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}


	bool SupportsConvertibleLaptops();
	void PlatformEventDelegate__DelegateSignature();
	bool IsInTabletMode();
	bool IsInLaptopMode();
};


// Class Engine.AtmosphericFogComponent
// 0x01E0 (0x0540 - 0x0360)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0360(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}


	void StartPrecompute();
	void SetSunMultiplier(float NewSunMultiplier);
	void SetStartDistance(float NewStartDistance);
	void SetPrecomputeParams(float DensityHeight, int MaxScatteringOrder, int InscatterAltitudeSampleNum);
	void SetFogMultiplier(float NewFogMultiplier);
	void SetDistanceScale(float NewDistanceScale);
	void SetDistanceOffset(float NewDistanceOffset);
	void SetDensityOffset(float NewDensityOffset);
	void SetDensityMultiplier(float NewDensityMultiplier);
	void SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	void SetDefaultBrightness(float NewBrightness);
	void SetAltitudeScale(float NewAltitudeScale);
	void DisableSunDisk(bool NewSunDisk);
	void DisableGroundScattering(bool NewGroundScattering);
};


// Class Engine.SoundAttenuation
// 0x00F8 (0x0120 - 0x0028)
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x0210 (0x0570 - 0x0360)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0360(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void Stop();
	void SetWaveParameter(const struct FName& InName, class USoundWave* InWave);
	void SetVolumeMultiplier(float NewVolumeMultiplier);
	void SetUISound(bool bInUISound);
	void SetSound(class USoundBase* NewSound);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetIntParameter(const struct FName& InName, int inInt);
	void SetFloatParameter(const struct FName& InName, float InFloat);
	void SetBoolParameter(const struct FName& InName, bool InBool);
	void Play(float StartTime);
	bool IsPlaying();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	bool BP_GetAttenuationSettingsToApply(struct FAttenuationSettings* OutAttenuationSettings);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	void AdjustAttenuation(const struct FAttenuationSettings& InAttenuationSettings);
};


// Class Engine.ChildActorComponent
// 0x0020 (0x0380 - 0x0360)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}


	void SetChildActorClass(class UClass* InClass);
};


// Class Engine.DecalComponent
// 0x0040 (0x03A0 - 0x0360)
class UDecalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0360(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void SetSortOrder(int Value);
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	float GetFadeStartDelay();
	float GetFadeDuration();
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.ExponentialHeightFogComponent
// 0x0040 (0x03A0 - 0x0360)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0360(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void SetStartDistance(float Value);
	void SetFogMaxOpacity(float Value);
	void SetFogInscatteringColor(const struct FLinearColor& Value);
	void SetFogHeightFalloff(float Value);
	void SetFogDensity(float Value);
	void SetDirectionalInscatteringStartDistance(float Value);
	void SetDirectionalInscatteringExponent(float Value);
	void SetDirectionalInscatteringColor(const struct FLinearColor& Value);
};


// Class Engine.DirectionalLightComponent
// 0x0060 (0x0540 - 0x04E0)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void SetShadowDistanceFadeoutFraction(float NewValue);
	void SetOcclusionMaskDarkness(float NewValue);
	void SetLightShaftOverrideDirection(const struct FVector& NewValue);
	void SetEnableLightShaftOcclusion(bool bNewValue);
	void SetDynamicShadowDistanceStationaryLight(float NewValue);
	void SetDynamicShadowDistanceMovableLight(float NewValue);
	void SetDynamicShadowCascades(int NewValue);
	void SetCascadeTransitionFraction(float NewValue);
	void SetCascadeDistributionExponent(float NewValue);
};


// Class Engine.PointLightComponent
// 0x0020 (0x0500 - 0x04E0)
class UPointLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void SetSourceRadius(float bNewValue);
	void SetSourceLength(float NewValue);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
	void SetAttenuationRadius(float NewRadius);
};


// Class Engine.SpotLightComponent
// 0x0010 (0x0510 - 0x0500)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0500(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.SkyLightComponent
// 0x01B0 (0x0540 - 0x0390)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0390(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}


	void SetOcclusionTint(const struct FColor& InTint);
	void SetMinOcclusion(float InMinOcclusion);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetIntensity(float NewIntensity);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
	void SetCubemap(class UTextureCube* NewCubemap);
	void RecaptureSky();
};


// Class Engine.LightmassPortalComponent
// 0x0010 (0x0370 - 0x0360)
class ULightmassPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}

};


// Class Engine.NavigationGraphNodeComponent
// 0x0030 (0x0390 - 0x0360)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0x0240 (0x05A0 - 0x0360)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0360(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}


	void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearVelocityTarget(const struct FVector& InVelTarget);
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearPositionTarget(const struct FVector& InPosTarget);
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit);
	void SetDisableCollision(bool bDisableCollision);
	void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition);
	void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame);
	void SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2);
	void SetAngularVelocityTarget(const struct FVector& InVelTarget);
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
	void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
	void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
	void SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit);
	float GetCurrentTwist();
	float GetCurrentSwing2();
	float GetCurrentSwing1();
	void GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	void BreakConstraint();
};


// Class Engine.PhysicsSpringComponent
// 0x0030 (0x0390 - 0x0360)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}


	struct FVector GetSpringRestingPoint();
	struct FVector GetSpringDirection();
	struct FVector GetSpringCurrentEndPoint();
	float GetNormalizedCompressionScalar();
};


// Class Engine.PhysicsThrusterComponent
// 0x0010 (0x0370 - 0x0360)
class UPhysicsThrusterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x04E0 (0x0840 - 0x0360)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x4E0];                                     // 0x0360(0x04E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}


	void RemoveBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject);
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.BillboardComponent
// 0x0020 (0x0750 - 0x0730)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}


	void SetUV(int NewU, int NewUL, int NewV, int NewVL);
	void SetSpriteAndUV(class UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL);
	void SetSprite(class UTexture2D* NewSprite);
};


// Class Engine.BrushComponent
// 0x0040 (0x0770 - 0x0730)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0020 (0x0750 - 0x0730)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0040 (0x0770 - 0x0730)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0010 (0x0740 - 0x0730)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}


	void SetElements(TArray<struct FMaterialSpriteElement> NewElements);
	void AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);
};


// Class Engine.DestructibleComponent
// 0x00D0 (0x0A30 - 0x0960)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0960(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class Engine.PoseableMeshComponent
// 0x00D0 (0x0A30 - 0x0960)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0960(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void ResetBoneTransformByName(const struct FName& BoneName);
	struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FRotator GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	void CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy);
};


// Class Engine.SplineMeshComponent
// 0x00A0 (0x0920 - 0x0880)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0880(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}


	void UpdateMesh();
	void SetStartTangent(const struct FVector& StartTangent, bool bUpdateMesh);
	void SetStartScale(const struct FVector2D& StartScale, bool bUpdateMesh);
	void SetStartRoll(float StartRoll, bool bUpdateMesh);
	void SetStartPosition(const struct FVector& StartPos, bool bUpdateMesh);
	void SetStartOffset(const struct FVector2D& StartOffset, bool bUpdateMesh);
	void SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, bool bUpdateMesh);
	void SetSplineUpDir(const struct FVector& InSplineUpDir, bool bUpdateMesh);
	void SetForwardAxis(TEnumAsByte<ESplineMeshAxis> InForwardAxis, bool bUpdateMesh);
	void SetEndTangent(const struct FVector& EndTangent, bool bUpdateMesh);
	void SetEndScale(const struct FVector2D& EndScale, bool bUpdateMesh);
	void SetEndRoll(float EndRoll, bool bUpdateMesh);
	void SetEndPosition(const struct FVector& EndPos, bool bUpdateMesh);
	void SetEndOffset(const struct FVector2D& EndOffset, bool bUpdateMesh);
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
	struct FVector GetStartTangent();
	struct FVector2D GetStartScale();
	float GetStartRoll();
	struct FVector GetStartPosition();
	struct FVector2D GetStartOffset();
	struct FVector GetSplineUpDir();
	TEnumAsByte<ESplineMeshAxis> GetForwardAxis();
	struct FVector GetEndTangent();
	struct FVector2D GetEndScale();
	float GetEndRoll();
	struct FVector GetEndPosition();
	struct FVector2D GetEndOffset();
	float GetBoundaryMin();
	float GetBoundaryMax();
};


// Class Engine.ModelComponent
// 0x0040 (0x0770 - 0x0730)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.NavLinkRenderingComponent
// 0x0000 (0x0730 - 0x0730)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0010 (0x0740 - 0x0730)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavTestRenderingComponent
// 0x0000 (0x0730 - 0x0730)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavTestRenderingComponent");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0110 (0x0138 - 0x0028)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	bool ContainsEmitterType(class UClass* TypeData);
};


// Class Engine.ParticleEmitter
// 0x0138 (0x0160 - 0x0028)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSystemComponent
// 0x02B0 (0x09E0 - 0x0730)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0730(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex);
	void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex);
	void SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex);
	void SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex);
	void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex);
	void SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex);
	void SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint);
	void SetAutoAttachParams(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachLocation> LocationType);
	void SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachmentRule> LocationRule, TEnumAsByte<EAttachmentRule> RotationRule, TEnumAsByte<EAttachmentRule> ScaleRule);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	int GetNumActiveParticles();
	class UMaterialInterface* GetNamedMaterial(const struct FName& InName);
	bool GetBeamTargetTangent(int EmitterIndex, int TargetIndex, struct FVector* OutTangentPoint);
	bool GetBeamTargetStrength(int EmitterIndex, int TargetIndex, float* OutTargetStrength);
	bool GetBeamTargetPoint(int EmitterIndex, int TargetIndex, struct FVector* OutTargetPoint);
	bool GetBeamSourceTangent(int EmitterIndex, int SourceIndex, struct FVector* OutTangentPoint);
	bool GetBeamSourceStrength(int EmitterIndex, int SourceIndex, float* OutSourceStrength);
	bool GetBeamSourcePoint(int EmitterIndex, int SourceIndex, struct FVector* OutSourcePoint);
	bool GetBeamEndPoint(int EmitterIndex, struct FVector* OutEndPoint);
	void GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity);
	void EndTrails();
	class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(const struct FName& InName, class UMaterialInterface* SourceMaterial);
	void BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
};


// Class Engine.CapsuleComponent
// 0x0010 (0x0760 - 0x0750)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}


	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	void GetUnscaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void GetScaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight_WithoutHemisphere();
	float GetScaledCapsuleHalfHeight();
};


// Class Engine.SphereComponent
// 0x0010 (0x0760 - 0x0750)
class USphereComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}


	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	float GetUnscaledSphereRadius();
	float GetShapeScale();
	float GetScaledSphereRadius();
};


// Class Engine.DrawSphereComponent
// 0x0000 (0x0760 - 0x0760)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.SubDSurfaceComponent
// 0x0020 (0x0750 - 0x0730)
class USubDSurfaceComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0730(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurfaceComponent");
		return ptr;
	}


	bool SetMesh(class USubDSurface* NewMesh);
};


// Class Engine.TextRenderComponent
// 0x0050 (0x0780 - 0x0730)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0730(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}


	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetVertSpacingAdjust(float Value);
	void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetTextMaterial(class UMaterialInterface* Material);
	void SetText(const struct FString& Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	void SetFont(class UFont* Value);
	void K2_SetText(const struct FText& Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class Engine.VectorFieldComponent
// 0x0030 (0x0760 - 0x0730)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0730(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}


	void SetIntensity(float NewIntensity);
};


// Class Engine.RadialForceComponent
// 0x0030 (0x0390 - 0x0360)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}


	void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
	void FireImpulse();
	void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
};


// Class Engine.ReflectionCaptureComponent
// 0x0080 (0x03E0 - 0x0360)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0360(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.BoxReflectionCaptureComponent
// 0x0010 (0x03F0 - 0x03E0)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0010 (0x03F0 - 0x03E0)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0010 (0x03F0 - 0x03E0)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x00A0 (0x0400 - 0x0360)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0360(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void ShowOnlyComponent(class UPrimitiveComponent* InComponent);
	void ShowOnlyActorComponents(class AActor* InActor);
	void HideComponent(class UPrimitiveComponent* InComponent);
	void HideActorComponents(class AActor* InActor);
};


// Class Engine.PlanarReflectionComponent
// 0x0090 (0x0490 - 0x0400)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0400(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent2D
// 0x04F0 (0x08F0 - 0x0400)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x4F0];                                     // 0x0400(0x04F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}


	void CaptureScene();
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.SceneCaptureComponentCube
// 0x0000 (0x0400 - 0x0400)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}


	void CaptureScene();
};


// Class Engine.SpringArmComponent
// 0x0090 (0x03F0 - 0x0360)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0360(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

};


// Class Engine.StereoLayerComponent
// 0x0080 (0x03E0 - 0x0360)
class UStereoLayerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0360(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}


	void SetUVRect(const struct FBox2D& InUVRect);
	void SetTexture(class UTexture* InTexture);
	void SetStereoLayerType(TEnumAsByte<EStereoLayerType> InLayerType);
	void SetQuadSize(const struct FVector2D& InQuadSize);
	void SetPriority(int InPriority);
	void MarkTextureForUpdate();
	struct FBox2D GetUVRect();
	class UTexture* GetTexture();
	TEnumAsByte<EStereoLayerType> GetStereoLayerType();
	struct FVector2D GetQuadSize();
	int GetPriority();
};


// Class Engine.WindDirectionalSourceComponent
// 0x0020 (0x0380 - 0x0360)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x00E0 (0x01D0 - 0x00F0)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00F0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}


	void Stop();
	void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
	void SetTimelineLength(float NewLength);
	void SetPlayRate(float NewRate);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	void SetAsyncEnabled(bool bAsync);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_Timeline();
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetTimelineLength();
	float GetPlayRate();
	float GetPlaybackPosition();
};


// Class Engine.AnimSequenceBase
// 0x0028 (0x0090 - 0x0068)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}


	float GetPlayLength();
};


// Class Engine.AnimCompositeBase
// 0x0000 (0x0090 - 0x0090)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0010 (0x00A0 - 0x0090)
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x0108 (0x0198 - 0x0090)
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0090(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}


	float GetSectionLength(const struct FName& InSectionName);
};


// Class Engine.AnimSequence
// 0x00F8 (0x0188 - 0x0090)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0090(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x00C8 (0x0130 - 0x0068)
class UBlendSpaceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0068(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0008 (0x0138 - 0x0130)
class UBlendSpace : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0138 - 0x0138)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0008 (0x0138 - 0x0130)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0138 - 0x0138)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.PoseAsset
// 0x0118 (0x0180 - 0x0068)
class UPoseAsset : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0068(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}

};


// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0028 - 0x0028)
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.AnimClassInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimClassInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}

};


// Class Engine.AnimClassData
// 0x0070 (0x0098 - 0x0028)
class UAnimClassData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0018 (0x0040 - 0x0028)
class UAnimCompress : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_Automatic : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0060 - 0x0040)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0080 (0x00E0 - 0x0060)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0050 - 0x0040)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x00E8 (0x05D8 - 0x04F0)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x04F0(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}


	void StopAnim();
	void SetReverse(bool bInReverse);
	void SetPreviewCurveOverride(const struct FName& PoseName, float Value, bool bRemoveIfZero);
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
	void SetPosition(float InPosition, bool bFireNotifies);
	void SetPlayRate(float InPlayRate);
	void SetPlaying(bool bIsPlaying);
	void SetLooping(bool bIsLooping);
	void SetBlendSpaceInput(const struct FVector& InBlendInput);
	void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	float GetLength();
};


// Class Engine.VehicleAnimInstance
// 0x0000 (0x04F0 - 0x04F0)
class UVehicleAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class Engine.AnimMetaData
// 0x0000 (0x0028 - 0x0028)
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x0048 (0x0080 - 0x0038)
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlaySound
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}


	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


// Class Engine.AnimSet
// 0x00C8 (0x00F0 - 0x0028)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AssetImportData
// 0x0000 (0x0028 - 0x0028)
class UAssetImportData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.AutomationTestSettings
// 0x02F0 (0x0318 - 0x0028)
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x0028(0x02F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.NavEdgeProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UNavEdgeProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}

};


// Class Engine.AvoidanceManager
// 0x00E0 (0x0108 - 0x0028)
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}


	bool RegisterMovementComponent(class UMovementComponent* MovementComp, float AvoidanceWeight);
	int GetObjectCount();
	int GetNewAvoidanceUID();
	struct FVector GetAvoidanceVelocityIgnoringUID(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime, int IgnoreThisUID);
	struct FVector GetAvoidanceVelocityForComponent(class UMovementComponent* MovementComp);
	struct FVector GetAvoidanceVelocity(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime);
};


// Class Engine.BlendProfile
// 0x0020 (0x0048 - 0x0028)
class UBlendProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0x0020 (0x01B0 - 0x0190)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0190(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.LevelScriptBlueprint
// 0x0000 (0x0190 - 0x0190)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.PlatformGameInstance
// 0x00B0 (0x0190 - 0x00E0)
class UPlatformGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00E0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}


	void PlatformScreenOrientationChangedDelegate__DelegateSignature(TEnumAsByte<EScreenOrientation> inScreenOrientation);
	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(int inInt);
	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(TArray<unsigned char> inArray);
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(const struct FString& inString);
	void PlatformReceivedLocalNotificationDelegate__DelegateSignature(const struct FString& inString, int inInt);
	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(const struct FString& inString);
	void PlatformDelegate__DelegateSignature();
};


// Class Engine.BlueprintPlatformLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}


	void STATIC_ScheduleLocalNotificationFromNow(int inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent);
	void STATIC_ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent);
	void STATIC_GetLaunchNotification(bool* NotificationLaunchedApp, struct FString* ActivationEvent, int* FireDate);
	void STATIC_ClearAllLocalNotifications();
};


// Class Engine.DataTable
// 0x0058 (0x0080 - 0x0028)
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	void STATIC_GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames);
	bool STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
	void STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, const struct FString& ContextString, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY);
};


// Class Engine.DebugDrawService
// 0x0000 (0x0028 - 0x0028)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0120 (0x0158 - 0x0038)
class UCollisionProfile : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0038(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.KismetSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void STATIC_StackTrace();
	bool STATIC_SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_SphereOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_SphereOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_SphereOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_ShowPlatformSpecificLeaderboardScreen(const struct FString& CategoryName);
	void STATIC_ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	void STATIC_ShowAdBanner(int AdIdIndex, bool bShowOnBottomOfScreen);
	void STATIC_SetWindowTitle(const struct FText& Title);
	void STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled);
	void STATIC_SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value);
	void STATIC_SetUserActivity(const struct FUserActivity& UserActivity);
	void STATIC_SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value);
	void STATIC_SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value);
	void STATIC_SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	void STATIC_SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value);
	void STATIC_SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FString& Value);
	void STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value);
	void STATIC_SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value);
	void STATIC_SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value);
	void STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value);
	void STATIC_SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value);
	void STATIC_SetInterfacePropertyByName(class UObject* Object, const struct FName& PropertyName, const TScriptInterface<class UInterface>& Value);
	void STATIC_SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value);
	void STATIC_SetCollisionProfileNameProperty(class UObject* Object, const struct FName& PropertyName, const struct FCollisionProfileName& Value);
	void STATIC_SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value);
	void STATIC_SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value);
	void STATIC_SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value);
	void STATIC_SetAssetPropertyByName(class UObject* Object, const struct FName& PropertyName, TAssetPtr<class UObject> Value);
	void STATIC_SetAssetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, TAssetPtr<class UClass> Value);
	void STATIC_RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_ResetGamepadAssignmentToController(int ControllerId);
	void STATIC_ResetGamepadAssignments();
	void STATIC_RegisterForRemoteNotifications();
	void STATIC_QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference);
	void STATIC_PrintWarning(const struct FString& inString);
	void STATIC_PrintText(class UObject* WorldContextObject, const struct FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_PrintString(class UObject* WorldContextObject, const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
	void OnAssetClassLoaded__DelegateSignature(class UClass* Loaded);
	void STATIC_MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo);
	struct FText STATIC_MakeLiteralText(const struct FText& Value);
	struct FString STATIC_MakeLiteralString(const struct FString& Value);
	struct FName STATIC_MakeLiteralName(const struct FName& Value);
	int STATIC_MakeLiteralInt(int Value);
	float STATIC_MakeLiteralFloat(float Value);
	unsigned char STATIC_MakeLiteralByte(unsigned char Value);
	bool STATIC_MakeLiteralBool(bool Value);
	void STATIC_LoadAssetClass(class UObject* WorldContextObject, TAssetPtr<class UClass> AssetClass, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadAsset(class UObject* WorldContextObject, TAssetPtr<class UObject> Asset, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool STATIC_LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	void STATIC_LaunchURL(const struct FString& URL);
	void STATIC_K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_UnPauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_UnPauseTimer(class UObject* Object, const struct FString& FunctionName);
	bool STATIC_K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_TimerExistsDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_TimerExists(class UObject* Object, const struct FString& FunctionName);
	struct FTimerHandle STATIC_K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float time, bool bLooping);
	struct FTimerHandle STATIC_K2_SetTimer(class UObject* Object, const struct FString& FunctionName, float time, bool bLooping);
	void STATIC_K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_PauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_PauseTimer(class UObject* Object, const struct FString& FunctionName);
	bool STATIC_K2_IsValidTimerHandle(const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerPausedDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_IsTimerPaused(class UObject* Object, const struct FString& FunctionName);
	bool STATIC_K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerActiveDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_IsTimerActive(class UObject* Object, const struct FString& FunctionName);
	struct FTimerHandle STATIC_K2_InvalidateTimerHandle(struct FTimerHandle* Handle);
	float STATIC_K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float STATIC_K2_GetTimerRemainingTimeDelegate(const struct FScriptDelegate& Delegate);
	float STATIC_K2_GetTimerRemainingTime(class UObject* Object, const struct FString& FunctionName);
	float STATIC_K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float STATIC_K2_GetTimerElapsedTimeDelegate(const struct FScriptDelegate& Delegate);
	float STATIC_K2_GetTimerElapsedTime(class UObject* Object, const struct FString& FunctionName);
	void STATIC_K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_ClearTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_ClearTimer(class UObject* Object, const struct FString& FunctionName);
	void STATIC_K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle);
	bool STATIC_IsValidClass(class UClass* Class);
	bool STATIC_IsValid(class UObject* Object);
	bool STATIC_IsServer(class UObject* WorldContextObject);
	bool STATIC_IsPackagedForDistribution();
	bool STATIC_IsLoggedIn(class APlayerController* SpecificPlayer);
	bool STATIC_IsDedicatedServer(class UObject* WorldContextObject);
	bool STATIC_IsControllerAssignedToGamepad(int ControllerId);
	void STATIC_HideAdBanner();
	bool STATIC_GetVolumeButtonsHandledBySystem();
	struct FString STATIC_GetUniqueDeviceId();
	bool STATIC_GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	int STATIC_GetRenderingMaterialQualityLevel();
	int STATIC_GetRenderingDetailMode();
	TArray<struct FString> STATIC_GetPreferredLanguages();
	struct FString STATIC_GetPlatformUserName();
	struct FString STATIC_GetPathName(class UObject* Object);
	struct FString STATIC_GetObjectName(class UObject* Object);
	int STATIC_GetMinYResolutionForUI();
	int STATIC_GetMinYResolutionFor3DView();
	struct FString STATIC_GetLocalCurrencySymbol();
	struct FString STATIC_GetLocalCurrencyCode();
	float STATIC_GetGameTimeInSeconds(class UObject* WorldContextObject);
	struct FString STATIC_GetGameName();
	struct FString STATIC_GetGameBundleId();
	struct FString STATIC_GetEngineVersion();
	struct FString STATIC_GetDisplayName(class UObject* Object);
	void STATIC_GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	struct FString STATIC_GetClassDisplayName(class UClass* Class);
	int STATIC_GetAdIDCount();
	void STATIC_GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	void STATIC_GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	void STATIC_ForceCloseAdBanner();
	void STATIC_FlushPersistentDebugLines(class UObject* WorldContextObject);
	void STATIC_FlushDebugStrings(class UObject* WorldContextObject);
	void STATIC_ExecuteConsoleCommand(class UObject* WorldContextObject, const struct FString& Command, class APlayerController* SpecificPlayer);
	void STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	void STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration);
	void STATIC_DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration);
	void STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration, float Thickness);
	void STATIC_DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration, float Thickness);
	void STATIC_DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
	void STATIC_DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	void STATIC_DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness);
	void STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration, float Thickness);
	bool STATIC_DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
	void STATIC_Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	class UObject* STATIC_Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);
	class UObject* STATIC_Conv_AssetToObject(TAssetPtr<class UObject> Asset);
	class UClass* STATIC_Conv_AssetClassToClass(TAssetPtr<class UClass> AssetClass);
	void STATIC_ControlScreensaver(bool bAllowScreenSaver);
	bool STATIC_ComponentOverlapComponents_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_ComponentOverlapComponents_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_ComponentOverlapActors_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_ComponentOverlapActors_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_CollectGarbage();
	bool STATIC_CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_CapsuleOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_CapsuleOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_CapsuleOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_CanLaunchURL(const struct FString& URL);
	bool STATIC_BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_BoxOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_BoxOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_BoxOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_BoxOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	struct FDebugFloatHistory STATIC_AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);
	void STATIC_AddEventToTickGroup(TEnumAsByte<ETickingGroup> Group, const struct FScriptDelegate& Action);
};


// Class Engine.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* HFOV, float* VFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
};


// Class Engine.KismetArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void STATIC_SetArrayPropertyByName(class UObject* Object, const struct FName& PropertyName, TArray<int> Value);
	void STATIC_FilterArray(TArray<class AActor*> TargetArray, class UClass* FilterClass, TArray<class AActor*>* FilteredArray);
	void STATIC_Array_Shuffle(TArray<int> TargetArray);
	void STATIC_Array_Set(TArray<int> TargetArray, int Index, int Item, bool bSizeToFit);
	void STATIC_Array_Resize(TArray<int> TargetArray, int Size);
	bool STATIC_Array_RemoveItem(TArray<int> TargetArray, int Item);
	void STATIC_Array_Remove(TArray<int> TargetArray, int IndexToRemove);
	int STATIC_Array_Length(TArray<int> TargetArray);
	int STATIC_Array_LastIndex(TArray<int> TargetArray);
	bool STATIC_Array_IsValidIndex(TArray<int> TargetArray, int IndexToTest);
	void STATIC_Array_Insert(TArray<int> TargetArray, int NewItem, int Index);
	void STATIC_Array_Get(TArray<int> TargetArray, int Index, int* Item);
	int STATIC_Array_Find(TArray<int> TargetArray, int ItemToFind);
	bool STATIC_Array_Contains(TArray<int> TargetArray, int ItemToFind);
	void STATIC_Array_Clear(TArray<int> TargetArray);
	void STATIC_Array_Append(TArray<int> TargetArray, TArray<int> SourceArray);
	int STATIC_Array_AddUnique(TArray<int> TargetArray, int NewItem);
	int STATIC_Array_Add(TArray<int> TargetArray, int NewItem);
};


// Class Engine.KismetGuidLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}


	void STATIC_Parse_StringToGuid(const struct FString& GuidString, struct FGuid* OutGuid, bool* Success);
	bool STATIC_NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	struct FGuid STATIC_NewGuid();
	bool STATIC_IsValid_Guid(const struct FGuid& InGuid);
	void STATIC_Invalidate_Guid(struct FGuid* InGuid);
	bool STATIC_EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	struct FString STATIC_Conv_GuidToString(const struct FGuid& InGuid);
};


// Class Engine.KismetInputLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	bool STATIC_PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	bool STATIC_PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	float STATIC_PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	struct FKey STATIC_PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	bool STATIC_Key_IsVectorAxis(const struct FKey& Key);
	bool STATIC_Key_IsMouseButton(const struct FKey& Key);
	bool STATIC_Key_IsModifierKey(const struct FKey& Key);
	bool STATIC_Key_IsKeyboardKey(const struct FKey& Key);
	bool STATIC_Key_IsGamepadKey(const struct FKey& Key);
	bool STATIC_Key_IsFloatAxis(const struct FKey& Key);
	struct FText STATIC_Key_GetDisplayName(const struct FKey& Key);
	bool STATIC_InputEvent_IsShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRepeat(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsAltDown(const struct FInputEvent& Input);
	int STATIC_GetUserIndex(const struct FKeyEvent& Input);
	struct FKey STATIC_GetKey(const struct FKeyEvent& Input);
	float STATIC_GetAnalogValue(const struct FAnalogInputEvent& Input);
	bool STATIC_EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	bool STATIC_EqualEqual_InputChordInputChord(const struct FInputChord& A, const struct FInputChord& B);
	int STATIC_ControllerEvent_GetUserIndex(const struct FControllerEvent& Input);
	struct FKey STATIC_ControllerEvent_GetEffectingButton(const struct FControllerEvent& Input);
	float STATIC_ControllerEvent_GetAnalogValue(const struct FControllerEvent& Input);
	void STATIC_CalibrateTilt();
};


// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void STATIC_SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	void STATIC_SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, float ParameterValue);
	struct FLinearColor STATIC_GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	float STATIC_GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent);
};


// Class Engine.KismetMathLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	int STATIC_Xor_IntInt(int A, int B);
	float STATIC_VSizeSquared(const struct FVector& A);
	float STATIC_VSize2DSquared(const struct FVector2D& A);
	float STATIC_VSize2D(const struct FVector2D& A);
	float STATIC_VSize(const struct FVector& A);
	struct FVector STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector STATIC_VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector STATIC_VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FDateTime STATIC_UtcNow();
	struct FVector STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector STATIC_TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	struct FDateTime STATIC_Today();
	struct FTransform STATIC_TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode);
	struct FTransform STATIC_TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed);
	struct FTimespan STATIC_TimespanZeroValue();
	float STATIC_TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	struct FTimespan STATIC_TimespanMinValue();
	struct FTimespan STATIC_TimespanMaxValue();
	bool STATIC_TimespanFromString(const struct FString& TimespanString, struct FTimespan* Result);
	struct FTransform STATIC_TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float STATIC_Tan(float A);
	struct FVector STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Subtract_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Subtract_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int STATIC_Subtract_IntInt(int A, int B);
	float STATIC_Subtract_FloatFloat(float A, float B);
	struct FDateTime STATIC_Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	struct FTimespan STATIC_Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	unsigned char STATIC_Subtract_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Square(float A);
	float STATIC_Sqrt(float A);
	float STATIC_Sin(float A);
	int STATIC_SignOfInteger(int A);
	float STATIC_SignOfFloat(float A);
	void STATIC_SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream);
	struct FVector STATIC_SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA);
	struct FTransform STATIC_SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);
	struct FString STATIC_SelectString(const struct FString& A, const struct FString& B, bool bPickA);
	struct FRotator STATIC_SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA);
	class UObject* STATIC_SelectObject(class UObject* A, class UObject* B, bool bSelectA);
	int STATIC_SelectInt(int A, int B, bool bPickA);
	float STATIC_SelectFloat(float A, float B, bool bPickA);
	struct FLinearColor STATIC_SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA);
	class UClass* STATIC_SelectClass(class UClass* A, class UClass* B, bool bSelectA);
	void STATIC_SeedRandomStream(struct FRandomStream* Stream);
	int STATIC_Round(float A);
	struct FRotator STATIC_RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FVector STATIC_RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis);
	struct FRotator STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	struct FRotator STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	void STATIC_RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV);
	void STATIC_RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A);
	void STATIC_ResetRandomStream(const struct FRandomStream& Stream);
	struct FRotator STATIC_REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FVector STATIC_RandomUnitVectorInConeWithYawAndPitch(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
	struct FVector STATIC_RandomUnitVectorInCone(const struct FVector& ConeDir, float ConeHalfAngle);
	struct FVector STATIC_RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	struct FVector STATIC_RandomUnitVector();
	struct FRotator STATIC_RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);
	struct FRotator STATIC_RandomRotator(bool bRoll);
	struct FVector STATIC_RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent);
	int STATIC_RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	int STATIC_RandomIntegerInRange(int Min, int Max);
	int STATIC_RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	int STATIC_RandomInteger(int Max);
	float STATIC_RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	float STATIC_RandomFloatInRange(float Min, float Max);
	float STATIC_RandomFloatFromStream(const struct FRandomStream& Stream);
	float STATIC_RandomFloat();
	bool STATIC_RandomBoolWithWeightFromStream(float Weight, const struct FRandomStream& RandomStream);
	bool STATIC_RandomBoolWithWeight(float Weight);
	bool STATIC_RandomBoolFromStream(const struct FRandomStream& Stream);
	bool STATIC_RandomBool();
	float STATIC_RadiansToDegrees(float A);
	struct FVector STATIC_ProjectVectorOnToVector(const struct FVector& V, const struct FVector& Target);
	struct FVector STATIC_ProjectVectorOnToPlane(const struct FVector& V, const struct FVector& PlaneNormal);
	struct FVector STATIC_ProjectPointOnToPlane(const struct FVector& Point, const struct FVector& PlaneBase, const struct FVector& PlaneNormal);
	bool STATIC_PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance);
	int STATIC_Percent_IntInt(int A, int B);
	float STATIC_Percent_FloatFloat(float A, float B);
	unsigned char STATIC_Percent_ByteByte(unsigned char A, unsigned char B);
	int STATIC_Or_IntInt(int A, int B);
	struct FDateTime STATIC_Now();
	bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool STATIC_NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_NotEqual_IntInt(int A, int B);
	bool STATIC_NotEqual_FloatFloat(float A, float B);
	bool STATIC_NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_NotEqual_ClassClass(class UClass* A, class UClass* B);
	bool STATIC_NotEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_NotEqual_BoolBool(bool A, bool B);
	bool STATIC_Not_PreBool(bool A);
	int STATIC_Not_Int(int A);
	float STATIC_NormalizeToRange(float Value, float RangeMin, float RangeMax);
	struct FRotator STATIC_NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	float STATIC_NormalizeAxis(float Angle);
	struct FVector2D STATIC_Normal2D(const struct FVector2D& A);
	struct FVector STATIC_Normal(const struct FVector& A);
	struct FVector STATIC_NegateVector(const struct FVector& A);
	struct FRotator STATIC_NegateRotator(const struct FRotator& A);
	bool STATIC_NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
	bool STATIC_NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	float STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp);
	float STATIC_MultiplyByPi(float Value);
	struct FVector STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Multiply_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Multiply_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Multiply_TimespanFloat(const struct FTimespan& A, float Scalar);
	struct FRotator STATIC_Multiply_RotatorInt(const struct FRotator& A, int B);
	struct FRotator STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	struct FLinearColor STATIC_Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor STATIC_Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	int STATIC_Multiply_IntInt(int A, int B);
	float STATIC_Multiply_IntFloat(int A, float B);
	float STATIC_Multiply_FloatFloat(float A, float B);
	unsigned char STATIC_Multiply_ByteByte(unsigned char A, unsigned char B);
	struct FVector STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	void STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	void STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	void STATIC_MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue);
	void STATIC_MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	int STATIC_Min(int A, int B);
	void STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	void STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	void STATIC_MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue);
	int STATIC_Max(int A, int B);
	float STATIC_MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	float STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	struct FVector2D STATIC_MakeVector2D(float X, float Y);
	struct FVector STATIC_MakeVector(float X, float Y, float Z);
	struct FTransform STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	struct FTimespan STATIC_MakeTimespan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds);
	struct FRotator STATIC_MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	struct FRotator STATIC_MakeRotFromZ(const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	struct FRotator STATIC_MakeRotFromY(const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromX(const struct FVector& X);
	struct FRotator STATIC_MakeRotator(float Roll, float Pitch, float Yaw);
	struct FRotator STATIC_MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up);
	struct FRandomStream STATIC_MakeRandomStream(int InitialSeed);
	float STATIC_MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
	struct FPlane STATIC_MakePlaneFromPointAndNormal(const struct FVector& Point, const struct FVector& Normal);
	struct FDateTime STATIC_MakeDateTime(int Year, int Month, int Day, int hour, int Minute, int Second, int Millisecond);
	struct FLinearColor STATIC_MakeColor(float R, float G, float B, float A);
	float STATIC_Loge(float A);
	bool STATIC_LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection);
	bool STATIC_LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);
	struct FLinearColor STATIC_LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FLinearColor STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool STATIC_LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_LessEqual_IntInt(int A, int B);
	bool STATIC_LessEqual_FloatFloat(float A, float B);
	bool STATIC_LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_LessEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_Less_IntInt(int A, int B);
	bool STATIC_Less_FloatFloat(float A, float B);
	bool STATIC_Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_Less_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Lerp(float A, float B, float Alpha);
	bool STATIC_IsMorning(const struct FDateTime& A);
	bool STATIC_IsLeapYear(int Year);
	bool STATIC_IsAfternoon(const struct FDateTime& A);
	struct FTransform STATIC_InvertTransform(const struct FTransform& T);
	struct FVector STATIC_InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector STATIC_InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	float STATIC_InverseLerp(float A, float B, float Value);
	bool STATIC_InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	float STATIC_Hypotenuse(float Width, float Height);
	void STATIC_HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB);
	struct FLinearColor STATIC_HSVToRGB(float H, float S, float V, float A);
	float STATIC_GridSnap_Float(float Location, float GridSize);
	struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool STATIC_GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_GreaterEqual_IntInt(int A, int B);
	bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	bool STATIC_GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_Greater_IntInt(int A, int B);
	bool STATIC_Greater_FloatFloat(float A, float B);
	bool STATIC_Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_Greater_ByteByte(unsigned char A, unsigned char B);
	int STATIC_GetYear(const struct FDateTime& A);
	void STATIC_GetYawPitchFromVector(const struct FVector& InVec, float* Yaw, float* Pitch);
	struct FVector STATIC_GetVectorArrayAverage(TArray<struct FVector> Vectors);
	struct FVector STATIC_GetUpVector(const struct FRotator& InRot);
	float STATIC_GetTotalSeconds(const struct FTimespan& A);
	float STATIC_GetTotalMinutes(const struct FTimespan& A);
	float STATIC_GetTotalMilliseconds(const struct FTimespan& A);
	float STATIC_GetTotalHours(const struct FTimespan& A);
	float STATIC_GetTotalDays(const struct FTimespan& A);
	struct FTimespan STATIC_GetTimeOfDay(const struct FDateTime& A);
	float STATIC_GetTAU();
	int STATIC_GetSeconds(const struct FTimespan& A);
	int STATIC_GetSecond(const struct FDateTime& A);
	struct FVector STATIC_GetRightVector(const struct FRotator& InRot);
	float STATIC_GetPointDistanceToSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	float STATIC_GetPointDistanceToLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	float STATIC_GetPI();
	int STATIC_GetMonth(const struct FDateTime& A);
	int STATIC_GetMinutes(const struct FTimespan& A);
	int STATIC_GetMinute(const struct FDateTime& A);
	float STATIC_GetMinElement(const struct FVector& A);
	int STATIC_GetMilliseconds(const struct FTimespan& A);
	int STATIC_GetMillisecond(const struct FDateTime& A);
	float STATIC_GetMaxElement(const struct FVector& A);
	int STATIC_GetHours(const struct FTimespan& A);
	int STATIC_GetHour12(const struct FDateTime& A);
	int STATIC_GetHour(const struct FDateTime& A);
	struct FVector STATIC_GetForwardVector(const struct FRotator& InRot);
	struct FTimespan STATIC_GetDuration(const struct FTimespan& A);
	struct FVector STATIC_GetDirectionVector(const struct FVector& From, const struct FVector& to);
	int STATIC_GetDays(const struct FTimespan& A);
	int STATIC_GetDayOfYear(const struct FDateTime& A);
	int STATIC_GetDay(const struct FDateTime& A);
	struct FDateTime STATIC_GetDate(const struct FDateTime& A);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	int STATIC_FTrunc(float A);
	struct FTimespan STATIC_FromSeconds(float Seconds);
	struct FTimespan STATIC_FromMinutes(float Minutes);
	struct FTimespan STATIC_FromMilliseconds(float Milliseconds);
	struct FTimespan STATIC_FromHours(float Hours);
	struct FTimespan STATIC_FromDays(float Days);
	float STATIC_Fraction(float A);
	int STATIC_FMod(float Dividend, float Divisor, float* Remainder);
	float STATIC_FMin(float A, float B);
	float STATIC_FMax(float A, float B);
	float STATIC_FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
	float STATIC_FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
	void STATIC_FindNearestPointsOnLineSegments(const struct FVector& Segment1Start, const struct FVector& Segment1End, const struct FVector& Segment2Start, const struct FVector& Segment2End, struct FVector* Segment1Point, struct FVector* Segment2Point);
	struct FRotator STATIC_FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
	struct FVector STATIC_FindClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	struct FVector STATIC_FindClosestPointOnLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	int STATIC_FFloor(float A);
	float STATIC_FClamp(float Value, float Min, float Max);
	int STATIC_FCeil(float A);
	float STATIC_Exp(float A);
	bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool STATIC_EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	bool STATIC_EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_EqualEqual_IntInt(int A, int B);
	bool STATIC_EqualEqual_FloatFloat(float A, float B);
	bool STATIC_EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_EqualEqual_ClassClass(class UClass* A, class UClass* B);
	bool STATIC_EqualEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	float STATIC_Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float STATIC_DotProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	int STATIC_Divide_IntInt(int A, int B);
	float STATIC_Divide_FloatFloat(float A, float B);
	unsigned char STATIC_Divide_ByteByte(unsigned char A, unsigned char B);
	float STATIC_DegTan(float A);
	float STATIC_DegSin(float A);
	float STATIC_DegreesToRadians(float A);
	float STATIC_DegCos(float A);
	float STATIC_DegAtan2(float A, float B);
	float STATIC_DegAtan(float A);
	float STATIC_DegAsin(float A);
	float STATIC_DegAcos(float A);
	int STATIC_DaysInYear(int Year);
	int STATIC_DaysInMonth(int Year, int Month);
	struct FDateTime STATIC_DateTimeMinValue();
	struct FDateTime STATIC_DateTimeMaxValue();
	bool STATIC_DateTimeFromString(const struct FString& DateTimeString, struct FDateTime* Result);
	bool STATIC_DateTimeFromIsoString(const struct FString& IsoString, struct FDateTime* Result);
	float STATIC_CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
	float STATIC_Cos(float A);
	struct FTransform STATIC_ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	struct FVector2D STATIC_Conv_VectorToVector2D(const struct FVector& InVector);
	struct FTransform STATIC_Conv_VectorToTransform(const struct FVector& InLocation);
	struct FRotator STATIC_Conv_VectorToRotator(const struct FVector& InVec);
	struct FLinearColor STATIC_Conv_VectorToLinearColor(const struct FVector& InVec);
	struct FVector STATIC_Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z);
	struct FVector STATIC_Conv_RotatorToVector(const struct FRotator& InRot);
	struct FVector STATIC_Conv_LinearColorToVector(const struct FLinearColor& InLinearColor);
	struct FColor STATIC_Conv_LinearColorToColor(const struct FLinearColor& InLinearColor);
	float STATIC_Conv_IntToFloat(int inInt);
	unsigned char STATIC_Conv_IntToByte(int inInt);
	bool STATIC_Conv_IntToBool(int inInt);
	struct FVector STATIC_Conv_FloatToVector(float InFloat);
	struct FLinearColor STATIC_Conv_FloatToLinearColor(float InFloat);
	struct FLinearColor STATIC_Conv_ColorToLinearColor(const struct FColor& InColor);
	int STATIC_Conv_ByteToInt(unsigned char InByte);
	float STATIC_Conv_ByteToFloat(unsigned char InByte);
	int STATIC_Conv_BoolToInt(bool InBool);
	float STATIC_Conv_BoolToFloat(bool InBool);
	unsigned char STATIC_Conv_BoolToByte(bool InBool);
	struct FTransform STATIC_ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	struct FRotator STATIC_ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	struct FVector STATIC_ClampVectorSize(const struct FVector& A, float Min, float Max);
	float STATIC_ClampAxis(float Angle);
	float STATIC_ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	int STATIC_Clamp(int Value, int Min, int Max);
	struct FLinearColor STATIC_CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);
	void STATIC_BreakVector2D(const struct FVector2D& InVec, float* X, float* Y);
	void STATIC_BreakVector(const struct FVector& InVec, float* X, float* Y, float* Z);
	void STATIC_BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	void STATIC_BreakTimespan(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* Milliseconds);
	void STATIC_BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_BreakRotator(const struct FRotator& InRot, float* Roll, float* Pitch, float* Yaw);
	void STATIC_BreakRandomStream(const struct FRandomStream& InRandomStream, int* InitialSeed);
	void STATIC_BreakDateTime(const struct FDateTime& InDateTime, int* Year, int* Month, int* Day, int* hour, int* Minute, int* Second, int* Millisecond);
	void STATIC_BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A);
	bool STATIC_BooleanXOR(bool A, bool B);
	bool STATIC_BooleanOR(bool A, bool B);
	bool STATIC_BooleanNOR(bool A, bool B);
	bool STATIC_BooleanNAND(bool A, bool B);
	bool STATIC_BooleanAND(bool A, bool B);
	unsigned char STATIC_BMin(unsigned char A, unsigned char B);
	unsigned char STATIC_BMax(unsigned char A, unsigned char B);
	float STATIC_Atan2(float A, float B);
	float STATIC_Atan(float A);
	float STATIC_Asin(float A);
	int STATIC_And_IntInt(int A, int B);
	struct FVector STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Add_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Add_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Add_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int STATIC_Add_IntInt(int A, int B);
	float STATIC_Add_FloatFloat(float A, float B);
	struct FDateTime STATIC_Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	unsigned char STATIC_Add_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Acos(float A);
	int STATIC_Abs_Int(int A);
	float STATIC_Abs(float A);
};


// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void STATIC_MarkBit(int Index, int* Data);
	bool STATIC_HasUnmarkedBit(int Data, int NumBits);
	bool STATIC_HasMarkedBit(int Data, int NumBits);
	unsigned char STATIC_GetValidValue(class UEnum* Enum, unsigned char EnumeratorValue);
	int STATIC_GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom);
	int STATIC_GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits);
	int STATIC_GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits);
	unsigned char STATIC_GetEnumeratorValueFromIndex(class UEnum* Enum, unsigned char EnumeratorIndex);
	struct FString STATIC_GetEnumeratorUserFriendlyName(class UEnum* Enum, unsigned char EnumeratorValue);
	struct FName STATIC_GetEnumeratorName(class UEnum* Enum, unsigned char EnumeratorValue);
	void STATIC_ClearBit(int Index, int* Data);
	void STATIC_ClearAllBits(int* Data);
	bool STATIC_BitIsMarked(int Data, int Index);
};


// Class Engine.KismetRenderingLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}


	void STATIC_ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, const struct FString& FilePath, const struct FString& Filename);
	void STATIC_ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FString& FilePath, const struct FString& Filename);
	void STATIC_EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context);
	void STATIC_DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);
	class UTextureRenderTarget2D* STATIC_CreateRenderTarget2D(class UObject* WorldContextObject, int Width, int Height);
	void STATIC_ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FLinearColor& ClearColor);
	void STATIC_BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context);
};


// Class Engine.KismetStringLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	struct FString STATIC_TrimTrailing(const struct FString& SourceString);
	struct FString STATIC_Trim(const struct FString& SourceString);
	struct FString STATIC_ToUpper(const struct FString& SourceString);
	struct FString STATIC_ToLower(const struct FString& SourceString);
	struct FString STATIC_TimeSecondsToString(float InSeconds);
	bool STATIC_StartsWith(const struct FString& SourceString, const struct FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase);
	bool STATIC_Split(const struct FString& SourceString, const struct FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, struct FString* LeftS, struct FString* RightS);
	struct FString STATIC_RightPad(const struct FString& SourceString, int ChCount);
	struct FString STATIC_RightChop(const struct FString& SourceString, int Count);
	struct FString STATIC_Right(const struct FString& SourceString, int Count);
	struct FString STATIC_Reverse(const struct FString& SourceString);
	int STATIC_ReplaceInline(const struct FString& SearchText, const struct FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, struct FString* SourceString);
	struct FString STATIC_Replace(const struct FString& SourceString, const struct FString& From, const struct FString& to, TEnumAsByte<ESearchCase> SearchCase);
	TArray<struct FString> STATIC_ParseIntoArray(const struct FString& SourceString, const struct FString& Delimiter, bool CullEmptyStrings);
	bool STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_NotEqual_StriStri(const struct FString& A, const struct FString& B);
	struct FString STATIC_Mid(const struct FString& SourceString, int Start, int Count);
	bool STATIC_MatchesWildcard(const struct FString& SourceString, const struct FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase);
	int STATIC_Len(const struct FString& S);
	struct FString STATIC_LeftPad(const struct FString& SourceString, int ChCount);
	struct FString STATIC_LeftChop(const struct FString& SourceString, int Count);
	struct FString STATIC_Left(const struct FString& SourceString, int Count);
	struct FString STATIC_JoinStringArray(TArray<struct FString> SourceArray, const struct FString& Separator);
	bool STATIC_IsNumeric(const struct FString& SourceString);
	struct FString STATIC_GetSubstring(const struct FString& SourceString, int StartIndex, int Length);
	int STATIC_GetCharacterAsNumber(const struct FString& SourceString, int Index);
	TArray<struct FString> STATIC_GetCharacterArrayFromString(const struct FString& SourceString);
	int STATIC_FindSubstring(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition);
	bool STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_EqualEqual_StriStri(const struct FString& A, const struct FString& B);
	bool STATIC_EndsWith(const struct FString& SourceString, const struct FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase);
	int STATIC_CullArray(const struct FString& SourceString, TArray<struct FString>* inArray);
	struct FString STATIC_Conv_VectorToString(const struct FVector& InVec);
	struct FString STATIC_Conv_Vector2dToString(const struct FVector2D& InVec);
	struct FString STATIC_Conv_TransformToString(const struct FTransform& InTrans);
	void STATIC_Conv_StringToVector2D(const struct FString& inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid);
	void STATIC_Conv_StringToVector(const struct FString& inString, struct FVector* OutConvertedVector, bool* OutIsValid);
	void STATIC_Conv_StringToRotator(const struct FString& inString, struct FRotator* OutConvertedRotator, bool* OutIsValid);
	struct FName STATIC_Conv_StringToName(const struct FString& inString);
	int STATIC_Conv_StringToInt(const struct FString& inString);
	float STATIC_Conv_StringToFloat(const struct FString& inString);
	void STATIC_Conv_StringToColor(const struct FString& inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid);
	struct FString STATIC_Conv_RotatorToString(const struct FRotator& InRot);
	struct FString STATIC_Conv_ObjectToString(class UObject* InObj);
	struct FString STATIC_Conv_NameToString(const struct FName& InName);
	struct FString STATIC_Conv_IntToString(int inInt);
	struct FString STATIC_Conv_FloatToString(float InFloat);
	struct FString STATIC_Conv_ColorToString(const struct FLinearColor& InColor);
	struct FString STATIC_Conv_ByteToString(unsigned char InByte);
	struct FString STATIC_Conv_BoolToString(bool InBool);
	bool STATIC_Contains(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd);
	struct FString STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_BuildString_Vector2d(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector2D& InVector2D, const struct FString& Suffix);
	struct FString STATIC_BuildString_Vector(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector& InVector, const struct FString& Suffix);
	struct FString STATIC_BuildString_Rotator(const struct FString& AppendTo, const struct FString& Prefix, const struct FRotator& InRot, const struct FString& Suffix);
	struct FString STATIC_BuildString_Object(const struct FString& AppendTo, const struct FString& Prefix, class UObject* InObj, const struct FString& Suffix);
	struct FString STATIC_BuildString_Name(const struct FString& AppendTo, const struct FString& Prefix, const struct FName& InName, const struct FString& Suffix);
	struct FString STATIC_BuildString_Int(const struct FString& AppendTo, const struct FString& Prefix, int inInt, const struct FString& Suffix);
	struct FString STATIC_BuildString_Float(const struct FString& AppendTo, const struct FString& Prefix, float InFloat, const struct FString& Suffix);
	struct FString STATIC_BuildString_Color(const struct FString& AppendTo, const struct FString& Prefix, const struct FLinearColor& InColor, const struct FString& Suffix);
	struct FString STATIC_BuildString_Bool(const struct FString& AppendTo, const struct FString& Prefix, bool InBool, const struct FString& Suffix);
};


// Class Engine.KismetTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	struct FText STATIC_TextTrimTrailing(const struct FText& InText);
	struct FText STATIC_TextTrimPrecedingAndTrailing(const struct FText& InText);
	struct FText STATIC_TextTrimPreceding(const struct FText& InText);
	bool STATIC_TextIsTransient(const struct FText& InText);
	bool STATIC_TextIsEmpty(const struct FText& InText);
	bool STATIC_TextIsCultureInvariant(const struct FText& InText);
	bool STATIC_NotEqual_TextText(const struct FText& A, const struct FText& B);
	bool STATIC_NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FText STATIC_GetEmptyText();
	struct FText STATIC_Format(const struct FText& InPattern, TArray<struct FFormatArgumentData> InArgs);
	bool STATIC_FindTextInLocalizationTable(const struct FString& Namespace, const struct FString& Key, struct FText* OutText);
	bool STATIC_EqualEqual_TextText(const struct FText& A, const struct FText& B);
	bool STATIC_EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FText STATIC_Conv_VectorToText(const struct FVector& InVec);
	struct FText STATIC_Conv_Vector2dToText(const struct FVector2D& InVec);
	struct FText STATIC_Conv_TransformToText(const struct FTransform& InTrans);
	struct FText STATIC_Conv_TextToUpper(const struct FText& InText);
	struct FString STATIC_Conv_TextToString(const struct FText& InText);
	struct FText STATIC_Conv_StringToText(const struct FString& inString);
	struct FText STATIC_Conv_RotatorToText(const struct FRotator& InRot);
	struct FText STATIC_Conv_ObjectToText(class UObject* InObj);
	struct FText STATIC_Conv_NameToText(const struct FName& InName);
	struct FText STATIC_Conv_IntToText(int Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	struct FText STATIC_Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText STATIC_Conv_ColorToText(const struct FLinearColor& InColor);
	struct FText STATIC_Conv_ByteToText(unsigned char Value);
	struct FText STATIC_Conv_BoolToText(bool InBool);
	struct FText STATIC_AsTimespan_Timespan(const struct FTimespan& InTimespan);
	struct FText STATIC_AsTime_DateTime(const struct FDateTime& In);
	struct FText STATIC_AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText STATIC_AsDateTime_DateTime(const struct FDateTime& In);
	struct FText STATIC_AsDate_DateTime(const struct FDateTime& InDateTime);
	struct FText STATIC_AsCurrencyBase(int BaseValue, const struct FString& CurrencyCode);
	struct FText STATIC_AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);
	struct FText STATIC_AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);
};


// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}


	void STATIC_RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB);
	void STATIC_PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, TEnumAsByte<EVertexPaintAxis> Axis, bool bConvertToSRGB);
};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}


	void STATIC_LogText(class UObject* WorldContextObject, const struct FString& Text, const struct FName& LogCategory);
	void STATIC_LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory);
	void STATIC_LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const struct FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory);
};


// Class Engine.PoseWatch
// 0x0010 (0x0038 - 0x0028)
class UPoseWatch : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}

};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0070 (0x0390 - 0x0320)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0320(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.BodySetup
// 0x0338 (0x0360 - 0x0028)
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0028(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BodySetup2D
// 0x0030 (0x0390 - 0x0360)
class UBodySetup2D : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup2D");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x00E8 (0x0110 - 0x0028)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.SkeletalBodySetup
// 0x0010 (0x0370 - 0x0360)
class USkeletalBodySetup : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0010 (0x0038 - 0x0028)
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0028 (0x0050 - 0x0028)
class UBookMark : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0010 (0x0038 - 0x0028)
class UBookMark2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0018 (0x0040 - 0x0028)
class UBreakpoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0058 (0x0080 - 0x0028)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x02A8 (0x02D0 - 0x0028)
class UButtonStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0508 (0x0530 - 0x0028)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x508];                                     // 0x0028(0x0508) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x00E8 (0x0110 - 0x0028)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void Stop(bool bImmediate);
	void SetScale(float NewDuration);
	void SetDuration(float NewDuration);
};


// Class Engine.CameraModifier
// 0x0020 (0x0048 - 0x0028)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}


	bool IsDisabled();
	class AActor* GetViewTarget();
	void EnableModifier();
	void DisableModifier(bool bImmediate);
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


// Class Engine.CameraModifier_CameraShake
// 0x0018 (0x0060 - 0x0048)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x00A0 (0x00C8 - 0x0028)
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x02A8 (0x02D0 - 0x0028)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	struct FVector2D K2_TextSize(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& Scale);
	struct FVector2D K2_StrLen(class UFont* RenderFont, const struct FString& RenderText);
	struct FVector K2_Project(const struct FVector& WorldLocation);
	void K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles);
	void K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawText(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& ScreenPosition, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	void K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor);
	void K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles);
	void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	void K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness);
	void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	void K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);
};


// Class Engine.Channel
// 0x0040 (0x0068 - 0x0028)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x01C8 (0x0230 - 0x0068)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0068(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0018 (0x0080 - 0x0068)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0010 (0x0078 - 0x0068)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.CheckBoxStyleAsset
// 0x05E0 (0x0608 - 0x0028)
class UCheckBoxStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0028(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0058 (0x0080 - 0x0028)
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.PluginCommandlet
// 0x0020 (0x00A0 - 0x0080)
class UPluginCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0080 - 0x0080)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.CurveLinearColor
// 0x01E0 (0x0210 - 0x0030)
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0030(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}


	struct FLinearColor GetLinearColorValue(float InTime);
};


// Class Engine.CurveVector
// 0x0168 (0x0198 - 0x0030)
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0030(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}


	struct FVector GetVectorValue(float InTime);
};


// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0028 - 0x0028)
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0050 (0x0078 - 0x0028)
class UCurveTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0008 (0x0030 - 0x0028)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleFractureSettings");
		return ptr;
	}

};


// Class Engine.AnimationSettings
// 0x0038 (0x0070 - 0x0038)
class UAnimationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.AudioSettings
// 0x0070 (0x00A8 - 0x0038)
class UAudioSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x0130 (0x0168 - 0x0038)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0038(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x0028 (0x0060 - 0x0038)
class UStreamingSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x0020 (0x0058 - 0x0038)
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0008 (0x0040 - 0x0038)
class UNetworkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSettings
// 0x0070 (0x00A8 - 0x0038)
class UPhysicsSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.RendererSettings
// 0x00F8 (0x0130 - 0x0038)
class URendererSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0038(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.RendererOverrideSettings
// 0x0008 (0x0040 - 0x0038)
class URendererOverrideSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x0010 (0x0038 - 0x0028)
class UTextureLODSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0088 (0x00C0 - 0x0038)
class UDeviceProfile : public UTextureLODSettings
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x0098 (0x00C0 - 0x0028)
class UDeviceProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0018 (0x0040 - 0x0028)
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0048 (0x0070 - 0x0028)
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0008 (0x0030 - 0x0028)
class UDistribution : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0008 (0x0038 - 0x0030)
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0060 - 0x0040)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0008 (0x0038 - 0x0030)
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0018 (0x0050 - 0x0038)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0040 (0x0090 - 0x0050)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000 (0x0090 - 0x0090)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0020 (0x0058 - 0x0038)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class UDPICustomScalingRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000 (0x0028 - 0x0028)
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0038 - 0x0038)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0098 (0x00C0 - 0x0028)
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00C0 - 0x00A0)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000 (0x0028 - 0x0028)
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.ImportantToggleSettingInterface
// 0x0000 (0x0028 - 0x0028)
class UImportantToggleSettingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.EndUserSettings
// 0x0010 (0x0038 - 0x0028)
class UEndUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EndUserSettings");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0050 (0x0CD0 - 0x0C80)
class UGameEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0C80(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.EngineHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}

};


// Class Engine.Exporter
// 0x0040 (0x0068 - 0x0028)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x00B0 (0x00D8 - 0x0028)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.Font
// 0x01A0 (0x01C8 - 0x0028)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0028(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Base
// 0x0000 (0x0028 - 0x0028)
class UHapticFeedbackEffect_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Buffer
// 0x0040 (0x0068 - 0x0028)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Curve
// 0x0100 (0x0128 - 0x0028)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}

};


// Class Engine.SoundConcurrency
// 0x0010 (0x0038 - 0x0028)
class USoundConcurrency : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0048 (0x0070 - 0x0028)
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0060 (0x0088 - 0x0028)
class USoundGroups : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x01C8 (0x0238 - 0x0070)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0070(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_SoundWave
// 0x0038 (0x0060 - 0x0028)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x0010 (0x0038 - 0x0028)
class UInheritableComponentHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0370 (0x0398 - 0x0028)
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x370];                                     // 0x0028(0x0370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void SetMouseSensitivity(float Sensitivity);
	void SetBind(const struct FName& BindName, const struct FString& Command);
	void InvertAxisKey(const struct FKey& AxisKey);
	void InvertAxis(const struct FName& AxisName);
	void ClearSmoothing();
};


// Class Engine.InputSettings
// 0x0080 (0x00A8 - 0x0028)
class UInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0040 - 0x0028)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0048 (0x0070 - 0x0028)
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0038 - 0x0028)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0028 (0x0050 - 0x0028)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0010 (0x0060 - 0x0050)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0020 (0x0048 - 0x0028)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0048 (0x0070 - 0x0028)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0058 (0x00C8 - 0x0070)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0070(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0080 - 0x0070)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0028 (0x0050 - 0x0028)
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.Layer
// 0x0020 (0x0048 - 0x0028)
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingKismet : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}


	class ULevelStreamingKismet* STATIC_LoadLevelInstance(class UObject* WorldContextObject, const struct FString& LevelName, const struct FVector& Location, const struct FRotator& Rotation, bool* bOutSuccess);
};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0040 - 0x0028)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0018 (0x0040 - 0x0028)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000 (0x0028 - 0x0028)
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0080 (0x00A8 - 0x0028)
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0028 (0x0098 - 0x0070)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangentOutput
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalDerivative
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0118 (0x0188 - 0x0070)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0070(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x00A0 - 0x0080)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0070(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x00A8 (0x0118 - 0x0070)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0070(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0128 (0x0198 - 0x0070)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0070(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0578 (0x05E8 - 0x0070)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x578];                                     // 0x0070(0x0578) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0028 (0x0098 - 0x0070)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0070(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0098 (0x0108 - 0x0070)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0070(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0010 (0x00A0 - 0x0090)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x0098 - 0x0090)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0070 (0x0108 - 0x0098)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0098(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0040 (0x00D0 - 0x0090)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0090(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x00A0 - 0x0090)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRandom
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPlatformSwitch
// 0x0118 (0x0188 - 0x0070)
class UMaterialExpressionPlatformSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0070(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPlatformSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x00E0 (0x0150 - 0x0070)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0070(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x00E8 (0x0158 - 0x0070)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0070(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x00E8 (0x0158 - 0x0070)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0070(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x00B0 (0x0120 - 0x0070)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0070(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0080 - 0x0080)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x0128 (0x01A8 - 0x0080)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0080(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0008 (0x01B0 - 0x01A8)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x01C8 - 0x01A8)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x01D0 - 0x01C8)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x01D0 - 0x01C8)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureProperty
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0040 (0x0068 - 0x0028)
class UMaterialFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.Material
// 0x0918 (0x0970 - 0x0058)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x918];                                     // 0x0058(0x0918) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0000 (0x01C0 - 0x01C0)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetScalarParameterValue(const struct FName& ParameterName, float Value);
	void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float Alpha);
	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	float K2_GetScalarParameterValue(const struct FName& ParameterName);
	void K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source);
	void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
	void CopyInterpParameters(class UMaterialInstance* Source);
};


// Class Engine.MaterialParameterCollection
// 0x0040 (0x0068 - 0x0028)
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x00C0 (0x00E8 - 0x0028)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0018 (0x0040 - 0x0028)
class UMorphTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.NavArea_Default
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Default");
		return ptr;
	}

};


// Class Engine.NavArea_LowHeight
// 0x0000 (0x0040 - 0x0040)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_LowHeight");
		return ptr;
	}

};


// Class Engine.NavArea_Null
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Null");
		return ptr;
	}

};


// Class Engine.NavArea_Obstacle
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Obstacle");
		return ptr;
	}

};


// Class Engine.NavAreaMeta
// 0x0000 (0x0040 - 0x0040)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta");
		return ptr;
	}

};


// Class Engine.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C0 - 0x0040)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class Engine.NavCollision
// 0x00E8 (0x0110 - 0x0028)
class UNavCollision : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollision");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x0008 (0x0030 - 0x0028)
class UNavigationDataChunk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMeshDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationPath
// 0x0098 (0x00C0 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class Engine.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPathGenerator");
		return ptr;
	}

};


// Class Engine.RecastFilter_UseDefaultArea
// 0x0000 (0x0070 - 0x0070)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class Engine.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkTrivial");
		return ptr;
	}

};


// Class Engine.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavNodeInterface");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0338 (0x0360 - 0x0028)
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0028(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x0240 (0x0290 - 0x0050)
class UPackageMapClient : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0050(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x33680 (0x336C8 - 0x0048)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x33680];                                   // 0x0048(0x33680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0x0020 (0x336E8 - 0x336C8)
class UDemoNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x336C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0x0400 (0x0760 - 0x0360)
class UDemoNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x400];                                     // 0x0360(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0050 (0x0078 - 0x0028)
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0038 - 0x0028)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.OnlineEngineInterface
// 0x0000 (0x0028 - 0x0028)
class UOnlineEngineInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000 (0x0028 - 0x0028)
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x0160 - 0x0160)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0008 (0x0030 - 0x0028)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0090 (0x00B8 - 0x0028)
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x00C8 (0x00F8 - 0x0030)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x00F0 (0x0120 - 0x0030)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0188 (0x01B8 - 0x0030)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0030(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0190 (0x01C0 - 0x0030)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0030(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0080 (0x00B0 - 0x0030)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0020 (0x00E0 - 0x00C0)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0048 - 0x0040)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x00A8 (0x00E8 - 0x0040)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0040(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x00A8 (0x00D8 - 0x0030)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0158 - 0x0138)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0138(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0088 - 0x0088)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x0140 (0x0170 - 0x0030)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0050 - 0x0030)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0080 (0x0140 - 0x00C0)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0160 - 0x0140)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0038 (0x00F8 - 0x00C0)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0118 - 0x00F8)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00F8 (0x0128 - 0x0030)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0038 - 0x0030)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x0110 (0x0148 - 0x0038)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0038(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0068 - 0x0048)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x00C8 (0x0100 - 0x0038)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.SubUVAnimation
// 0x0038 (0x0060 - 0x0028)
class USubUVAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0048 (0x00C0 - 0x0078)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0068 (0x0098 - 0x0030)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x0138 (0x0168 - 0x0030)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0030(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x0410 (0x0440 - 0x0030)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x410];                                     // 0x0030(0x0410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x00E0 - 0x00C0)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0080 (0x00B8 - 0x0038)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0028 - 0x0028)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x0018 (0x0040 - 0x0028)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0x0000 (0x00C8 - 0x00C8)
class UDemoPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0040 - 0x0028)
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintTemplate
// 0x0318 (0x0340 - 0x0028)
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x0028(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PhysicsSerializer
// 0x00A8 (0x00D0 - 0x0028)
class UPhysicsSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSerializer");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0010 (0x0038 - 0x0028)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x0018 (0x0050 - 0x0038)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0028 (0x0060 - 0x0038)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.MicroTransactionBase
// 0x0030 (0x0068 - 0x0038)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0038 - 0x0038)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	bool TwitterRequest(const struct FString& URL, TArray<struct FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex);
	bool ShowTweetUI(const struct FString& InitialMessage, const struct FString& URL, const struct FString& Picture);
	void Init();
	int GetNumAccounts();
	struct FString GetAccountName(int AccountIndex);
	bool CanShowTweetUI();
	bool AuthorizeAccounts();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B0 - 0x0028)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	int GetNumHeaders();
	struct FString GetHeaderValue(const struct FString& HeaderName);
	void GetHeader(int HeaderIndex, struct FString* Header, struct FString* Value);
};


// Class Engine.ChildConnection
// 0x0008 (0x336D0 - 0x336C8)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x336C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0010 (0x0038 - 0x0028)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0008 (0x0030 - 0x0028)
class UReporterBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0078 (0x00A8 - 0x0030)
class UReporterGraph : public UReporterBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0030 (0x0058 - 0x0028)
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0020 (0x0048 - 0x0028)
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0090 (0x00B8 - 0x0028)
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SCS_Node
// 0x0108 (0x0130 - 0x0028)
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0028(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0030 (0x0058 - 0x0028)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.DestructibleMesh
// 0x00A0 (0x02E0 - 0x0240)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0240(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshReductionSettings
// 0x0018 (0x0040 - 0x0028)
class USkeletalMeshReductionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshReductionSettings");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0038 (0x0060 - 0x0028)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}


	void InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, const struct FVector& WorldLocation, const struct FVector& WorldNormal);
	struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp);
};


// Class Engine.SlateBrushAsset
// 0x0090 (0x00B8 - 0x0028)
class USlateBrushAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.Texture
// 0x0098 (0x00C0 - 0x0028)
class UTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.SlateTextureAtlasInterface
// 0x0000 (0x0028 - 0x0028)
class USlateTextureAtlasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0018 (0x0088 - 0x0070)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x0120 (0x0190 - 0x0070)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0070(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0x0088 (0x02C0 - 0x0238)
class USoundWaveProcedural : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0238(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0050 (0x0078 - 0x0028)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0060 (0x0088 - 0x0028)
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0010 (0x0038 - 0x0028)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0x0000 (0x0038 - 0x0038)
class USoundNodeAssetReferencer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0030 (0x0068 - 0x0038)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x0108 (0x0140 - 0x0038)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0038(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0060 - 0x0038)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0048 - 0x0038)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0050 - 0x0048)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0138 (0x0170 - 0x0038)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0038(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0048 - 0x0038)
class USoundNodeGroupControl : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0008 (0x0040 - 0x0038)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x0038 - 0x0038)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x0048 - 0x0038)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0040 (0x0078 - 0x0038)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0028 (0x0060 - 0x0038)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0x0000 (0x0038 - 0x0038)
class USoundNodeQualityLevel : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0030 (0x0068 - 0x0038)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0040 - 0x0038)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x0118 (0x0140 - 0x0028)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}


	int GetNumSections(int InLOD);
	int GetNumLODs();
	struct FBoxSphereBounds GetBounds();
	struct FBox GetBoundingBox();
};


// Class Engine.StaticMeshSocket
// 0x0040 (0x0068 - 0x0028)
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.VertexAttributeStream
// 0x0020 (0x0048 - 0x0028)
class UVertexAttributeStream : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAttributeStream");
		return ptr;
	}

};


// Class Engine.SubDSurface
// 0x0050 (0x0078 - 0x0028)
class USubDSurface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurface");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0028 (0x0050 - 0x0028)
class USubsurfaceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x0048 (0x0070 - 0x0028)
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x0090 (0x0150 - 0x00C0)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00C0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	int Blueprint_GetSizeY();
	int Blueprint_GetSizeX();
};


// Class Engine.LightMapTexture2D
// 0x0008 (0x0158 - 0x0150)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0008 (0x0158 - 0x0150)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0008 (0x0158 - 0x0150)
class UTextureLightProfile : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x0018 (0x00D8 - 0x00C0)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0058 (0x0118 - 0x00C0)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0008 (0x00C8 - 0x00C0)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0028 (0x00F0 - 0x00C8)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0020 (0x0110 - 0x00F0)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}


	void UpdateResource();
	void ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	void GetSize(int* Width, int* Height);
	class UCanvasRenderTarget2D* STATIC_CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int Width, int Height);
};


// Class Engine.TextureRenderTargetCube
// 0x0020 (0x00E8 - 0x00C8)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000 (0x0028 - 0x0028)
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineTemplate
// 0x0070 (0x0098 - 0x0028)
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0030 (0x0058 - 0x0028)
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.UserDefinedEnum
// 0x0010 (0x0068 - 0x0058)
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0020 (0x0048 - 0x0028)
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0040 (0x0088 - 0x0048)
class UVectorFieldAnimated : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldStatic
// 0x0088 (0x00D0 - 0x0048)
class UVectorFieldStatic : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VehicleWheel
// 0x00B0 (0x00D8 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleWheel");
		return ptr;
	}


	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};


// Class Engine.VisualLoggerAutomationTests
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerAutomationTests : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerDebugSnapshotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}

};


// Class Engine.WorldComposition
// 0x0040 (0x0068 - 0x0028)
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
