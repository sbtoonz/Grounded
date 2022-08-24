// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/AcquireItemObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcquireItemObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FAcquireItemObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FAcquireItemObjectiveNode>() == std::is_polymorphic<FObjectiveNode>(), "USTRUCT FAcquireItemObjectiveNode cannot be polymorphic unless super FObjectiveNode is polymorphic");

class UScriptStruct* FAcquireItemObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("AcquireItemObjectiveNode"), sizeof(FAcquireItemObjectiveNode), Get_Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FAcquireItemObjectiveNode>()
{
	return FAcquireItemObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAcquireItemObjectiveNode(FAcquireItemObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("AcquireItemObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFAcquireItemObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFAcquireItemObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FAcquireItemObjectiveNode>(FName(TEXT("AcquireItemObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFAcquireItemObjectiveNode;
	struct Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailedConditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildFailedConditional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AcquireItemObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcquireItemObjectiveNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcquireItemObjectiveNode" },
		{ "ModuleRelativePath", "Public/AcquireItemObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcquireItemObjectiveNode, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcquireItemObjectiveNode" },
		{ "ModuleRelativePath", "Public/AcquireItemObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcquireItemObjectiveNode, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcquireItemObjectiveNode" },
		{ "ModuleRelativePath", "Public/AcquireItemObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ChildFailedConditional = { "ChildFailedConditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAcquireItemObjectiveNode, ChildFailedConditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::NewProp_ChildFailedConditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FObjectiveNode,
		&NewStructOps,
		"AcquireItemObjectiveNode",
		sizeof(FAcquireItemObjectiveNode),
		alignof(FAcquireItemObjectiveNode),
		Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAcquireItemObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AcquireItemObjectiveNode"), sizeof(FAcquireItemObjectiveNode), Get_Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAcquireItemObjectiveNode_Hash() { return 2745605205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
