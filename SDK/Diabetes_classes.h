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

// BlueprintGeneratedClass Diabetes.Diabetes_C
// 0x0010 (0x0360 - 0x0350)
class UDiabetes_C : public UDiabetesBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Diabetes.Diabetes_C");
		return ptr;
	}


	void OnTierChanged(int* LastTier, int* NewTier);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
