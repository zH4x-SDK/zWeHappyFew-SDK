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

// BlueprintGeneratedClass Wellette_Lovebirds.Wellette_Lovebirds_C
// 0x0010 (0x2000 - 0x1FF0)
class AWellette_Lovebirds_C : public AGlimpseWorkerNPC_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1FF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wellette_Lovebirds.Wellette_Lovebirds_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
