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

// BlueprintGeneratedClass Waste2_SickWastrel.Waste2_SickWastrel_C
// 0x0030 (0x2030 - 0x2000)
class AWaste2_SickWastrel_C : public AWaste2_Wastrel_C
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x2000(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Waste2_SickWastrel.Waste2_SickWastrel_C");
		return ptr;
	}


	struct FName ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange);
	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
