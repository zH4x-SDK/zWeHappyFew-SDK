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

// WidgetBlueprintGeneratedClass LoadSlot_Warning2.LoadSlot_Warning2_C
// 0x004C (0x05CC - 0x0580)
class ULoadSlot_Warning2_C : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0580(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadSlot_Warning2.LoadSlot_Warning2_C");
		return ptr;
	}


	float GetSpaceRequired();
	float GetSpaceUsed();
	float GetSpaceDeleted();
	TEnumAsByte<ESlateVisibility> Get_NewGameButtonBoxReverse();
	struct FText GetMessageDependingOnState();
	TEnumAsByte<ESlateVisibility> Get_NewGameButtonBox_Visibility_1();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__NewGameStartButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature();
	void ExecuteUbergraph_LoadSlot_Warning2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
