// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/DialogueNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_ENodePlayType();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EPersistenceType();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_ENodeDisplayType();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogueNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FDialogueNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FDialogueNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FDialogueNode>()
{
	return FDialogueNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueNode(FDialogueNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("DialogueNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueNode()
	{
		UScriptStruct::DeferCppStructOps<FDialogueNode>(FName(TEXT("DialogueNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueNode;
	struct Z_Construct_UScriptStruct_FDialogueNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotSkippable_MetaData[];
#endif
		static void NewProp_bNotSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsQuestionNode_MetaData[];
#endif
		static void NewProp_bIsQuestionNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsQuestionNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSpeaker_MetaData[];
#endif
		static void NewProp_bHideSpeaker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSpeaker;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Persistence_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Persistence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoPlayRandomWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NoPlayRandomWeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable_SetBit(void* Obj)
	{
		((FDialogueNode*)Obj)->bNotSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable = { "bNotSkippable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueNode), &Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode_SetBit(void* Obj)
	{
		((FDialogueNode*)Obj)->bIsQuestionNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode = { "bIsQuestionNode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueNode), &Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker_SetBit(void* Obj)
	{
		((FDialogueNode*)Obj)->bHideSpeaker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker = { "bHideSpeaker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueNode), &Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType = { "PlayType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, PlayType), Z_Construct_UEnum_OEIFlowCharts_ENodePlayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Persistence), Z_Construct_UEnum_OEIFlowCharts_EPersistenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NoPlayRandomWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NoPlayRandomWeight = { "NoPlayRandomWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, NoPlayRandomWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NoPlayRandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NoPlayRandomWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Public/DialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, DisplayType), Z_Construct_UEnum_OEIFlowCharts_ENodeDisplayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bNotSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bIsQuestionNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_bHideSpeaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_PlayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Persistence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NoPlayRandomWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DisplayType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"DialogueNode",
		sizeof(FDialogueNode),
		alignof(FDialogueNode),
		Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash() { return 1160386026U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
