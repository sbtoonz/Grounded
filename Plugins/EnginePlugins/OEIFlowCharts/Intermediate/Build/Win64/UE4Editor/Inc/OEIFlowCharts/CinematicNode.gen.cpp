// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/CinematicNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCinematicNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References

static_assert(std::is_polymorphic<FCinematicNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FCinematicNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FCinematicNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FCinematicNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCinematicNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("CinematicNode"), sizeof(FCinematicNode), Get_Z_Construct_UScriptStruct_FCinematicNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FCinematicNode>()
{
	return FCinematicNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCinematicNode(FCinematicNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("CinematicNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCinematicNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCinematicNode()
	{
		UScriptStruct::DeferCppStructOps<FCinematicNode>(FName(TEXT("CinematicNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFCinematicNode;
	struct Z_Construct_UScriptStruct_FCinematicNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequencePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinematicNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CinematicNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCinematicNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCinematicNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinematicNode_Statics::NewProp_SequencePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CinematicNode" },
		{ "ModuleRelativePath", "Public/CinematicNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCinematicNode_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCinematicNode, SequencePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinematicNode_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicNode_Statics::NewProp_SequencePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCinematicNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinematicNode_Statics::NewProp_SequencePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCinematicNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"CinematicNode",
		sizeof(FCinematicNode),
		alignof(FCinematicNode),
		Z_Construct_UScriptStruct_FCinematicNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCinematicNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCinematicNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCinematicNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CinematicNode"), sizeof(FCinematicNode), Get_Z_Construct_UScriptStruct_FCinematicNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCinematicNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCinematicNode_Hash() { return 2835715571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
