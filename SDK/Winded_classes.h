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

// BlueprintGeneratedClass Winded.Winded_C
// 0x000D (0x012D - 0x0120)
class UWinded_C : public UWindedBase
{
public:
	unsigned char                                      UnknownData00[0xD];                                       // 0x0120(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Winded.Winded_C");
		return ptr;
	}


	bool ShouldAutoRemove_1(class UStatusEffectComponent* Component);
	bool ShouldAutoApply_1(class UStatusEffectComponent* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
