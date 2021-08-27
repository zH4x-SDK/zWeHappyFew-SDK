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

// WidgetBlueprintGeneratedClass TutorialToolTipPanel.TutorialToolTipPanel_C
// 0x0060 (0x0690 - 0x0630)
class UTutorialToolTipPanel_C : public UGlimpseTutorialWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0630(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialToolTipPanel.TutorialToolTipPanel_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetKeyboardVisibility();
	TEnumAsByte<ESlateVisibility> GetControllerVisibility();
	class AGlimpsePlayerController* On_Gamepad_TutorialText_GetPlayerController_1();
	struct FText Get_Title_Text_1();
	void Construct();
	void BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature();
	void ExecuteUbergraph_TutorialToolTipPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
