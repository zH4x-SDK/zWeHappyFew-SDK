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

// BlueprintGeneratedClass BeeCloudProjectile.BeeCloudProjectile_C
// 0x0045 (0x0475 - 0x0430)
class ABeeCloudProjectile_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x45];                                      // 0x0430(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeeCloudProjectile.BeeCloudProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
