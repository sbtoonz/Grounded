// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableBundle() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableBundle_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableBundle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UGlobalVariableBundle::StaticRegisterNativesUGlobalVariableBundle()
	{
	}
	UClass* Z_Construct_UClass_UGlobalVariableBundle_NoRegister()
	{
		return UGlobalVariableBundle::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalVariableBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalVariableValues_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalVariableValues_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVariableValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GlobalVariableValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalVariableBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalVariableBundle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalVariableBundle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_ValueProp = { "GlobalVariableValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGlobalVariableEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_Key_KeyProp = { "GlobalVariableValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableBundle" },
		{ "ModuleRelativePath", "Public/GlobalVariableBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues = { "GlobalVariableValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalVariableBundle, GlobalVariableValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableBundle" },
		{ "ModuleRelativePath", "Public/GlobalVariableBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalVariableBundle, Hash), METADATA_PARAMS(Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalVariableBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_GlobalVariableValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalVariableBundle_Statics::NewProp_Hash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalVariableBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalVariableBundle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalVariableBundle_Statics::ClassParams = {
		&UGlobalVariableBundle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalVariableBundle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableBundle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalVariableBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalVariableBundle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalVariableBundle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalVariableBundle, 3624009412);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UGlobalVariableBundle>()
	{
		return UGlobalVariableBundle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalVariableBundle(Z_Construct_UClass_UGlobalVariableBundle, &UGlobalVariableBundle::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UGlobalVariableBundle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalVariableBundle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
