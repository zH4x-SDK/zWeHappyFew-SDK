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

// BlueprintGeneratedClass BASE_Manual.BASE_Manual_C
// 0x0010 (0x07B0 - 0x07A0)
class ABASE_Manual_C : public AManualPickup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BASE_Manual.BASE_Manual_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ExecuteUbergraph_BASE_Manual(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
