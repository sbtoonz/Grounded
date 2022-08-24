// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_TalkNode_generated_h
#error "TalkNode.generated.h already included, missing '#pragma once' in TalkNode.h"
#endif
#define OEIFLOWCHARTS_TalkNode_generated_h

#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_TalkNode_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTalkNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SpeakerID() { return STRUCT_OFFSET(FTalkNode, SpeakerID); } \
	FORCEINLINE static uint32 __PPO__ListenerID() { return STRUCT_OFFSET(FTalkNode, ListenerID); } \
	FORCEINLINE static uint32 __PPO__EmotionType() { return STRUCT_OFFSET(FTalkNode, EmotionType); } \
	FORCEINLINE static uint32 __PPO__EmotionStrength() { return STRUCT_OFFSET(FTalkNode, EmotionStrength); } \
	FORCEINLINE static uint32 __PPO__EmotionDelay() { return STRUCT_OFFSET(FTalkNode, EmotionDelay); } \
	FORCEINLINE static uint32 __PPO__ExternalVO() { return STRUCT_OFFSET(FTalkNode, ExternalVO); } \
	FORCEINLINE static uint32 __PPO__AudioEventType() { return STRUCT_OFFSET(FTalkNode, AudioEventType); } \
	FORCEINLINE static uint32 __PPO__bHasGenericSpeaker() { return STRUCT_OFFSET(FTalkNode, bHasGenericSpeaker); } \
	FORCEINLINE static uint32 __PPO__bHasVO() { return STRUCT_OFFSET(FTalkNode, bHasVO); } \
	FORCEINLINE static uint32 __PPO__bPersistEmotion() { return STRUCT_OFFSET(FTalkNode, bPersistEmotion); } \
	FORCEINLINE static uint32 __PPO__bIsCheckpoint() { return STRUCT_OFFSET(FTalkNode, bIsCheckpoint); } \
	FORCEINLINE static uint32 __PPO__CheckpointBranchID() { return STRUCT_OFFSET(FTalkNode, CheckpointBranchID); } \
	FORCEINLINE static uint32 __PPO__bMergeSequenceWithNextNode() { return STRUCT_OFFSET(FTalkNode, bMergeSequenceWithNextNode); } \
	FORCEINLINE static uint32 __PPO__bUsesSequence() { return STRUCT_OFFSET(FTalkNode, bUsesSequence); } \
	FORCEINLINE static uint32 __PPO__SequencePath() { return STRUCT_OFFSET(FTalkNode, SequencePath); } \
	FORCEINLINE static uint32 __PPO__TimelineHash() { return STRUCT_OFFSET(FTalkNode, TimelineHash); } \
	typedef FDialogueNode Super;


template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<struct FTalkNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_TalkNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
