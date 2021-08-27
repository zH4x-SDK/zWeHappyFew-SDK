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

// BlueprintGeneratedClass Lever_DSIR.Lever_DSIR_C
// 0x0088 (0x04C8 - 0x0440)
class ALever_DSIR_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0440(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lever_DSIR.Lever_DSIR_C");
		return ptr;
	}


	void CanInteract();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
