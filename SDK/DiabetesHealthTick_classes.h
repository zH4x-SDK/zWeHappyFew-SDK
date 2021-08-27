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

// BlueprintGeneratedClass DiabetesHealthTick.DiabetesHealthTick_C
// 0x0050 (0x02D8 - 0x0288)
class UDiabetesHealthTick_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0288(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DiabetesHealthTick.DiabetesHealthTick_C");
		return ptr;
	}


	void ResetInfectionTime();
	void TickInfection(float DeltaSeconds);
	void OnTick(float* DeltaTime);
	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
