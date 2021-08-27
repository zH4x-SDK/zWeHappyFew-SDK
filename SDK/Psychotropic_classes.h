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

// BlueprintGeneratedClass Psychotropic.Psychotropic_C
// 0x001A (0x0132 - 0x0118)
class UPsychotropic_C : public UGlimpseStatusEffectBase
{
public:
	unsigned char                                      UnknownData00[0x1A];                                      // 0x0118(0x001A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Psychotropic.Psychotropic_C");
		return ptr;
	}


	bool ShouldAutoRemove(class UStatusEffectComponent** Component);
	void OnTick(float* DeltaTime);
	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
