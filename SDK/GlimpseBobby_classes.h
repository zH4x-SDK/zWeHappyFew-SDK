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

// BlueprintGeneratedClass GlimpseBobby.GlimpseBobby_C
// 0x00B1 (0x2041 - 0x1F90)
class AGlimpseBobby_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0xB1];                                      // 0x1F90(0x00B1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlimpseBobby.GlimpseBobby_C");
		return ptr;
	}


	struct FName ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
