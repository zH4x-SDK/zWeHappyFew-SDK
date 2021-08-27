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

// BlueprintGeneratedClass TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C
// 0x00B9 (0x06C1 - 0x0608)
class ATeslaCoil_UndergroundTrap_C : public ATeslaCoil_C
{
public:
	unsigned char                                      UnknownData00[0xB9];                                      // 0x0608(0x00B9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
