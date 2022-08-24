// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/CheckpointBranchNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointBranchNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointBranchNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptNode();
// End Cross Module References

static_assert(std::is_polymorphic<FCheckpointBranchNode>() == std::is_polymorphic<FScriptNode>(), "USTRUCT FCheckpointBranchNode cannot be polymorphic unless super FScriptNode is polymorphic");

class UScriptStruct* FCheckpointBranchNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FCheckpointBranchNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckpointBranchNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("CheckpointBranchNode"), sizeof(FCheckpointBranchNode), Get_Z_Construct_UScriptStruct_FCheckpointBranchNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FCheckpointBranchNode>()
{
	return FCheckpointBranchNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheckpointBranchNode(FCheckpointBranchNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("CheckpointBranchNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCheckpointBranchNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCheckpointBranchNode()
	{
		UScriptStruct::DeferCppStructOps<FCheckpointBranchNode>(FName(TEXT("CheckpointBranchNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFCheckpointBranchNode;
	struct Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CheckpointBranchNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckpointBranchNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FScriptNode,
		&NewStructOps,
		"CheckpointBranchNode",
		sizeof(FCheckpointBranchNode),
		alignof(FCheckpointBranchNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckpointBranchNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheckpointBranchNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheckpointBranchNode"), sizeof(FCheckpointBranchNode), Get_Z_Construct_UScriptStruct_FCheckpointBranchNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCheckpointBranchNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheckpointBranchNode_Hash() { return 1986680517U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
