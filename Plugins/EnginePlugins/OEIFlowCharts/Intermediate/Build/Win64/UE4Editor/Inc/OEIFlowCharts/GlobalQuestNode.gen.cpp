// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GlobalQuestNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalQuestNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalQuestNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FGlobalQuestNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FGlobalQuestNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalQuestNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GlobalQuestNode"), sizeof(FGlobalQuestNode), Get_Z_Construct_UScriptStruct_FGlobalQuestNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGlobalQuestNode>()
{
	return FGlobalQuestNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalQuestNode(FGlobalQuestNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GlobalQuestNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestNode()
	{
		UScriptStruct::DeferCppStructOps<FGlobalQuestNode>(FName(TEXT("GlobalQuestNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestNode;
	struct Z_Construct_UScriptStruct_FGlobalQuestNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalQuestNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalQuestNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"GlobalQuestNode",
		sizeof(FGlobalQuestNode),
		alignof(FGlobalQuestNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalQuestNode"), sizeof(FGlobalQuestNode), Get_Z_Construct_UScriptStruct_FGlobalQuestNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalQuestNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestNode_Hash() { return 3292546211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
