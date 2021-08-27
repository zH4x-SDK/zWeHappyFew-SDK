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

// BlueprintGeneratedClass RotatingWheel.RotatingWheel_C
// 0x0050 (0x0480 - 0x0430)
class ARotatingWheel_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RotatingWheel.RotatingWheel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
