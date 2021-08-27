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

// BlueprintGeneratedClass AwfulTea_TeaTime.AwfulTea_TeaTime_C
// 0x0018 (0x0888 - 0x0870)
class AAwfulTea_TeaTime_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0870(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AwfulTea_TeaTime.AwfulTea_TeaTime_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSignature__DelegateSignature(class APawn* InteractSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
