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

// BlueprintGeneratedClass PlayerHard.PlayerHard_C
// 0x000E (0x0138 - 0x012A)
class UPlayerHard_C : public UDifficultyBase_C
{
public:
	unsigned char                                      UnknownData00[0xE];                                       // 0x012A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerHard.PlayerHard_C");
		return ptr;
	}


	void ChangeDifficultyTiers();
	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
