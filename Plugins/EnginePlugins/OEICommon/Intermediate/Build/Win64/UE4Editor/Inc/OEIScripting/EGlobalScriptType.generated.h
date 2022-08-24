// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEISCRIPTING_EGlobalScriptType_generated_h
#error "EGlobalScriptType.generated.h already included, missing '#pragma once' in EGlobalScriptType.h"
#endif
#define OEISCRIPTING_EGlobalScriptType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_EGlobalScriptType_h


#define FOREACH_ENUM_EGLOBALSCRIPTTYPE(op) \
	op(EGlobalScriptType::Script) \
	op(EGlobalScriptType::Conditional) 

enum class EGlobalScriptType : uint8;
template<> OEISCRIPTING_API UEnum* StaticEnum<EGlobalScriptType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
