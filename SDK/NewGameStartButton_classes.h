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

// WidgetBlueprintGeneratedClass NewGameStartButton.NewGameStartButton_C
// 0x0048 (0x0678 - 0x0630)
class UNewGameStartButton_C : public UNewGameOptionButton
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0630(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewGameStartButton.NewGameStartButton_C");
		return ptr;
	}


	void SetActiveOption(bool IsActiveOption);
	void SetButtonText(const struct FText& InText);
	void Construct();
	void BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void OnSetActiveOption(bool* bActive);
	void BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_NewGameStartButton(int EntryPoint);
	void OnClickedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
