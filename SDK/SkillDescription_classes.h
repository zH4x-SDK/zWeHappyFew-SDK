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

// WidgetBlueprintGeneratedClass SkillDescription.SkillDescription_C
// 0x0130 (0x0368 - 0x0238)
class USkillDescription_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0238(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillDescription.SkillDescription_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetControllerVisibility();
	void GetPopUp(bool Visible);
	struct FText Get_SkillInfoNameFinal_Text_1();
	struct FText Get_SkillInfoName_Text_1();
	void GetInfoSpecsPanel(class UVerticalBox** Panel);
	struct FText Get_SkillInfoDescFinal_Text_1();
	struct FText Get_SkillInfoDesc_Text_1();
	void UpdateDescriptionPanel(class UGlimpseSkill* Skill, const struct FText& DescriptionNew, const struct FText& DescriptionOld);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void OnAnimationStarted(class UWidgetAnimation** Animation);
	void BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature();
	void BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature();
	void ButtonHovered();
	void ExecuteUbergraph_SkillDescription(int EntryPoint);
	void BuyButtonHovered__DelegateSignature();
	void CancelButtonPushed__DelegateSignature();
	void BuyButtonPushed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
