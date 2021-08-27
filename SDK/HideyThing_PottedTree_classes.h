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

// BlueprintGeneratedClass HideyThing_PottedTree.HideyThing_PottedTree_C
// 0x0027 (0x04D0 - 0x04A9)
class AHideyThing_PottedTree_C : public AHideyThing_Standard_C
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x04A9(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HideyThing_PottedTree.HideyThing_PottedTree_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
