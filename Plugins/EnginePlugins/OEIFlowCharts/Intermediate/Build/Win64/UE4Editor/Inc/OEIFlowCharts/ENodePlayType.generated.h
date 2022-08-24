// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_ENodePlayType_generated_h
#error "ENodePlayType.generated.h already included, missing '#pragma once' in ENodePlayType.h"
#endif
#define OEIFLOWCHARTS_ENodePlayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_ENodePlayType_h


#define FOREACH_ENUM_ENODEPLAYTYPE(op) \
	op(ENodePlayType::Normal) \
	op(ENodePlayType::Random) \
	op(ENodePlayType::CycleLoop) \
	op(ENodePlayType::CycleStop) \
	op(ENodePlayType::CycleRandom) 

enum class ENodePlayType : uint8;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<ENodePlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
