// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIVOICEOVER_EVoiceOverAudioImplementationType_generated_h
#error "EVoiceOverAudioImplementationType.generated.h already included, missing '#pragma once' in EVoiceOverAudioImplementationType.h"
#endif
#define OEIVOICEOVER_EVoiceOverAudioImplementationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIAudio_Source_OEIVoiceOver_Public_EVoiceOverAudioImplementationType_h


#define FOREACH_ENUM_EVOICEOVERAUDIOIMPLEMENTATIONTYPE(op) \
	op(EVoiceOverAudioImplementationType::Default) \
	op(EVoiceOverAudioImplementationType::FaceFX) \
	op(EVoiceOverAudioImplementationType::FaceFXExternalAudio) \
	op(EVoiceOverAudioImplementationType::CurveTables) \
	op(EVoiceOverAudioImplementationType::CurveTablesUnrealAudio) 

enum class EVoiceOverAudioImplementationType : uint8;
template<> OEIVOICEOVER_API UEnum* StaticEnum<EVoiceOverAudioImplementationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
