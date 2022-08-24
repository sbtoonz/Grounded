// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References

static_assert(std::is_polymorphic<FChatterNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FChatterNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FChatterNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FChatterNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatterNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ChatterNode"), sizeof(FChatterNode), Get_Z_Construct_UScriptStruct_FChatterNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FChatterNode>()
{
	return FChatterNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatterNode(FChatterNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ChatterNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNode()
	{
		UScriptStruct::DeferCppStructOps<FChatterNode>(FName(TEXT("ChatterNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNode;
	struct Z_Construct_UScriptStruct_FChatterNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Param2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Param3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Param4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioEventType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioAssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioAssetPaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationAssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationAssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationAssetPaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatterNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, Param1), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, Param2), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, Param3), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, Param4), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioEventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioEventType = { "AudioEventType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, AudioEventType), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioEventType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths_Inner = { "AudioAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths = { "AudioAssetPaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, AudioAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths_Inner = { "AnimationAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNode" },
		{ "ModuleRelativePath", "Public/ChatterNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths = { "AnimationAssetPaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNode, AnimationAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatterNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_Param4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AudioAssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNode_Statics::NewProp_AnimationAssetPaths,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"ChatterNode",
		sizeof(FChatterNode),
		alignof(FChatterNode),
		Z_Construct_UScriptStruct_FChatterNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatterNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatterNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatterNode"), sizeof(FChatterNode), Get_Z_Construct_UScriptStruct_FChatterNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatterNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatterNode_Hash() { return 450996726U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
