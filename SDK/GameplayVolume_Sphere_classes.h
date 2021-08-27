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

// BlueprintGeneratedClass GameplayVolume_Sphere.GameplayVolume_Sphere_C
// 0x000C (0x055C - 0x0550)
class AGameplayVolume_Sphere_C : public AGlimpseGameplayVolume
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0550(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameplayVolume_Sphere.GameplayVolume_Sphere_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
