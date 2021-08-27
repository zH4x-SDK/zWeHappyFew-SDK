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

// Class Slate.ButtonWidgetStyle
// 0x02A8 (0x02D8 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0030(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x05E0 (0x0610 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0030(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0428 (0x0458 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x428];                                     // 0x0030(0x0428) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03E0 (0x0410 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0030(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0870 (0x08A0 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x870];                                     // 0x0030(0x0870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0030(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0030(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0518 (0x0548 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x518];                                     // 0x0030(0x0518) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0030(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0310 (0x0340 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x310];                                     // 0x0030(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0178 (0x01A8 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0030(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
