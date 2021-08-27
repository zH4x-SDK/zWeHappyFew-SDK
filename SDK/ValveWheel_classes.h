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

// BlueprintGeneratedClass ValveWheel.ValveWheel_C
// 0x0089 (0x04B9 - 0x0430)
class AValveWheel_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x89];                                      // 0x0430(0x0089) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ValveWheel.ValveWheel_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
