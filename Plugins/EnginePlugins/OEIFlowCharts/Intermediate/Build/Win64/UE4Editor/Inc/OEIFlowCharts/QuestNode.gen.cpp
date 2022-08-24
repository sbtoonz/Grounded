// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEndState();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FQuestNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FQuestNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FQuestNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("QuestNode"), sizeof(FQuestNode), Get_Z_Construct_UScriptStruct_FQuestNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FQuestNode>()
{
	return FQuestNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestNode(FQuestNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("QuestNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestNode()
	{
		UScriptStruct::DeferCppStructOps<FQuestNode>(FName(TEXT("QuestNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestNode;
	struct Z_Construct_UScriptStruct_FQuestNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EndStates;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlternateDescriptionIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateDescriptionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternateDescriptionIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperienceReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestNode>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates_Inner = { "EndStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestEndState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/QuestNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates = { "EndStates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestNode, EndStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs_Inner = { "AlternateDescriptionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/QuestNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs = { "AlternateDescriptionIDs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestNode, AlternateDescriptionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_ExperienceReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/QuestNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_ExperienceReward = { "ExperienceReward", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestNode, ExperienceReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_ExperienceReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_ExperienceReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_EndStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_AlternateDescriptionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_ExperienceReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"QuestNode",
		sizeof(FQuestNode),
		alignof(FQuestNode),
		Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestNode"), sizeof(FQuestNode), Get_Z_Construct_UScriptStruct_FQuestNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestNode_Hash() { return 409456053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
