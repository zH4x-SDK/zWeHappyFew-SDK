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

// BlueprintGeneratedClass Infection.Infection_C
// 0x0008 (0x02B8 - 0x02B0)
class UInfection_C : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Infection.Infection_C");
		return ptr;
	}


	void OnApply();
	void ExecuteUbergraph_Infection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
