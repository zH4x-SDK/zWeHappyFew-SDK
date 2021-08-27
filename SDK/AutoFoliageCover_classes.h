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

// BlueprintGeneratedClass AutoFoliageCover.AutoFoliageCover_C
// 0x0000 (0x0288 - 0x0288)
class UAutoFoliageCover_C : public UGlimpseStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AutoFoliageCover.AutoFoliageCover_C");
		return ptr;
	}


	bool ShouldAutoRemove_1(class UStatusEffectComponent* Component);
	bool ShouldAutoApply_1(class UStatusEffectComponent* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
