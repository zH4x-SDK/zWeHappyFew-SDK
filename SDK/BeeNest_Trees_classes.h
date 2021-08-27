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

// BlueprintGeneratedClass BeeNest_Trees.BeeNest_Trees_C
// 0x0068 (0x0498 - 0x0430)
class ABeeNest_Trees_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0430(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeeNest_Trees.BeeNest_Trees_C");
		return ptr;
	}


	void SetEnabled(bool Enabled);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
