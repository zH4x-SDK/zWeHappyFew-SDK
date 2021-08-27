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

// BlueprintGeneratedClass AtomizerCloudProjectile.AtomizerCloudProjectile_C
// 0x0035 (0x0465 - 0x0430)
class AAtomizerCloudProjectile_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x35];                                      // 0x0430(0x0035) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AtomizerCloudProjectile.AtomizerCloudProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
