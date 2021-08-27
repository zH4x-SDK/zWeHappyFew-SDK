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

// BlueprintGeneratedClass WorkerKeyPad.WorkerKeyPad_C
// 0x0050 (0x0490 - 0x0440)
class AWorkerKeyPad_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0440(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorkerKeyPad.WorkerKeyPad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
