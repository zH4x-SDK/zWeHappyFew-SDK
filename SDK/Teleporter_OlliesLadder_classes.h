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

// BlueprintGeneratedClass Teleporter_OlliesLadder.Teleporter_OlliesLadder_C
// 0x0010 (0x04D8 - 0x04C8)
class ATeleporter_OlliesLadder_C : public ATeleporter_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleporter_OlliesLadder.Teleporter_OlliesLadder_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
