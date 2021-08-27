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

// BlueprintGeneratedClass Slowed.Slowed_C
// 0x000C (0x02A4 - 0x0298)
class USlowed_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0298(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Slowed.Slowed_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_Slowed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
