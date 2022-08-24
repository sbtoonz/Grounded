// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ResultFailedBranchNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultFailedBranchNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedBranchNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedNode();
// End Cross Module References

static_assert(std::is_polymorphic<FResultFailedBranchNode>() == std::is_polymorphic<FResultFailedNode>(), "USTRUCT FResultFailedBranchNode cannot be polymorphic unless super FResultFailedNode is polymorphic");

class UScriptStruct* FResultFailedBranchNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FResultFailedBranchNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultFailedBranchNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ResultFailedBranchNode"), sizeof(FResultFailedBranchNode), Get_Z_Construct_UScriptStruct_FResultFailedBranchNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FResultFailedBranchNode>()
{
	return FResultFailedBranchNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResultFailedBranchNode(FResultFailedBranchNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ResultFailedBranchNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedBranchNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedBranchNode()
	{
		UScriptStruct::DeferCppStructOps<FResultFailedBranchNode>(FName(TEXT("ResultFailedBranchNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedBranchNode;
	struct Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchNodeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResultFailedBranchNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultFailedBranchNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewProp_BranchNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResultFailedBranchNode" },
		{ "ModuleRelativePath", "Public/ResultFailedBranchNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewProp_BranchNodeID = { "BranchNodeID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultFailedBranchNode, BranchNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewProp_BranchNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewProp_BranchNodeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::NewProp_BranchNodeID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FResultFailedNode,
		&NewStructOps,
		"ResultFailedBranchNode",
		sizeof(FResultFailedBranchNode),
		alignof(FResultFailedBranchNode),
		Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultFailedBranchNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResultFailedBranchNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResultFailedBranchNode"), sizeof(FResultFailedBranchNode), Get_Z_Construct_UScriptStruct_FResultFailedBranchNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResultFailedBranchNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResultFailedBranchNode_Hash() { return 945412932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
