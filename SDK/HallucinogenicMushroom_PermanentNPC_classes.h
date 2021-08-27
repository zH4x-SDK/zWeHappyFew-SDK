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

// BlueprintGeneratedClass HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C
// 0x0011 (0x0299 - 0x0288)
class UHallucinogenicMushroom_PermanentNPC_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0288(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C");
		return ptr;
	}


	void OnRemove();
	void OnTick(float* DeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
