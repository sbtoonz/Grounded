// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/BranchCompleteObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchCompleteObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
// End Cross Module References

static_assert(std::is_polymorphic<FBranchCompleteObjectiveNode>() == std::is_polymorphic<FObjectiveNode>(), "USTRUCT FBranchCompleteObjectiveNode cannot be polymorphic unless super FObjectiveNode is polymorphic");

class UScriptStruct* FBranchCompleteObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("BranchCompleteObjectiveNode"), sizeof(FBranchCompleteObjectiveNode), Get_Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FBranchCompleteObjectiveNode>()
{
	return FBranchCompleteObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchCompleteObjectiveNode(FBranchCompleteObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("BranchCompleteObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FBranchCompleteObjectiveNode>(FName(TEXT("BranchCompleteObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteObjectiveNode;
	struct Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestBranchNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuestBranchNodeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BranchCompleteObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchCompleteObjectiveNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewProp_QuestBranchNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BranchCompleteObjectiveNode" },
		{ "ModuleRelativePath", "Public/BranchCompleteObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewProp_QuestBranchNodeID = { "QuestBranchNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBranchCompleteObjectiveNode, QuestBranchNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewProp_QuestBranchNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewProp_QuestBranchNodeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::NewProp_QuestBranchNodeID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FObjectiveNode,
		&NewStructOps,
		"BranchCompleteObjectiveNode",
		sizeof(FBranchCompleteObjectiveNode),
		alignof(FBranchCompleteObjectiveNode),
		Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchCompleteObjectiveNode"), sizeof(FBranchCompleteObjectiveNode), Get_Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode_Hash() { return 103047105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
