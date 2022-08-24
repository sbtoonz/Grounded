// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/TalkObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTalkObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTalkObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FTalkObjectiveNode>() == std::is_polymorphic<FObjectiveNode>(), "USTRUCT FTalkObjectiveNode cannot be polymorphic unless super FObjectiveNode is polymorphic");

class UScriptStruct* FTalkObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FTalkObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("TalkObjectiveNode"), sizeof(FTalkObjectiveNode), Get_Z_Construct_UScriptStruct_FTalkObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FTalkObjectiveNode>()
{
	return FTalkObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTalkObjectiveNode(FTalkObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("TalkObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FTalkObjectiveNode>(FName(TEXT("TalkObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkObjectiveNode;
	struct Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConversationNodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailedConditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildFailedConditional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TalkObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkObjectiveNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkObjectiveNode" },
		{ "ModuleRelativePath", "Public/TalkObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkObjectiveNode, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkObjectiveNode" },
		{ "ModuleRelativePath", "Public/TalkObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationNodeID = { "ConversationNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkObjectiveNode, ConversationNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationNodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkObjectiveNode" },
		{ "ModuleRelativePath", "Public/TalkObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ChildFailedConditional = { "ChildFailedConditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkObjectiveNode, ChildFailedConditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ConversationNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::NewProp_ChildFailedConditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FObjectiveNode,
		&NewStructOps,
		"TalkObjectiveNode",
		sizeof(FTalkObjectiveNode),
		alignof(FTalkObjectiveNode),
		Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTalkObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TalkObjectiveNode"), sizeof(FTalkObjectiveNode), Get_Z_Construct_UScriptStruct_FTalkObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTalkObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTalkObjectiveNode_Hash() { return 473381319U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
