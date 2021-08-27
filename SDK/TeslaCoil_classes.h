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

// BlueprintGeneratedClass TeslaCoil.TeslaCoil_C
// 0x0170 (0x0608 - 0x0498)
class ATeslaCoil_C : public ATrap_C
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0498(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeslaCoil.TeslaCoil_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
