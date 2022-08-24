// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/FlowChartBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowChartBundle() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartBundle();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FConditional();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBankNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FFlowChartBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FFlowChartBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowChartBundle, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("FlowChartBundle"), sizeof(FFlowChartBundle), Get_Z_Construct_UScriptStruct_FFlowChartBundle_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FFlowChartBundle>()
{
	return FFlowChartBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowChartBundle(FFlowChartBundle::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("FlowChartBundle"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartBundle
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartBundle()
	{
		UScriptStruct::DeferCppStructOps<FFlowChartBundle>(FName(TEXT("FlowChartBundle")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartBundle;
	struct Z_Construct_UScriptStruct_FFlowChartBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringTableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtendedProperties_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExtendedProperties_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExtendedProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditionals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditionals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditionals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BankNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BankNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowChartBundle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_StringTableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_StringTableName = { "StringTableName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, StringTableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_StringTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_StringTableName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_ValueProp = { "ExtendedProperties", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_Key_KeyProp = { "ExtendedProperties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties = { "ExtendedProperties", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, ExtendedProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals_Inner = { "Conditionals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConditional, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals = { "Conditionals", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, Conditionals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes_Inner = { "BankNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBankNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes = { "BankNodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, BankNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems_Inner = { "ReferencedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems = { "ReferencedItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, ReferencedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartBundle" },
		{ "ModuleRelativePath", "Public/FlowChartBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartBundle, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowChartBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_StringTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ExtendedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Conditionals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_BankNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_ReferencedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartBundle_Statics::NewProp_Hash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowChartBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"FlowChartBundle",
		sizeof(FFlowChartBundle),
		alignof(FFlowChartBundle),
		Z_Construct_UScriptStruct_FFlowChartBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowChartBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowChartBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowChartBundle"), sizeof(FFlowChartBundle), Get_Z_Construct_UScriptStruct_FFlowChartBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowChartBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowChartBundle_Hash() { return 3983702708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
