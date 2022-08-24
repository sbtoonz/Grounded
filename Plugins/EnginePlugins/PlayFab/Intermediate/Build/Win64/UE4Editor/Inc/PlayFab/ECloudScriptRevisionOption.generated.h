// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ECloudScriptRevisionOption_generated_h
#error "ECloudScriptRevisionOption.generated.h already included, missing '#pragma once' in ECloudScriptRevisionOption.h"
#endif
#define PLAYFAB_ECloudScriptRevisionOption_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ECloudScriptRevisionOption_h


#define FOREACH_ENUM_ECLOUDSCRIPTREVISIONOPTION(op) \
	op(ECloudScriptRevisionOption::pfenum_Live) \
	op(ECloudScriptRevisionOption::pfenum_Latest) \
	op(ECloudScriptRevisionOption::pfenum_Specific) 

enum class ECloudScriptRevisionOption : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ECloudScriptRevisionOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
