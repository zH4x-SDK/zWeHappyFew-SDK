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

// WidgetBlueprintGeneratedClass ConfirmationButton.ConfirmationButton_C
// 0x0042 (0x027A - 0x0238)
class UConfirmationButton_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x42];                                      // 0x0238(0x0042) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationButton.ConfirmationButton_C");
		return ptr;
	}


	void ShowButton(bool Show, const struct FKey& Key);
	void OpenToolTip();
	void Update_Display();
	void Set_Enabled(bool Enabled);
	void Hidden(bool Hidden);
	void SetConfirmationText(const struct FText& Confirmation_Text);
	void Construct();
	void BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ConfirmationButton(int EntryPoint);
	void ButtonPushed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
