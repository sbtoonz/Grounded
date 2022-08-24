// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBundle() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestBundle();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartBundle();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestType();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLink();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveBankNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTalkObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGenericObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FKillObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FAcquireItemObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBranchCompleteNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestBranchNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FEndStateNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventKillNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultSuccessNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedGlobalVariableNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedAcquireItemNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedKillNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedFactionChangeNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedObjectiveBankNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedBranchNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestNode();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestBundle>() == std::is_polymorphic<FFlowChartBundle>(), "USTRUCT FQuestBundle cannot be polymorphic unless super FFlowChartBundle is polymorphic");

class UScriptStruct* FQuestBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FQuestBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestBundle, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("QuestBundle"), sizeof(FQuestBundle), Get_Z_Construct_UScriptStruct_FQuestBundle_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FQuestBundle>()
{
	return FQuestBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestBundle(FQuestBundle::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("QuestBundle"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestBundle
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestBundle()
	{
		UScriptStruct::DeferCppStructOps<FQuestBundle>(FName(TEXT("QuestBundle")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFQuestBundle;
	struct Z_Construct_UScriptStruct_FQuestBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveBankNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveBankNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectiveBankNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TalkObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TalkObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalVariableObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVariableObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalVariableObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GenericObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcquireItemObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireItemObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcquireItemObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchCompleteObjectiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchCompleteObjectiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchCompleteObjectiveNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchCompleteNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchCompleteNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchCompleteNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestBranchNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestBranchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestBranchNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndStateNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndStateNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EndStateNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalQuestEventGlobalVariableNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalQuestEventGlobalVariableNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalQuestEventGlobalVariableNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalQuestEventKillNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalQuestEventKillNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalQuestEventKillNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalQuestEventFactionChangeNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalQuestEventFactionChangeNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalQuestEventFactionChangeNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultSuccessNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultSuccessNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultSuccessNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultSuccessGlobalVariableNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultSuccessGlobalVariableNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultSuccessGlobalVariableNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedGlobalVariableNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedGlobalVariableNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedGlobalVariableNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedAcquireItemNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedAcquireItemNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedAcquireItemNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedKillNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedKillNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedKillNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedFactionChangeNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedFactionChangeNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedFactionChangeNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedObjectiveBankNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedObjectiveBankNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedObjectiveBankNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultFailedBranchNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFailedBranchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultFailedBranchNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalQuestNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalQuestNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestBundle>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType = { "QuestType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, QuestType), Z_Construct_UEnum_OEIFlowCharts_EQuestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks_Inner = { "QuestLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks = { "QuestLinks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, QuestLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes_Inner = { "ObjectiveBankNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectiveBankNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes = { "ObjectiveBankNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ObjectiveBankNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes_Inner = { "TalkObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTalkObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes = { "TalkObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, TalkObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes_Inner = { "GlobalVariableObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes = { "GlobalVariableObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GlobalVariableObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes_Inner = { "GenericObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGenericObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes = { "GenericObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GenericObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes_Inner = { "KillObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKillObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes = { "KillObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, KillObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes_Inner = { "AcquireItemObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAcquireItemObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes = { "AcquireItemObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, AcquireItemObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes_Inner = { "BranchCompleteObjectiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBranchCompleteObjectiveNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes = { "BranchCompleteObjectiveNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, BranchCompleteObjectiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes_Inner = { "BranchCompleteNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBranchCompleteNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes = { "BranchCompleteNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, BranchCompleteNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes_Inner = { "QuestBranchNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestBranchNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes = { "QuestBranchNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, QuestBranchNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes_Inner = { "EndStateNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEndStateNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes = { "EndStateNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, EndStateNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes_Inner = { "ScriptNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes = { "ScriptNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ScriptNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes_Inner = { "GlobalQuestEventGlobalVariableNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes = { "GlobalQuestEventGlobalVariableNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GlobalQuestEventGlobalVariableNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes_Inner = { "GlobalQuestEventKillNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalQuestEventKillNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes = { "GlobalQuestEventKillNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GlobalQuestEventKillNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes_Inner = { "GlobalQuestEventFactionChangeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGlobalQuestEventFactionChangeNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes = { "GlobalQuestEventFactionChangeNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GlobalQuestEventFactionChangeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes_Inner = { "ResultSuccessNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultSuccessNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes = { "ResultSuccessNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultSuccessNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes_Inner = { "ResultSuccessGlobalVariableNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes = { "ResultSuccessGlobalVariableNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultSuccessGlobalVariableNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes_Inner = { "ResultFailedGlobalVariableNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedGlobalVariableNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes = { "ResultFailedGlobalVariableNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedGlobalVariableNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes_Inner = { "ResultFailedAcquireItemNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedAcquireItemNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes = { "ResultFailedAcquireItemNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedAcquireItemNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes_Inner = { "ResultFailedKillNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedKillNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes = { "ResultFailedKillNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedKillNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes_Inner = { "ResultFailedFactionChangeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedFactionChangeNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes = { "ResultFailedFactionChangeNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedFactionChangeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes_Inner = { "ResultFailedObjectiveBankNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedObjectiveBankNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes = { "ResultFailedObjectiveBankNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedObjectiveBankNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes_Inner = { "ResultFailedBranchNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResultFailedBranchNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes = { "ResultFailedBranchNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, ResultFailedBranchNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestNode = { "QuestNode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, QuestNode), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundle" },
		{ "ModuleRelativePath", "Public/QuestBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestNode = { "GlobalQuestNode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestBundle, GlobalQuestNode), Z_Construct_UScriptStruct_FGlobalQuestNode, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ObjectiveBankNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_TalkObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalVariableObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GenericObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_KillObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_AcquireItemObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteObjectiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_BranchCompleteNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestBranchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_EndStateNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ScriptNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventGlobalVariableNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventKillNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestEventFactionChangeNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultSuccessGlobalVariableNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedGlobalVariableNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedAcquireItemNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedKillNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedFactionChangeNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedObjectiveBankNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_ResultFailedBranchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_QuestNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestBundle_Statics::NewProp_GlobalQuestNode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartBundle,
		&NewStructOps,
		"QuestBundle",
		sizeof(FQuestBundle),
		alignof(FQuestBundle),
		Z_Construct_UScriptStruct_FQuestBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestBundle"), sizeof(FQuestBundle), Get_Z_Construct_UScriptStruct_FQuestBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestBundle_Hash() { return 3937631865U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
