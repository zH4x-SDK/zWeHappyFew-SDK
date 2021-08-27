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

// BlueprintGeneratedClass GlimpseWorkerNPC.GlimpseWorkerNPC_C
// 0x0060 (0x1FF0 - 0x1F90)
class AGlimpseWorkerNPC_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1F90(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlimpseWorkerNPC.GlimpseWorkerNPC_C");
		return ptr;
	}


	struct FName ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
