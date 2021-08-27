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

// BlueprintGeneratedClass DifficultyBase.DifficultyBase_C
// 0x000A (0x012A - 0x0120)
class UDifficultyBase_C : public UDifficultyBaseBase
{
public:
	unsigned char                                      UnknownData00[0xA];                                       // 0x0120(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DifficultyBase.DifficultyBase_C");
		return ptr;
	}


	bool ShouldAutoRemove_1(class UStatusEffectComponent* Component);
	bool ShouldAutoApply_1(class UStatusEffectComponent* Component);
	void SetAutoNatives();
	void ExecuteUbergraph_DifficultyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
