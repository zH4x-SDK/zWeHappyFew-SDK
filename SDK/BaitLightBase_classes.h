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

// BlueprintGeneratedClass BaitLightBase.BaitLightBase_C
// 0x004F (0x047F - 0x0430)
class ABaitLightBase_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0430(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaitLightBase.BaitLightBase_C");
		return ptr;
	}


	void SetVisibility(bool bNewVisibility);
	void SetIntensity(float Intensity);
	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
