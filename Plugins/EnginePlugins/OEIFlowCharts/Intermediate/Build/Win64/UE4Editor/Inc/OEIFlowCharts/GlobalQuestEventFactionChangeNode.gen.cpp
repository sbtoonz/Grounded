// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GlobalQuestEventFactionChangeNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalQuestEventFactionChangeNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventNode();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalQuestEventFactionChangeNode>() == std::is_polymorphic<FGlobalQuestEventNode>(), "USTRUCT FGlobalQuestEventFactionChangeNode cannot be polymorphic unless super FGlobalQuestEventNode is polymorphic");

class UScriptStruct* FGlobalQuestEventFactionChangeNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GlobalQuestEventFactionChangeNode"), sizeof(FGlobalQuestEventFactionChangeNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGlobalQuestEventFactionChangeNode>()
{
	return FGlobalQuestEventFactionChangeNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalQuestEventFactionChangeNode(FGlobalQuestEventFactionChangeNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GlobalQuestEventFactionChangeNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventFactionChangeNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventFactionChangeNode()
	{
		UScriptStruct::DeferCppStructOps<FGlobalQuestEventFactionChangeNode>(FName(TEXT("GlobalQuestEventFactionChangeNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventFactionChangeNode;
	struct Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FactionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Relationship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Relationship;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventFactionChangeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalQuestEventFactionChangeNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_FactionClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalQuestEventFactionChangeNode" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventFactionChangeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_FactionClass = { "FactionClass", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalQuestEventFactionChangeNode, FactionClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_FactionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_FactionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_Relationship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalQuestEventFactionChangeNode" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventFactionChangeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalQuestEventFactionChangeNode, Relationship), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_Relationship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_Relationship_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_FactionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::NewProp_Relationship,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FGlobalQuestEventNode,
		&NewStructOps,
		"GlobalQuestEventFactionChangeNode",
		sizeof(FGlobalQuestEventFactionChangeNode),
		alignof(FGlobalQuestEventFactionChangeNode),
		Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalQuestEventFactionChangeNode"), sizeof(FGlobalQuestEventFactionChangeNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode_Hash() { return 1659771607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
