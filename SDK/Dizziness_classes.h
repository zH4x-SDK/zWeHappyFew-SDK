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

// BlueprintGeneratedClass Dizziness.Dizziness_C
// 0x0018 (0x02B0 - 0x0298)
class UDizziness_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dizziness.Dizziness_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_Dizziness(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
