// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EBankNodePlayType_generated_h
#error "EBankNodePlayType.generated.h already included, missing '#pragma once' in EBankNodePlayType.h"
#endif
#define OEIFLOWCHARTS_EBankNodePlayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EBankNodePlayType_h


#define FOREACH_ENUM_EBANKNODEPLAYTYPE(op) \
	op(EBankNodePlayType::PlayFirst) \
	op(EBankNodePlayType::PlayAll) \
	op(EBankNodePlayType::PlayRandom) \
	op(EBankNodePlayType::CycleRandom) \
	op(EBankNodePlayType::VoicedResponse) \
	op(EBankNodePlayType::ObjectiveBank) 

enum class EBankNodePlayType : uint8;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EBankNodePlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
