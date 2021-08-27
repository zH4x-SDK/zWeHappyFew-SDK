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

// BlueprintGeneratedClass TeslaCoil_TeslaTV.TeslaCoil_TeslaTV_C
// 0x0104 (0x070C - 0x0608)
class ATeslaCoil_TeslaTV_C : public ATeslaCoil_C
{
public:
	unsigned char                                      UnknownData00[0x104];                                     // 0x0608(0x0104) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeslaCoil_TeslaTV.TeslaCoil_TeslaTV_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
