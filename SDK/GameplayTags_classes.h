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

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};


// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	bool STATIC_IsGameplayTagValid(const struct FGameplayTag& TagContainer);
	bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	bool STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, TEnumAsByte<EGameplayTagMatchType> TagOneMatchType, TEnumAsByte<EGameplayTagMatchType> TagTwoMatchType);
	bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagMatchType> TagMatchType);
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	bool STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	bool STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	bool STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagMatchType> TagMatchType);
	bool STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
};


// Class GameplayTags.GameplayTagsManager
// 0x01F8 (0x0220 - 0x0028)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0028(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}


	struct FGameplayTag RequestGameplayTag(const struct FName& TagName, bool ErrorIfNotFound);
};


// Class GameplayTags.GameplayTagsSettings
// 0x0028 (0x0050 - 0x0028)
class UGameplayTagsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
