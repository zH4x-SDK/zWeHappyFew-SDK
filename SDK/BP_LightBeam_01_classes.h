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

// BlueprintGeneratedClass BP_LightBeam_01.BP_LightBeam_01_C
// 0x005C (0x048C - 0x0430)
class ABP_LightBeam_01_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0430(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightBeam_01.BP_LightBeam_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
