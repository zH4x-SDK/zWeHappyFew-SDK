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

// BlueprintGeneratedClass POI_Chair_SK.POI_Chair_SK_C
// 0x0090 (0x05B1 - 0x0521)
class APOI_Chair_SK_C : public APOI_GD_Chair01_C
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0521(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_Chair_SK.POI_Chair_SK_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
