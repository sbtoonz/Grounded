// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIBookmarkEntryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarkEntryItem() {}
// Cross Module References
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryItem_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryItem();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryBase();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
// End Cross Module References
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnCopyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCopyButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnCreateBugItGoButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateBugItGoButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnCreateOEILinkButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateOEILinkButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnDeleteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeleteButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnEditButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEditButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnGoButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGoButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnNewNameCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewNameCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnRenameButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRenameButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryItem::execOnUpdateButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateButtonClicked();
		P_NATIVE_END;
	}
	void UOEIBookmarkEntryItem::StaticRegisterNativesUOEIBookmarkEntryItem()
	{
		UClass* Class = UOEIBookmarkEntryItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCopyButtonClicked", &UOEIBookmarkEntryItem::execOnCopyButtonClicked },
			{ "OnCreateBugItGoButtonClicked", &UOEIBookmarkEntryItem::execOnCreateBugItGoButtonClicked },
			{ "OnCreateOEILinkButtonClicked", &UOEIBookmarkEntryItem::execOnCreateOEILinkButtonClicked },
			{ "OnDeleteButtonClicked", &UOEIBookmarkEntryItem::execOnDeleteButtonClicked },
			{ "OnEditButtonClicked", &UOEIBookmarkEntryItem::execOnEditButtonClicked },
			{ "OnGoButtonClicked", &UOEIBookmarkEntryItem::execOnGoButtonClicked },
			{ "OnNewNameCommitted", &UOEIBookmarkEntryItem::execOnNewNameCommitted },
			{ "OnRenameButtonClicked", &UOEIBookmarkEntryItem::execOnRenameButtonClicked },
			{ "OnUpdateButtonClicked", &UOEIBookmarkEntryItem::execOnUpdateButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnCopyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnCreateBugItGoButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnCreateOEILinkButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnDeleteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnEditButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnGoButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics
	{
		struct OEIBookmarkEntryItem_eventOnNewNameCommitted_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarkEntryItem_eventOnNewNameCommitted_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarkEntryItem_eventOnNewNameCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnNewNameCommitted", nullptr, nullptr, sizeof(OEIBookmarkEntryItem_eventOnNewNameCommitted_Parms), Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnRenameButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryItem, nullptr, "OnUpdateButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIBookmarkEntryItem_NoRegister()
	{
		return UOEIBookmarkEntryItem::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBookmarkEntryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOEIBookmarkEntryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCopyButtonClicked, "OnCopyButtonClicked" }, // 1082747311
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked, "OnCreateBugItGoButtonClicked" }, // 3856771184
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked, "OnCreateOEILinkButtonClicked" }, // 2550501123
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnDeleteButtonClicked, "OnDeleteButtonClicked" }, // 3859938477
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnEditButtonClicked, "OnEditButtonClicked" }, // 1593849661
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnGoButtonClicked, "OnGoButtonClicked" }, // 2925301925
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnNewNameCommitted, "OnNewNameCommitted" }, // 1343045472
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnRenameButtonClicked, "OnRenameButtonClicked" }, // 4043242987
		{ &Z_Construct_UFunction_UOEIBookmarkEntryItem_OnUpdateButtonClicked, "OnUpdateButtonClicked" }, // 2775009471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBookmarkEntryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBookmarkEntryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::ClassParams = {
		&UOEIBookmarkEntryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBookmarkEntryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBookmarkEntryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBookmarkEntryItem, 43202297);
	template<> OEIBOOKMARKS_API UClass* StaticClass<UOEIBookmarkEntryItem>()
	{
		return UOEIBookmarkEntryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBookmarkEntryItem(Z_Construct_UClass_UOEIBookmarkEntryItem, &UOEIBookmarkEntryItem::StaticClass, TEXT("/Script/OEIBookmarks"), TEXT("UOEIBookmarkEntryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBookmarkEntryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
