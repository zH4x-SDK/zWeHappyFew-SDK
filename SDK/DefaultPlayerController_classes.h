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

// BlueprintGeneratedClass DefaultPlayerController.DefaultPlayerController_C
// 0x0038 (0x14A8 - 0x1470)
class ADefaultPlayerController_C : public AGlimpsePlayerController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x1470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultPlayerController.DefaultPlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnCountdownComplete(struct FName* CountdownReference);
	void OnCollectibleAwarded(class UGlimpseCollectibleGroup** Group, struct FName* CollectibleKey);
	void ExecuteUbergraph_DefaultPlayerController(int EntryPoint);
	void CountdownCompletePassthrough__DelegateSignature(const struct FName& CountdownReference);
	void PituitaryExtractorPassthrough__DelegateSignature(TEnumAsByte<EPituitaryExtractorUse> Type);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
