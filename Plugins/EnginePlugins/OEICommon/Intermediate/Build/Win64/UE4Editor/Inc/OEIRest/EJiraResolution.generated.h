// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIREST_EJiraResolution_generated_h
#error "EJiraResolution.generated.h already included, missing '#pragma once' in EJiraResolution.h"
#endif
#define OEIREST_EJiraResolution_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIRest_Public_EJiraResolution_h


#define FOREACH_ENUM_EJIRARESOLUTION(op) \
	op(EJiraResolution::Fixed) \
	op(EJiraResolution::WontFix) \
	op(EJiraResolution::Duplicate) \
	op(EJiraResolution::Incomplete) \
	op(EJiraResolution::CannotReproduce) \
	op(EJiraResolution::Done) \
	op(EJiraResolution::Waived) \
	op(EJiraResolution::Cut) \
	op(EJiraResolution::Accepted) \
	op(EJiraResolution::Rejected) \
	op(EJiraResolution::WontDo) \
	op(EJiraResolution::Declined) \
	op(EJiraResolution::Completed) \
	op(EJiraResolution::Reopened) \
	op(EJiraResolution::Pass) \
	op(EJiraResolution::Fail) \
	op(EJiraResolution::Submittable) \
	op(EJiraResolution::Unknown) 

enum class EJiraResolution;
template<> OEIREST_API UEnum* StaticEnum<EJiraResolution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
