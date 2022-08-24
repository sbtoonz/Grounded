// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/StringTableBundleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTableBundleSet() {}
// Cross Module References
	OEITEXT_API UClass* Z_Construct_UClass_UStringTableBundleSet_NoRegister();
	OEITEXT_API UClass* Z_Construct_UClass_UStringTableBundleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FOEIStringTable();
// End Cross Module References
	void UStringTableBundleSet::StaticRegisterNativesUStringTableBundleSet()
	{
	}
	UClass* Z_Construct_UClass_UStringTableBundleSet_NoRegister()
	{
		return UStringTableBundleSet::StaticClass();
	}
	struct Z_Construct_UClass_UStringTableBundleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringTables_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringTables_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringTables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTableBundleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableBundleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StringTableBundleSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StringTableBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_ValueProp = { "StringTables", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FOEIStringTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_Key_KeyProp = { "StringTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSet" },
		{ "ModuleRelativePath", "Public/StringTableBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables = { "StringTables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStringTableBundleSet, StringTables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSet" },
		{ "ModuleRelativePath", "Public/StringTableBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStringTableBundleSet, Hash), METADATA_PARAMS(Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStringTableBundleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_StringTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringTableBundleSet_Statics::NewProp_Hash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTableBundleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTableBundleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringTableBundleSet_Statics::ClassParams = {
		&UStringTableBundleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStringTableBundleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableBundleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringTableBundleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableBundleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTableBundleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringTableBundleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringTableBundleSet, 3960386434);
	template<> OEITEXT_API UClass* StaticClass<UStringTableBundleSet>()
	{
		return UStringTableBundleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTableBundleSet(Z_Construct_UClass_UStringTableBundleSet, &UStringTableBundleSet::StaticClass, TEXT("/Script/OEIText"), TEXT("UStringTableBundleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTableBundleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
