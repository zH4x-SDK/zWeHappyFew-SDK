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

// BlueprintGeneratedClass PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C
// 0x002D (0x00AD - 0x0080)
class UPredicateTravelFractionCompletedVector_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x2D];                                      // 0x0080(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C");
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
