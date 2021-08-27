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

// BlueprintGeneratedClass Drunk.Drunk_C
// 0x000C (0x02A4 - 0x0298)
class UDrunk_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0298(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drunk.Drunk_C");
		return ptr;
	}


	bool ShouldAutoRemove(class UStatusEffectComponent** Component);
	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
