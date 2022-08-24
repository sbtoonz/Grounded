// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EStatisticAggregationMethod_generated_h
#error "EStatisticAggregationMethod.generated.h already included, missing '#pragma once' in EStatisticAggregationMethod.h"
#endif
#define PLAYFAB_EStatisticAggregationMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EStatisticAggregationMethod_h


#define FOREACH_ENUM_ESTATISTICAGGREGATIONMETHOD(op) \
	op(EStatisticAggregationMethod::pfenum_Last) \
	op(EStatisticAggregationMethod::pfenum_Min) \
	op(EStatisticAggregationMethod::pfenum_Max) \
	op(EStatisticAggregationMethod::pfenum_Sum) 

enum class EStatisticAggregationMethod : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticAggregationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
