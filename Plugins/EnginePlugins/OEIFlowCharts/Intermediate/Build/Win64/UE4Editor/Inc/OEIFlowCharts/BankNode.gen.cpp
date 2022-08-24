// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/BankNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBankNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBankNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EPersistenceType();
// End Cross Module References

static_assert(std::is_polymorphic<FBankNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FBankNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FBankNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FBankNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBankNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("BankNode"), sizeof(FBankNode), Get_Z_Construct_UScriptStruct_FBankNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FBankNode>()
{
	return FBankNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBankNode(FBankNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("BankNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBankNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBankNode()
	{
		UScriptStruct::DeferCppStructOps<FBankNode>(FName(TEXT("BankNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFBankNode;
	struct Z_Construct_UScriptStruct_FBankNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Persistence_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Persistence;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChildNodeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodeIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodeIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBankNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BankNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBankNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBankNode>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BankNode" },
		{ "ModuleRelativePath", "Public/BankNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType = { "PlayType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBankNode, PlayType), Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BankNode" },
		{ "ModuleRelativePath", "Public/BankNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBankNode, Persistence), Z_Construct_UEnum_OEIFlowCharts_EPersistenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs_Inner = { "ChildNodeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BankNode" },
		{ "ModuleRelativePath", "Public/BankNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs = { "ChildNodeIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBankNode, ChildNodeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBankNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_PlayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_Persistence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBankNode_Statics::NewProp_ChildNodeIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBankNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"BankNode",
		sizeof(FBankNode),
		alignof(FBankNode),
		Z_Construct_UScriptStruct_FBankNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBankNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBankNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBankNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBankNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBankNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BankNode"), sizeof(FBankNode), Get_Z_Construct_UScriptStruct_FBankNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBankNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBankNode_Hash() { return 697195096U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
