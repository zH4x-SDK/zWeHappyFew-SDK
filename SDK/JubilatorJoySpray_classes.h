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

// BlueprintGeneratedClass JubilatorJoySpray.JubilatorJoySpray_C
// 0x0000 (0x0030 - 0x0030)
class UJubilatorJoySpray_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JubilatorJoySpray.JubilatorJoySpray_C");
		return ptr;
	}


	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
