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

// BlueprintGeneratedClass JoyGas.JoyGas_C
// 0x0010 (0x02A8 - 0x0298)
class UJoyGas_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoyGas.JoyGas_C");
		return ptr;
	}


	void OnTick(float* DeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
