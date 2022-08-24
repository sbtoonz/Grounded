// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ResultFailedKillNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultFailedKillNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedKillNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EKillTargetType();
// End Cross Module References

static_assert(std::is_polymorphic<FResultFailedKillNode>() == std::is_polymorphic<FResultFailedNode>(), "USTRUCT FResultFailedKillNode cannot be polymorphic unless super FResultFailedNode is polymorphic");

class UScriptStruct* FResultFailedKillNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FResultFailedKillNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultFailedKillNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ResultFailedKillNode"), sizeof(FResultFailedKillNode), Get_Z_Construct_UScriptStruct_FResultFailedKillNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FResultFailedKillNode>()
{
	return FResultFailedKillNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResultFailedKillNode(FResultFailedKillNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ResultFailedKillNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedKillNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedKillNode()
	{
		UScriptStruct::DeferCppStructOps<FResultFailedKillNode>(FName(TEXT("ResultFailedKillNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedKillNode;
	struct Z_Construct_UScriptStruct_FResultFailedKillNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResultFailedKillNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultFailedKillNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResultFailedKillNode" },
		{ "ModuleRelativePath", "Public/ResultFailedKillNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultFailedKillNode, TargetId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResultFailedKillNode" },
		{ "ModuleRelativePath", "Public/ResultFailedKillNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultFailedKillNode, TargetType), Z_Construct_UEnum_OEIFlowCharts_EKillTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::NewProp_TargetType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FResultFailedNode,
		&NewStructOps,
		"ResultFailedKillNode",
		sizeof(FResultFailedKillNode),
		alignof(FResultFailedKillNode),
		Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultFailedKillNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResultFailedKillNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResultFailedKillNode"), sizeof(FResultFailedKillNode), Get_Z_Construct_UScriptStruct_FResultFailedKillNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResultFailedKillNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResultFailedKillNode_Hash() { return 3199832248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
