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

// AnimBlueprintGeneratedClass Common_AnimBlueprint.Common_AnimBlueprint_C
// 0x2AAC (0x2F9C - 0x04F0)
class UCommon_AnimBlueprint_C : public UGlimpseCharacterAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2AAC];                                    // 0x04F0(0x2AAC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Common_AnimBlueprint.Common_AnimBlueprint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
