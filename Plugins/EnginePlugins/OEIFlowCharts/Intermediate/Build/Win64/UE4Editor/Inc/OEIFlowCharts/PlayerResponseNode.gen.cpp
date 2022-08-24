// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/PlayerResponseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerResponseNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponseNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerResponseNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FPlayerResponseNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FPlayerResponseNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerResponseNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerResponseNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("PlayerResponseNode"), sizeof(FPlayerResponseNode), Get_Z_Construct_UScriptStruct_FPlayerResponseNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FPlayerResponseNode>()
{
	return FPlayerResponseNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerResponseNode(FPlayerResponseNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("PlayerResponseNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFPlayerResponseNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFPlayerResponseNode()
	{
		UScriptStruct::DeferCppStructOps<FPlayerResponseNode>(FName(TEXT("PlayerResponseNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFPlayerResponseNode;
	struct Z_Construct_UScriptStruct_FPlayerResponseNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerResponseNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerResponseNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"PlayerResponseNode",
		sizeof(FPlayerResponseNode),
		alignof(FPlayerResponseNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponseNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerResponseNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerResponseNode"), sizeof(FPlayerResponseNode), Get_Z_Construct_UScriptStruct_FPlayerResponseNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerResponseNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerResponseNode_Hash() { return 3217758353U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
