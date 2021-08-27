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

// BlueprintGeneratedClass ChronobalmEffect.ChronobalmEffect_C
// 0x001C (0x02B4 - 0x0298)
class UChronobalmEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0298(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChronobalmEffect.ChronobalmEffect_C");
		return ptr;
	}


	void ResetTimeDilation();
	void StartTimeDilation();
	void OnApply();
	void OnRemove();
	void OnResume();
	void OnSuspend();
	void OnCharacterStartCutscene();
	void OnCharacterStopCutscene();
	void ExecuteUbergraph_ChronobalmEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
