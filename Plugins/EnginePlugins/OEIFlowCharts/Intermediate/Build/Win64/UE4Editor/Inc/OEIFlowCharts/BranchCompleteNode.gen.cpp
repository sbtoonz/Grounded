// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/BranchCompleteNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchCompleteNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
// End Cross Module References

static_assert(std::is_polymorphic<FBranchCompleteNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FBranchCompleteNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FBranchCompleteNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchCompleteNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("BranchCompleteNode"), sizeof(FBranchCompleteNode), Get_Z_Construct_UScriptStruct_FBranchCompleteNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FBranchCompleteNode>()
{
	return FBranchCompleteNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchCompleteNode(FBranchCompleteNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("BranchCompleteNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteNode()
	{
		UScriptStruct::DeferCppStructOps<FBranchCompleteNode>(FName(TEXT("BranchCompleteNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFBranchCompleteNode;
	struct Z_Construct_UScriptStruct_FBranchCompleteNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFailsObjective_MetaData[];
#endif
		static void NewProp_bFailsObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFailsObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchRootNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchRootNodeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BranchCompleteNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchCompleteNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BranchCompleteNode" },
		{ "ModuleRelativePath", "Public/BranchCompleteNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective_SetBit(void* Obj)
	{
		((FBranchCompleteNode*)Obj)->bFailsObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective = { "bFailsObjective", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBranchCompleteNode), &Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_BranchRootNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BranchCompleteNode" },
		{ "ModuleRelativePath", "Public/BranchCompleteNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_BranchRootNodeID = { "BranchRootNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBranchCompleteNode, BranchRootNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_BranchRootNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_BranchRootNodeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_bFailsObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::NewProp_BranchRootNodeID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"BranchCompleteNode",
		sizeof(FBranchCompleteNode),
		alignof(FBranchCompleteNode),
		Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchCompleteNode"), sizeof(FBranchCompleteNode), Get_Z_Construct_UScriptStruct_FBranchCompleteNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchCompleteNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchCompleteNode_Hash() { return 176946558U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
