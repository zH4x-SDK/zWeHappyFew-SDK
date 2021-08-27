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

// BlueprintGeneratedClass ExplicitConditionComponent.ExplicitConditionComponent_C
// 0x0001 (0x04B1 - 0x04B0)
class UExplicitConditionComponent_C : public UConditionalComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x04B0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplicitConditionComponent.ExplicitConditionComponent_C");
		return ptr;
	}


	void GetCondition(bool* Enabled);
	void EnableCondition(bool bEnabled);
	bool IsConditionMet(class AGlimpsePlayerController** Controller);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
