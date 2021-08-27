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

// BlueprintGeneratedClass JoyCrash.JoyCrash_C
// 0x0020 (0x02D8 - 0x02B8)
class UJoyCrash_C : public UJoyCrashBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoyCrash.JoyCrash_C");
		return ptr;
	}


	void OnVomit(bool* bSucceeded);
	void ApplyVomiting();
	void OnApply();
	void OnRemove();
	void OnTick(float* DeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
