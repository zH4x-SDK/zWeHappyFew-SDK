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

// WidgetBlueprintGeneratedClass SortBY_Toggle.SortBY_Toggle_C
// 0x0061 (0x0299 - 0x0238)
class USortBY_Toggle_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x0238(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SortBY_Toggle.SortBY_Toggle_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_InputBindingDisplay_18_Visibility_1();
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void ReleaseReaction(bool* Handled);
	void PressReaction(bool* Return);
	void UnHoverReaction(bool* Return);
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent);
	void HoverReaction(bool* Return);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void SetSortedByWeight(bool SortByWeight);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void ExecuteUbergraph_SortBY_Toggle(int EntryPoint);
	void FocusHovered__DelegateSignature();
	void Clicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
