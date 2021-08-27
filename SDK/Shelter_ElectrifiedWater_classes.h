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

// BlueprintGeneratedClass Shelter_ElectrifiedWater.Shelter_ElectrifiedWater_C
// 0x0042 (0x0532 - 0x04F0)
class UShelter_ElectrifiedWater_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x42];                                      // 0x04F0(0x0042) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shelter_ElectrifiedWater.Shelter_ElectrifiedWater_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
