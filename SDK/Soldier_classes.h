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

// BlueprintGeneratedClass Soldier.Soldier_C
// 0x0000 (0x1FF0 - 0x1FF0)
class ASoldier_C : public AGlimpseWorkerNPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Soldier.Soldier_C");
		return ptr;
	}


	struct FName ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
