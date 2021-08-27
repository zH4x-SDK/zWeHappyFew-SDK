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

// BlueprintGeneratedClass PhysicsLantern.PhysicsLantern_C
// 0x0028 (0x0458 - 0x0430)
class APhysicsLantern_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0430(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PhysicsLantern.PhysicsLantern_C");
		return ptr;
	}


	void SetIntensity(float Intensity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
