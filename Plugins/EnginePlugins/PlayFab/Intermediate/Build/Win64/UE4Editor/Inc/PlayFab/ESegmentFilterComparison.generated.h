// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ESegmentFilterComparison_generated_h
#error "ESegmentFilterComparison.generated.h already included, missing '#pragma once' in ESegmentFilterComparison.h"
#endif
#define PLAYFAB_ESegmentFilterComparison_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ESegmentFilterComparison_h


#define FOREACH_ENUM_ESEGMENTFILTERCOMPARISON(op) \
	op(ESegmentFilterComparison::pfenum_GreaterThan) \
	op(ESegmentFilterComparison::pfenum_LessThan) \
	op(ESegmentFilterComparison::pfenum_EqualTo) \
	op(ESegmentFilterComparison::pfenum_NotEqualTo) \
	op(ESegmentFilterComparison::pfenum_GreaterThanOrEqual) \
	op(ESegmentFilterComparison::pfenum_LessThanOrEqual) \
	op(ESegmentFilterComparison::pfenum_Exists) \
	op(ESegmentFilterComparison::pfenum_Contains) \
	op(ESegmentFilterComparison::pfenum_NotContains) 

enum class ESegmentFilterComparison;
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentFilterComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
