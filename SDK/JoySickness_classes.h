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

// BlueprintGeneratedClass JoySickness.JoySickness_C
// 0x0028 (0x02B0 - 0x0288)
class UJoySickness_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0288(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoySickness.JoySickness_C");
		return ptr;
	}


	void HandleVomit(float DeltaTime);
	void StartVomit();
	void OnTick(float* DeltaTime);
	void ExecuteUbergraph_JoySickness(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
