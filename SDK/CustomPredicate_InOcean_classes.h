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

// BlueprintGeneratedClass CustomPredicate_InOcean.CustomPredicate_InOcean_C
// 0x0018 (0x0098 - 0x0080)
class UCustomPredicate_InOcean_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomPredicate_InOcean.CustomPredicate_InOcean_C");
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
