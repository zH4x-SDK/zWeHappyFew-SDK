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

// BlueprintGeneratedClass FaradayKeyPad.FaradayKeyPad_C
// 0x0042 (0x0482 - 0x0440)
class AFaradayKeyPad_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x42];                                      // 0x0440(0x0042) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FaradayKeyPad.FaradayKeyPad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
