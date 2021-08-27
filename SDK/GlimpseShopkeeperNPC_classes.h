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

// BlueprintGeneratedClass GlimpseShopkeeperNPC.GlimpseShopkeeperNPC_C
// 0x0048 (0x1FD8 - 0x1F90)
class AGlimpseShopkeeperNPC_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x1F90(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlimpseShopkeeperNPC.GlimpseShopkeeperNPC_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
