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

// BlueprintGeneratedClass SecurityBeam.SecurityBeam_C
// 0x0154 (0x0594 - 0x0440)
class ASecurityBeam_C : public AGlimpseSecurityCircuit
{
public:
	unsigned char                                      UnknownData00[0x154];                                     // 0x0440(0x0154) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SecurityBeam.SecurityBeam_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
