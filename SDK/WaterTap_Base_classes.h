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

// BlueprintGeneratedClass WaterTap_Base.WaterTap_Base_C
// 0x0078 (0x04A8 - 0x0430)
class AWaterTap_Base_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0430(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTap_Base.WaterTap_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
