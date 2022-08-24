// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/TriggerConversationNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerConversationNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerConversationNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationReference();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_ETriggerSourceType();
// End Cross Module References

static_assert(std::is_polymorphic<FTriggerConversationNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FTriggerConversationNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FTriggerConversationNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FTriggerConversationNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerConversationNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("TriggerConversationNode"), sizeof(FTriggerConversationNode), Get_Z_Construct_UScriptStruct_FTriggerConversationNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FTriggerConversationNode>()
{
	return FTriggerConversationNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerConversationNode(FTriggerConversationNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("TriggerConversationNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTriggerConversationNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTriggerConversationNode()
	{
		UScriptStruct::DeferCppStructOps<FTriggerConversationNode>(FName(TEXT("TriggerConversationNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFTriggerConversationNode;
	struct Z_Construct_UScriptStruct_FTriggerConversationNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNodeID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerConversationNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerConversationNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_Conversation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerConversationNode" },
		{ "ModuleRelativePath", "Public/TriggerConversationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerConversationNode, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_Conversation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_StartNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerConversationNode" },
		{ "ModuleRelativePath", "Public/TriggerConversationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_StartNodeID = { "StartNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerConversationNode, StartNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_StartNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_StartNodeID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerConversationNode" },
		{ "ModuleRelativePath", "Public/TriggerConversationNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource = { "TriggerSource", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerConversationNode, TriggerSource), Z_Construct_UEnum_OEIFlowCharts_ETriggerSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_Conversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_StartNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::NewProp_TriggerSource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"TriggerConversationNode",
		sizeof(FTriggerConversationNode),
		alignof(FTriggerConversationNode),
		Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerConversationNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerConversationNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerConversationNode"), sizeof(FTriggerConversationNode), Get_Z_Construct_UScriptStruct_FTriggerConversationNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerConversationNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerConversationNode_Hash() { return 2312030329U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
