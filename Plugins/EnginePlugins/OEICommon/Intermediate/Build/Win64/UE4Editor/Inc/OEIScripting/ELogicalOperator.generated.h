// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEISCRIPTING_ELogicalOperator_generated_h
#error "ELogicalOperator.generated.h already included, missing '#pragma once' in ELogicalOperator.h"
#endif
#define OEISCRIPTING_ELogicalOperator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ELogicalOperator_h


#define FOREACH_ENUM_ELOGICALOPERATOR(op) \
	op(ELogicalOperator::And) \
	op(ELogicalOperator::Or) 

enum class ELogicalOperator : uint8;
template<> OEISCRIPTING_API UEnum* StaticEnum<ELogicalOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
