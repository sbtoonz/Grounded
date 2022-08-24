// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEISCRIPTING_EScriptTargetType_generated_h
#error "EScriptTargetType.generated.h already included, missing '#pragma once' in EScriptTargetType.h"
#endif
#define OEISCRIPTING_EScriptTargetType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_EScriptTargetType_h


#define FOREACH_ENUM_ESCRIPTTARGETTYPE(op) \
	op(EScriptTargetType::Owner) \
	op(EScriptTargetType::LocalPlayerPawn) \
	op(EScriptTargetType::InstigatorPlayerPawn) \
	op(EScriptTargetType::ResponderPlayerPawn) \
	op(EScriptTargetType::Speaker) \
	op(EScriptTargetType::Listener) \
	op(EScriptTargetType::WorldContextObject) 

enum class EScriptTargetType;
template<> OEISCRIPTING_API UEnum* StaticEnum<EScriptTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
