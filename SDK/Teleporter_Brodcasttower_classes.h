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

// BlueprintGeneratedClass Teleporter_Brodcasttower.Teleporter_Brodcasttower_C
// 0x0081 (0x04B1 - 0x0430)
class ATeleporter_Brodcasttower_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x81];                                      // 0x0430(0x0081) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleporter_Brodcasttower.Teleporter_Brodcasttower_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
