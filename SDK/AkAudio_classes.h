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

// Class AkAudio.AkAmbientSound
// 0x0040 (0x0470 - 0x0430)
class AAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0030 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0010 (0x0038 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0070 (0x03D0 - 0x0360)
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0360(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void Stop();
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetAttenuationScalingFactor(float Value);
	void SetActiveListeners(int in_uListenerMask);
	void PostTrigger(const struct FString& Trigger);
	void PostAssociatedAkEvent();
	void PostAkEventByName(const struct FString& in_EventName);
	void PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	float GetAttenuationRadius();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_UnloadBankByName(const struct FString& BankName);
	void STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const struct FString& Filename);
	void STATIC_StartOutputCapture(const struct FString& Filename);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
	void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
	void STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	void STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	void STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	void STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const struct FString& BankName);
	void STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	void STATIC_ClearBanks();
	void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkReverbVolume
// 0x0050 (0x04B0 - 0x0460)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0460(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0080 (0x00A8 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
