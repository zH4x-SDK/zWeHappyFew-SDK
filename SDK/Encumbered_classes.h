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

// BlueprintGeneratedClass Encumbered.Encumbered_C
// 0x0018 (0x02F8 - 0x02E0)
class UEncumbered_C : public UEncumbered
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Encumbered.Encumbered_C");
		return ptr;
	}


	void OnTierChanged(int* LastTier, int* NewTier);
	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
