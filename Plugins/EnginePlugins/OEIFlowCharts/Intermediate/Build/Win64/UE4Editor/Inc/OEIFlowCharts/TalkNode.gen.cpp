// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/TalkNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTalkNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTalkNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References

static_assert(std::is_polymorphic<FTalkNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FTalkNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FTalkNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FTalkNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("TalkNode"), sizeof(FTalkNode), Get_Z_Construct_UScriptStruct_FTalkNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FTalkNode>()
{
	return FTalkNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTalkNode(FTalkNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("TalkNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkNode()
	{
		UScriptStruct::DeferCppStructOps<FTalkNode>(FName(TEXT("TalkNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFTalkNode;
	struct Z_Construct_UScriptStruct_FTalkNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListenerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmotionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmotionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmotionStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmotionStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmotionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmotionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasGenericSpeaker_MetaData[];
#endif
		static void NewProp_bHasGenericSpeaker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasGenericSpeaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVO_MetaData[];
#endif
		static void NewProp_bHasVO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistEmotion_MetaData[];
#endif
		static void NewProp_bPersistEmotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistEmotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckpoint_MetaData[];
#endif
		static void NewProp_bIsCheckpoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointBranchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheckpointBranchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeSequenceWithNextNode_MetaData[];
#endif
		static void NewProp_bMergeSequenceWithNextNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeSequenceWithNextNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesSequence_MetaData[];
#endif
		static void NewProp_bUsesSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequencePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimelineHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, SpeakerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SpeakerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SpeakerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ListenerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ListenerID = { "ListenerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, ListenerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ListenerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ListenerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionType = { "EmotionType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, EmotionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionStrength = { "EmotionStrength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, EmotionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionDelay = { "EmotionDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, EmotionDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ExternalVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ExternalVO = { "ExternalVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, ExternalVO), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ExternalVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ExternalVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_AudioEventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_AudioEventType = { "AudioEventType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, AudioEventType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_AudioEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_AudioEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bHasGenericSpeaker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker = { "bHasGenericSpeaker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bHasVO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO = { "bHasVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bPersistEmotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion = { "bPersistEmotion", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bIsCheckpoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint = { "bIsCheckpoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_CheckpointBranchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_CheckpointBranchID = { "CheckpointBranchID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, CheckpointBranchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_CheckpointBranchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_CheckpointBranchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bMergeSequenceWithNextNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode = { "bMergeSequenceWithNextNode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence_SetBit(void* Obj)
	{
		((FTalkNode*)Obj)->bUsesSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence = { "bUsesSequence", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkNode), &Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SequencePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, SequencePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SequencePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_TimelineHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TalkNode" },
		{ "ModuleRelativePath", "Public/TalkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_TimelineHash = { "TimelineHash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkNode, TimelineHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_TimelineHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_TimelineHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SpeakerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ListenerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_EmotionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_ExternalVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_AudioEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasGenericSpeaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bHasVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bPersistEmotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bIsCheckpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_CheckpointBranchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bMergeSequenceWithNextNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_bUsesSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_SequencePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkNode_Statics::NewProp_TimelineHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"TalkNode",
		sizeof(FTalkNode),
		alignof(FTalkNode),
		Z_Construct_UScriptStruct_FTalkNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTalkNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TalkNode"), sizeof(FTalkNode), Get_Z_Construct_UScriptStruct_FTalkNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTalkNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTalkNode_Hash() { return 453326029U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
