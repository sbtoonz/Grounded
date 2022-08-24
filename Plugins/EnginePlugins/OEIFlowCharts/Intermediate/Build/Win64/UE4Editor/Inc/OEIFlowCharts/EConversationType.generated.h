// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EConversationType_generated_h
#error "EConversationType.generated.h already included, missing '#pragma once' in EConversationType.h"
#endif
#define OEIFLOWCHARTS_EConversationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EConversationType_h


#define FOREACH_ENUM_ECONVERSATIONTYPE(op) \
	op(EConversationType::Conversation) \
	op(EConversationType::Chatter) \
	op(EConversationType::Count) \
	op(EConversationType::Invalid) 

enum class EConversationType : uint8;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EConversationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
