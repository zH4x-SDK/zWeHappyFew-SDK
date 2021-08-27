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

// BlueprintGeneratedClass DSIR_Machine_01.DSIR_Machine_01_C
// 0x00B6 (0x04F6 - 0x0440)
class ADSIR_Machine_01_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0xB6];                                      // 0x0440(0x00B6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DSIR_Machine_01.DSIR_Machine_01_C");
		return ptr;
	}


	void CanInteract();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
