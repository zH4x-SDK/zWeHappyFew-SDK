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

// BlueprintGeneratedClass JubilatorNPC.JubilatorNPC_C
// 0x0144 (0x20D4 - 0x1F90)
class AJubilatorNPC_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x144];                                     // 0x1F90(0x0144) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JubilatorNPC.JubilatorNPC_C");
		return ptr;
	}


	void OnLivenessPhysicsDisable();
	void OnLivenessPhysicsEnable();
	bool CanInterruptAttack(struct FName* AttackName, class AGlimpseCharacter** Attacker, TEnumAsByte<EGlimpseDamageCategory>* DamageType, struct FVector* HitDirection, struct FVector* HitLocation, struct FName* BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
