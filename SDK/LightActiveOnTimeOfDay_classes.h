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

// BlueprintGeneratedClass LightActiveOnTimeOfDay.LightActiveOnTimeOfDay_C
// 0x003C (0x012C - 0x00F0)
class ULightActiveOnTimeOfDay_C : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightActiveOnTimeOfDay.LightActiveOnTimeOfDay_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
