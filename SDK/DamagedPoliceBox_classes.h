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

// BlueprintGeneratedClass DamagedPoliceBox.DamagedPoliceBox_C
// 0x0080 (0x04B0 - 0x0430)
class ADamagedPoliceBox_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0430(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamagedPoliceBox.DamagedPoliceBox_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
