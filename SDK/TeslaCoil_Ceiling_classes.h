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

// BlueprintGeneratedClass TeslaCoil_Ceiling.TeslaCoil_Ceiling_C
// 0x00A8 (0x06B0 - 0x0608)
class ATeslaCoil_Ceiling_C : public ATeslaCoil_C
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0608(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeslaCoil_Ceiling.TeslaCoil_Ceiling_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
