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

// BlueprintGeneratedClass CustomPredicate_ReachedPatrolPoint.CustomPredicate_ReachedPatrolPoint_C
// 0x0024 (0x00A4 - 0x0080)
class UCustomPredicate_ReachedPatrolPoint_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0080(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomPredicate_ReachedPatrolPoint.CustomPredicate_ReachedPatrolPoint_C");
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
