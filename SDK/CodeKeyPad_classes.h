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

// BlueprintGeneratedClass CodeKeyPad.CodeKeyPad_C
// 0x0048 (0x0488 - 0x0440)
class ACodeKeyPad_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0440(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CodeKeyPad.CodeKeyPad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
