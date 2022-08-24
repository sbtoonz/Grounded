// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEICOMMON_EOEIGender_generated_h
#error "EOEIGender.generated.h already included, missing '#pragma once' in EOEIGender.h"
#endif
#define OEICOMMON_EOEIGender_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_EOEIGender_h


#define FOREACH_ENUM_EOEIGENDER(op) \
	op(EOEIGender::Male) \
	op(EOEIGender::Female) \
	op(EOEIGender::Neuter) \
	op(EOEIGender::GenderNeutral) 

enum class EOEIGender : uint8;
template<> OEICOMMON_API UEnum* StaticEnum<EOEIGender>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
