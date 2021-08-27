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

// BlueprintGeneratedClass HealthBuff1.HealthBuff1_C
// 0x0008 (0x02C0 - 0x02B8)
class UHealthBuff1_C : public UGlimpseSkill
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HealthBuff1.HealthBuff1_C");
		return ptr;
	}


	void OnBought(class AGlimpsePlayerCharacter** BuyerPlayerCharacter);
	void ExecuteUbergraph_HealthBuff1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
