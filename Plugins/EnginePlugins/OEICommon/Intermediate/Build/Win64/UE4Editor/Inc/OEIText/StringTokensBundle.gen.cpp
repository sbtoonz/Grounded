// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/StringTokensBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTokensBundle() {}
// Cross Module References
	OEITEXT_API UClass* Z_Construct_UClass_UStringTokensBundle_NoRegister();
	OEITEXT_API UClass* Z_Construct_UClass_UStringTokensBundle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIText();
// End Cross Module References
	void UStringTokensBundle::StaticRegisterNativesUStringTokensBundle()
	{
	}
	UClass* Z_Construct_UClass_UStringTokensBundle_NoRegister()
	{
		return UStringTokensBundle::StaticClass();
	}
	struct Z_Construct_UClass_UStringTokensBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tokens_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Tokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTokensBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTokensBundle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StringTokensBundle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StringTokensBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens_ElementProp = { "Tokens", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTokensBundle" },
		{ "ModuleRelativePath", "Public/StringTokensBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens = { "Tokens", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStringTokensBundle, Tokens), METADATA_PARAMS(Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTokensBundle" },
		{ "ModuleRelativePath", "Public/StringTokensBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStringTokensBundle, Hash), METADATA_PARAMS(Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStringTokensBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Tokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTokensBundle_Statics::NewProp_Hash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTokensBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTokensBundle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringTokensBundle_Statics::ClassParams = {
		&UStringTokensBundle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStringTokensBundle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStringTokensBundle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringTokensBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTokensBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTokensBundle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringTokensBundle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringTokensBundle, 975344723);
	template<> OEITEXT_API UClass* StaticClass<UStringTokensBundle>()
	{
		return UStringTokensBundle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTokensBundle(Z_Construct_UClass_UStringTokensBundle, &UStringTokensBundle::StaticClass, TEXT("/Script/OEIText"), TEXT("UStringTokensBundle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTokensBundle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
