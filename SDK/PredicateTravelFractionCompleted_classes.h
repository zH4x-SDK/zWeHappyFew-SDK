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

// BlueprintGeneratedClass PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C
// 0x0025 (0x00A5 - 0x0080)
class UPredicateTravelFractionCompleted_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x25];                                      // 0x0080(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C");
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
