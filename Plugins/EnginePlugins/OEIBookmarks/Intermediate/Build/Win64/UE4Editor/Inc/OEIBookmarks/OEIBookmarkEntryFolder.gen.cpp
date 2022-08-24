// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIBookmarkEntryFolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarkEntryFolder() {}
// Cross Module References
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryFolder_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryFolder();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryBase();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
// End Cross Module References
	DEFINE_FUNCTION(UOEIBookmarkEntryFolder::execOnDeleteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeleteButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryFolder::execOnGoButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGoButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryFolder::execOnNewNameCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewNameCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarkEntryFolder::execOnRenameFolderButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRenameFolderButtonClicked();
		P_NATIVE_END;
	}
	void UOEIBookmarkEntryFolder::StaticRegisterNativesUOEIBookmarkEntryFolder()
	{
		UClass* Class = UOEIBookmarkEntryFolder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeleteButtonClicked", &UOEIBookmarkEntryFolder::execOnDeleteButtonClicked },
			{ "OnGoButtonClicked", &UOEIBookmarkEntryFolder::execOnGoButtonClicked },
			{ "OnNewNameCommitted", &UOEIBookmarkEntryFolder::execOnNewNameCommitted },
			{ "OnRenameFolderButtonClicked", &UOEIBookmarkEntryFolder::execOnRenameFolderButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryFolder, nullptr, "OnDeleteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryFolder, nullptr, "OnGoButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics
	{
		struct OEIBookmarkEntryFolder_eventOnNewNameCommitted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarkEntryFolder_eventOnNewNameCommitted_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarkEntryFolder_eventOnNewNameCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryFolder, nullptr, "OnNewNameCommitted", nullptr, nullptr, sizeof(OEIBookmarkEntryFolder_eventOnNewNameCommitted_Parms), Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarkEntryFolder, nullptr, "OnRenameFolderButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIBookmarkEntryFolder_NoRegister()
	{
		return UOEIBookmarkEntryFolder::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOEIBookmarkEntryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnDeleteButtonClicked, "OnDeleteButtonClicked" }, // 2108197817
		{ &Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnGoButtonClicked, "OnGoButtonClicked" }, // 585798068
		{ &Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnNewNameCommitted, "OnNewNameCommitted" }, // 855522500
		{ &Z_Construct_UFunction_UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked, "OnRenameFolderButtonClicked" }, // 2320041544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBookmarkEntryFolder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarkEntryFolder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBookmarkEntryFolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::ClassParams = {
		&UOEIBookmarkEntryFolder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBookmarkEntryFolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBookmarkEntryFolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBookmarkEntryFolder, 3203773446);
	template<> OEIBOOKMARKS_API UClass* StaticClass<UOEIBookmarkEntryFolder>()
	{
		return UOEIBookmarkEntryFolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBookmarkEntryFolder(Z_Construct_UClass_UOEIBookmarkEntryFolder, &UOEIBookmarkEntryFolder::StaticClass, TEXT("/Script/OEIBookmarks"), TEXT("UOEIBookmarkEntryFolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBookmarkEntryFolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
