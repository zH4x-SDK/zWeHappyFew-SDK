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

// BlueprintGeneratedClass Vomiting.Vomiting_C
// 0x0028 (0x02C0 - 0x0298)
class UVomiting_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0298(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vomiting.Vomiting_C");
		return ptr;
	}


	void EndVomitingBout();
	void BeginVomitingBout(float Duration, const struct FName& ParticleSocketName);
	void OnTick(float* DeltaTime);
	void ExecuteUbergraph_Vomiting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
