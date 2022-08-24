// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EPersistenceType_generated_h
#error "EPersistenceType.generated.h already included, missing '#pragma once' in EPersistenceType.h"
#endif
#define OEIFLOWCHARTS_EPersistenceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EPersistenceType_h


#define FOREACH_ENUM_EPERSISTENCETYPE(op) \
	op(EPersistenceType::None) \
	op(EPersistenceType::OnceEver) \
	op(EPersistenceType::OncePerConversation) \
	op(EPersistenceType::MarkAsRead) 

enum class EPersistenceType : uint8;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EPersistenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
