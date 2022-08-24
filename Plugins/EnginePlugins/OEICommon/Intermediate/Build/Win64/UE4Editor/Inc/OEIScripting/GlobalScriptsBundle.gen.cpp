// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/GlobalScriptsBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalScriptsBundle() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UGlobalScriptsBundle_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UGlobalScriptsBundle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScript();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalConditional();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FConditional();
// End Cross Module References
	void UGlobalScriptsBundle::StaticRegisterNativesUGlobalScriptsBundle()
	{
	}
	UClass* Z_Construct_UClass_UGlobalScriptsBundle_NoRegister()
	{
		return UGlobalScriptsBundle::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalScriptsBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalScripts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalConditionals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalConditionals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalConditionals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditionals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditionals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditionals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalScriptsBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalScriptsBundle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalScriptsBundle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalScriptsBundle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptsBundle" },
		{ "ModuleRelativePath", "Public/GlobalScriptsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalScriptsBundle, Hash), METADATA_PARAMS(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts_Inner = { "GlobalScripts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalScript, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptsBundle" },
		{ "ModuleRelativePath", "Public/GlobalScriptsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts = { "GlobalScripts", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalScriptsBundle, GlobalScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals_Inner = { "GlobalConditionals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalConditional, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptsBundle" },
		{ "ModuleRelativePath", "Public/GlobalScriptsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals = { "GlobalConditionals", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalScriptsBundle, GlobalConditionals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals_Inner = { "Conditionals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConditional, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptsBundle" },
		{ "ModuleRelativePath", "Public/GlobalScriptsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals = { "Conditionals", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalScriptsBundle, Conditionals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalScriptsBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_GlobalConditionals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalScriptsBundle_Statics::NewProp_Conditionals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalScriptsBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalScriptsBundle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalScriptsBundle_Statics::ClassParams = {
		&UGlobalScriptsBundle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalScriptsBundle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalScriptsBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalScriptsBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalScriptsBundle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalScriptsBundle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalScriptsBundle, 2690030203);
	template<> OEISCRIPTING_API UClass* StaticClass<UGlobalScriptsBundle>()
	{
		return UGlobalScriptsBundle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalScriptsBundle(Z_Construct_UClass_UGlobalScriptsBundle, &UGlobalScriptsBundle::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UGlobalScriptsBundle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalScriptsBundle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
