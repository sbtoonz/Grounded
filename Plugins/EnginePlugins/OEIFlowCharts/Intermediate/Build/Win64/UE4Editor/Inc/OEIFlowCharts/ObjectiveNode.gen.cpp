// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEventNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveWaypoint();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EObjectiveUpdateDisplayType();
// End Cross Module References

static_assert(std::is_polymorphic<FObjectiveNode>() == std::is_polymorphic<FQuestEventNode>(), "USTRUCT FObjectiveNode cannot be polymorphic unless super FQuestEventNode is polymorphic");

class UScriptStruct* FObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ObjectiveNode"), sizeof(FObjectiveNode), Get_Z_Construct_UScriptStruct_FObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FObjectiveNode>()
{
	return FObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectiveNode(FObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FObjectiveNode>(FName(TEXT("ObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveNode;
	struct Z_Construct_UScriptStruct_FObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddendumIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddendumIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddendumIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlternateDescriptionIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateDescriptionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternateDescriptionIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperienceWeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentBranchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentBranchID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectiveNode>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs_Inner = { "AddendumIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs = { "AddendumIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, AddendumIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs_Inner = { "AlternateDescriptionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs = { "AlternateDescriptionIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, AlternateDescriptionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectiveWaypoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ExperienceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ExperienceWeight = { "ExperienceWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, ExperienceWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ExperienceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ExperienceWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, DisplayType), Z_Construct_UEnum_OEIFlowCharts_EObjectiveUpdateDisplayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_SortGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_SortGroup = { "SortGroup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, SortGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_SortGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_SortGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ParentBranchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveNode" },
		{ "ModuleRelativePath", "Public/ObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ParentBranchID = { "ParentBranchID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveNode, ParentBranchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ParentBranchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ParentBranchID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AddendumIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_AlternateDescriptionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ExperienceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_DisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_SortGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveNode_Statics::NewProp_ParentBranchID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FQuestEventNode,
		&NewStructOps,
		"ObjectiveNode",
		sizeof(FObjectiveNode),
		alignof(FObjectiveNode),
		Z_Construct_UScriptStruct_FObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectiveNode"), sizeof(FObjectiveNode), Get_Z_Construct_UScriptStruct_FObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectiveNode_Hash() { return 1832810903U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
