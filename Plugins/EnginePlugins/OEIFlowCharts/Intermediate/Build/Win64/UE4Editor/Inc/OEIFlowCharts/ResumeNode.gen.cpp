// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ResumeNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResumeNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResumeNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
// End Cross Module References

static_assert(std::is_polymorphic<FResumeNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FResumeNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FResumeNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FResumeNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResumeNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ResumeNode"), sizeof(FResumeNode), Get_Z_Construct_UScriptStruct_FResumeNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FResumeNode>()
{
	return FResumeNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResumeNode(FResumeNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ResumeNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResumeNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResumeNode()
	{
		UScriptStruct::DeferCppStructOps<FResumeNode>(FName(TEXT("ResumeNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFResumeNode;
	struct Z_Construct_UScriptStruct_FResumeNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResumeNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResumeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResumeNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResumeNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResumeNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"ResumeNode",
		sizeof(FResumeNode),
		alignof(FResumeNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResumeNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResumeNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResumeNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResumeNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResumeNode"), sizeof(FResumeNode), Get_Z_Construct_UScriptStruct_FResumeNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResumeNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResumeNode_Hash() { return 2627468094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
