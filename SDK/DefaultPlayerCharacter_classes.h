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

// BlueprintGeneratedClass DefaultPlayerCharacter.DefaultPlayerCharacter_C
// 0x00CA (0x201A - 0x1F50)
class ADefaultPlayerCharacter_C : public AGlimpsePlayerCharacter
{
public:
	unsigned char                                      UnknownData00[0xCA];                                      // 0x1F50(0x00CA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultPlayerCharacter.DefaultPlayerCharacter_C");
		return ptr;
	}


	void EvaluateStatusEffect(TArray<class UClass*>* EffectType, float* vfxTimelinePosition, bool* IsActive);
	void ComputeTooCloseDistance(const struct FName& BoneName, float TraceRadius, float TraceHeight, TEnumAsByte<EDrawDebugTrace> DrawDebug, float* Distance);
	void UserConstructionScript();
	void Mushroom_VFX_Strength__FinishedFunc();
	void Mushroom_VFX_Strength__UpdateFunc();
	void Chrono_VFX_Strength__FinishedFunc();
	void Chrono_VFX_Strength__UpdateFunc();
	void Phlash_VFX_Strength__FinishedFunc();
	void Phlash_VFX_Strength__UpdateFunc();
	void Sunshine_VFX_Strength__FinishedFunc();
	void Sunshine_VFX_Strength__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature(class UGlimpseStatusEffectBase* Effect);
	void BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature(class UGlimpseStatusEffectBase* Effect);
	void ForceAddMushroom();
	void ForceAddChrono();
	void ExecuteUbergraph_DefaultPlayerCharacter(int EntryPoint);
	void VFX_Strength__DelegateSignature(float VFX_Strength, int Filter);
	void OnThrowableHitSurface__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
