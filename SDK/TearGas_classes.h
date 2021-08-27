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

// BlueprintGeneratedClass TearGas.TearGas_C
// 0x000C (0x02AC - 0x02A0)
class UTearGas_C : public UCoughing_C
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x02A0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TearGas.TearGas_C");
		return ptr;
	}


	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
