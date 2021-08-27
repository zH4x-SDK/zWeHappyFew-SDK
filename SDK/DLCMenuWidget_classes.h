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

// WidgetBlueprintGeneratedClass DLCMenuWidget.DLCMenuWidget_C
// 0x0200 (0x07B0 - 0x05B0)
class UDLCMenuWidget_C : public UGlimpseDLCMenu
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x05B0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DLCMenuWidget.DLCMenuWidget_C");
		return ptr;
	}


	struct FText Get_TXT_DLCDescription_Text_1();
	void SetDLCRepresentationState(class UDLCIcon_C* IconWidget, bool Selected, bool NavigatingState, TEnumAsByte<EDLCTypeUI> DLCType);
	void RefreshMenu();
	void BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature();
	void BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature();
	void BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature();
	void BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature();
	void OnDLCConfirmAttempt();
	void Construct();
	void ExecuteUbergraph_DLCMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
