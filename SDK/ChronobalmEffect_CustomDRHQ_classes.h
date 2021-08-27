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

// BlueprintGeneratedClass ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C
// 0x001C (0x02B4 - 0x0298)
class UChronobalmEffect_CustomDRHQ_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0298(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void OnSuspend();
	void OnResume();
	void ExecuteUbergraph_ChronobalmEffect_CustomDRHQ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
