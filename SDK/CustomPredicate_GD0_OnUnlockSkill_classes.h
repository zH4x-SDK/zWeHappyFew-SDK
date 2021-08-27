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

// BlueprintGeneratedClass CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C
// 0x0020 (0x00A0 - 0x0080)
class UCustomPredicate_GD0_OnUnlockSkill_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C");
		return ptr;
	}


	bool ReceiveTest();
	void ReceiveBind();
	void ReceiveUnbind();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
