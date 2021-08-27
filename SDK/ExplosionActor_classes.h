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

// BlueprintGeneratedClass ExplosionActor.ExplosionActor_C
// 0x0040 (0x0470 - 0x0430)
class AExplosionActor_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionActor.ExplosionActor_C");
		return ptr;
	}


	void Explode();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
