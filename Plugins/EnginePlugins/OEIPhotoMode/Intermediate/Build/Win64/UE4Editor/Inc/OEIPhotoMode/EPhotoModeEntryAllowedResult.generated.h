// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_EPhotoModeEntryAllowedResult_generated_h
#error "EPhotoModeEntryAllowedResult.generated.h already included, missing '#pragma once' in EPhotoModeEntryAllowedResult.h"
#endif
#define OEIPHOTOMODE_EPhotoModeEntryAllowedResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_EPhotoModeEntryAllowedResult_h


#define FOREACH_ENUM_EPHOTOMODEENTRYALLOWEDRESULT(op) \
	op(EPhotoModeEntryAllowedResult::Allowed) \
	op(EPhotoModeEntryAllowedResult::UnallowedGameplaySequence) \
	op(EPhotoModeEntryAllowedResult::UnallowedSpectatorMode) \
	op(EPhotoModeEntryAllowedResult::UnallowedMultiplayer) \
	op(EPhotoModeEntryAllowedResult::UnallowedPlayerUnpossessed) \
	op(EPhotoModeEntryAllowedResult::Unallowed) 

enum class EPhotoModeEntryAllowedResult : uint8;
template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeEntryAllowedResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
