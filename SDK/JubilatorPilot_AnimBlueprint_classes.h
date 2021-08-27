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

// AnimBlueprintGeneratedClass JubilatorPilot_AnimBlueprint.JubilatorPilot_AnimBlueprint_C
// 0x01B0 (0x06A0 - 0x04F0)
class UJubilatorPilot_AnimBlueprint_C : public UGlimpseCharacterAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x04F0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass JubilatorPilot_AnimBlueprint.JubilatorPilot_AnimBlueprint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
