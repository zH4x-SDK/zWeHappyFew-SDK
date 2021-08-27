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

// WidgetBlueprintGeneratedClass BuySellButton_Widget.BuySellButton_Widget_C
// 0x0064 (0x029C - 0x0238)
class UBuySellButton_Widget_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0238(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuySellButton_Widget.BuySellButton_Widget_C");
		return ptr;
	}


	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void UnHoverReaction(bool* Handled);
	void HoverReaction(bool* Handled);
	void ReleaseReaction(bool* Handled);
	void PressReaction(bool* Handled);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void SetButtonText(const struct FText& BuyText, const struct FText& SellText);
	void SetButtonState(bool ShouldBeBuyState);
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_BuySellButton_Widget(int EntryPoint);
	void Clicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
