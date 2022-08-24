// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GenericObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGenericObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FGuidIntPair();
// End Cross Module References

static_assert(std::is_polymorphic<FGenericObjectiveNode>() == std::is_polymorphic<FObjectiveNode>(), "USTRUCT FGenericObjectiveNode cannot be polymorphic unless super FObjectiveNode is polymorphic");

class UScriptStruct* FGenericObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGenericObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GenericObjectiveNode"), sizeof(FGenericObjectiveNode), Get_Z_Construct_UScriptStruct_FGenericObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGenericObjectiveNode>()
{
	return FGenericObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGenericObjectiveNode(FGenericObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GenericObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGenericObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGenericObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FGenericObjectiveNode>(FName(TEXT("GenericObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGenericObjectiveNode;
	struct Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveConditionalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectiveConditionalIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailedConditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildFailedConditional;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedGlobalVariableIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGlobalVariableIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedGlobalVariableIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedTalkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedTalkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedTalkNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedKillTargetIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedKillTargetIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedKillTargetIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackedItemNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedItemNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedItemNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackedFactionNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedFactionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedFactionNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericObjectiveNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ObjectiveConditionalIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ObjectiveConditionalIndex = { "ObjectiveConditionalIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, ObjectiveConditionalIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ObjectiveConditionalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ObjectiveConditionalIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ChildFailedConditional = { "ChildFailedConditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, ChildFailedConditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs_ElementProp = { "TrackedGlobalVariableIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs = { "TrackedGlobalVariableIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, TrackedGlobalVariableIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes_Inner = { "TrackedTalkNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuidIntPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes = { "TrackedTalkNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, TrackedTalkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs_ElementProp = { "TrackedKillTargetIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs = { "TrackedKillTargetIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, TrackedKillTargetIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames_ElementProp = { "TrackedItemNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames = { "TrackedItemNames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, TrackedItemNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames_ElementProp = { "TrackedFactionNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericObjectiveNode" },
		{ "ModuleRelativePath", "Public/GenericObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames = { "TrackedFactionNames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericObjectiveNode, TrackedFactionNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ObjectiveConditionalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_ChildFailedConditional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedGlobalVariableIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedTalkNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedKillTargetIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedItemNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::NewProp_TrackedFactionNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FObjectiveNode,
		&NewStructOps,
		"GenericObjectiveNode",
		sizeof(FGenericObjectiveNode),
		alignof(FGenericObjectiveNode),
		Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenericObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGenericObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GenericObjectiveNode"), sizeof(FGenericObjectiveNode), Get_Z_Construct_UScriptStruct_FGenericObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGenericObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGenericObjectiveNode_Hash() { return 1200010954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
