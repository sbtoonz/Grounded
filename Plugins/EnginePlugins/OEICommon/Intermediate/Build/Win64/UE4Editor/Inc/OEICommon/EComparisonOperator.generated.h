// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEICOMMON_EComparisonOperator_generated_h
#error "EComparisonOperator.generated.h already included, missing '#pragma once' in EComparisonOperator.h"
#endif
#define OEICOMMON_EComparisonOperator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_EComparisonOperator_h


#define FOREACH_ENUM_ECOMPARISONOPERATOR(op) \
	op(EComparisonOperator::Equals) \
	op(EComparisonOperator::NotEqual) \
	op(EComparisonOperator::GreaterThan) \
	op(EComparisonOperator::LessThan) \
	op(EComparisonOperator::GreaterThanOrEquals) \
	op(EComparisonOperator::LessThanOrEquals) 

enum class EComparisonOperator : uint8;
template<> OEICOMMON_API UEnum* StaticEnum<EComparisonOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
