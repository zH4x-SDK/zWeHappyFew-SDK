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

// BlueprintGeneratedClass Doctor.Doctor_C
// 0x0038 (0x1FC8 - 0x1F90)
class ADoctor_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x1F90(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Doctor.Doctor_C");
		return ptr;
	}


	struct FName ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
