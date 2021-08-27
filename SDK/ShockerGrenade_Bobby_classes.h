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

// BlueprintGeneratedClass ShockerGrenade_Bobby.ShockerGrenade_Bobby_C
// 0x0010 (0x0C10 - 0x0C00)
class AShockerGrenade_Bobby_C : public AShockerGrenade_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C00(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShockerGrenade_Bobby.ShockerGrenade_Bobby_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn** InteractSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
