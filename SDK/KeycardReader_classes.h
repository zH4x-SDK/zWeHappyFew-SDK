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

// BlueprintGeneratedClass KeycardReader.KeycardReader_C
// 0x00EA (0x052A - 0x0440)
class AKeycardReader_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0xEA];                                      // 0x0440(0x00EA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KeycardReader.KeycardReader_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
