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

// BlueprintGeneratedClass PredicateGateOpened.PredicateGateOpened_C
// 0x0012 (0x0092 - 0x0080)
class UPredicateGateOpened_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x12];                                      // 0x0080(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PredicateGateOpened.PredicateGateOpened_C");
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
