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

// BlueprintGeneratedClass ToxicWasteEffect.ToxicWasteEffect_C
// 0x0018 (0x0130 - 0x0118)
class UToxicWasteEffect_C : public UGlimpseStatusEffectBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToxicWasteEffect.ToxicWasteEffect_C");
		return ptr;
	}


	void OnTick(float* DeltaTime);
	void OnApply();
	void OnRemove();
	void OwnerPlayerStartFastTravel();
	void ExecuteUbergraph_ToxicWasteEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
