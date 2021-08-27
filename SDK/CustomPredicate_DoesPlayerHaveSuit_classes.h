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

// BlueprintGeneratedClass CustomPredicate_DoesPlayerHaveSuit.CustomPredicate_DoesPlayerHaveSuit_C
// 0x0028 (0x00A8 - 0x0080)
class UCustomPredicate_DoesPlayerHaveSuit_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomPredicate_DoesPlayerHaveSuit.CustomPredicate_DoesPlayerHaveSuit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
