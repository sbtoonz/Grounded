// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEITEXT_EStringTokenValueType_generated_h
#error "EStringTokenValueType.generated.h already included, missing '#pragma once' in EStringTokenValueType.h"
#endif
#define OEITEXT_EStringTokenValueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIText_Public_EStringTokenValueType_h


#define FOREACH_ENUM_ESTRINGTOKENVALUETYPE(op) \
	op(EStringTokenValueType::LocString) \
	op(EStringTokenValueType::Integer) \
	op(EStringTokenValueType::Float) 

enum class EStringTokenValueType : uint8;
template<> OEITEXT_API UEnum* StaticEnum<EStringTokenValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
