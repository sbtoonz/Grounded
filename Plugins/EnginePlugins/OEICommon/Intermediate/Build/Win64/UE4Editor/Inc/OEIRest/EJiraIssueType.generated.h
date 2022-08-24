// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIREST_EJiraIssueType_generated_h
#error "EJiraIssueType.generated.h already included, missing '#pragma once' in EJiraIssueType.h"
#endif
#define OEIREST_EJiraIssueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIRest_Public_EJiraIssueType_h


#define FOREACH_ENUM_EJIRAISSUETYPE(op) \
	op(EJiraIssueType::Bug) \
	op(EJiraIssueType::Task) \
	op(EJiraIssueType::Unknown) 

enum class EJiraIssueType;
template<> OEIREST_API UEnum* StaticEnum<EJiraIssueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
