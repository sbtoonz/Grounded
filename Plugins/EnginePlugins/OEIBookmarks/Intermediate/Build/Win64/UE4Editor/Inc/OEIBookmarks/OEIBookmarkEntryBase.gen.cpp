// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIBookmarkEntryBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarkEntryBase() {}
// Cross Module References
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIBookmarkEntryBase::execOnAddBookmarkButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddBookmarkButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryBase::execOnAddFolderButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddFolderButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryBase::execOnAddFromClipboardButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddFromClipboardButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryBase::execOnEntryClicked)
	{
		P_GET_OBJECT(UOEIBookmarkEntryBase,Z_Param_ClickedEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntryClicked(Z_Param_ClickedEntry);
		P_NATIVE_END;
	}
	void UOEIBookmarkEntryBase::StaticRegisterNativesUOEIBookmarkEntryBase()
	{
		UClass* Class = UOEIBookmarkEntryBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAddBookmarkButtonClicked", &UOEIBookmarkEntryBase::execOnAddBookmarkButtonClicked },
			{ "OnAddFolderButtonClicked", &UOEIBookmarkEntryBase::execOnAddFolderButtonClicked },
			{ "OnAddFromClipboardButtonClicked", &UOEIBookmarkEntryBase::execOnAddFromClipboardButtonClicked },
			{ "OnEntryClicked", &UOEIBookmarkEntryBase::execOnEntryClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryBase, nullptr, "OnAddBookmarkButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryBase, nullptr, "OnAddFolderButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryBase, nullptr, "OnAddFromClipboardButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics
	{
		struct OEIBookmarkEntryBase_eventOnEntryClicked_Parms
		{
			UOEIBookmarkEntryBase* ClickedEntry;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::NewProp_ClickedEntry_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::NewProp_ClickedEntry = { "ClickedEntry", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarkEntryBase_eventOnEntryClicked_Parms, ClickedEntry), Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::NewProp_ClickedEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::NewProp_ClickedEntry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::NewProp_ClickedEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryBase, nullptr, "OnEntryClicked", nullptr, nullptr, sizeof(OEIBookmarkEntryBase_eventOnEntryClicked_Parms), Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister()
	{
		return UOEIBookmarkEntryBase::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBookmarkEntryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewNameBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewNameBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftPadSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftPadSizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Highlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked, "OnAddBookmarkButtonClicked" }, // 1586144418
		{ &Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFolderButtonClicked, "OnAddFolderButtonClicked" }, // 3418937240
		{ &Z_Construct_UFunction_UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked, "OnAddFromClipboardButtonClicked" }, // 3936682647
		{ &Z_Construct_UFunction_UOEIBookmarkEntryBase_OnEntryClicked, "OnEntryClicked" }, // 3421758606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBookmarkEntryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarkEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarkEntryBase, Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_NewNameBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarkEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_NewNameBox = { "NewNameBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarkEntryBase, NewNameBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_NewNameBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_NewNameBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_LeftPadSizeBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarkEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_LeftPadSizeBox = { "LeftPadSizeBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarkEntryBase, LeftPadSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_LeftPadSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_LeftPadSizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarkEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarkEntryBase, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Highlight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarkEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Highlight = { "Highlight", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarkEntryBase, Highlight), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Highlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Highlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_NewNameBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_LeftPadSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::NewProp_Highlight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBookmarkEntryBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::ClassParams = {
		&UOEIBookmarkEntryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBookmarkEntryBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBookmarkEntryBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBookmarkEntryBase, 2520925614);
	template<> OEIBOOKMARKS_API UClass* StaticClass<UOEIBookmarkEntryBase>()
	{
		return UOEIBookmarkEntryBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBookmarkEntryBase(Z_Construct_UClass_UOEIBookmarkEntryBase, &UOEIBookmarkEntryBase::StaticClass, TEXT("/Script/OEIBookmarks"), TEXT("UOEIBookmarkEntryBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBookmarkEntryBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
