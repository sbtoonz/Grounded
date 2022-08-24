// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GlobalQuestEventNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalQuestEventNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEventNode();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalQuestEventNode>() == std::is_polymorphic<FQuestEventNode>(), "USTRUCT FGlobalQuestEventNode cannot be polymorphic unless super FQuestEventNode is polymorphic");

class UScriptStruct* FGlobalQuestEventNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalQuestEventNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GlobalQuestEventNode"), sizeof(FGlobalQuestEventNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGlobalQuestEventNode>()
{
	return FGlobalQuestEventNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalQuestEventNode(FGlobalQuestEventNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GlobalQuestEventNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventNode()
	{
		UScriptStruct::DeferCppStructOps<FGlobalQuestEventNode>(FName(TEXT("GlobalQuestEventNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventNode;
	struct Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalQuestEventNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FQuestEventNode,
		&NewStructOps,
		"GlobalQuestEventNode",
		sizeof(FGlobalQuestEventNode),
		alignof(FGlobalQuestEventNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalQuestEventNode"), sizeof(FGlobalQuestEventNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalQuestEventNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventNode_Hash() { return 1072162722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
