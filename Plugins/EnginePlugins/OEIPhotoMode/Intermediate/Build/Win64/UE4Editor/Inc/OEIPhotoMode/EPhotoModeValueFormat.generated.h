// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_EPhotoModeValueFormat_generated_h
#error "EPhotoModeValueFormat.generated.h already included, missing '#pragma once' in EPhotoModeValueFormat.h"
#endif
#define OEIPHOTOMODE_EPhotoModeValueFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_EPhotoModeValueFormat_h


#define FOREACH_ENUM_EPHOTOMODEVALUEFORMAT(op) \
	op(EPhotoModeValueFormat::PlainNumber) \
	op(EPhotoModeValueFormat::Aperture) \
	op(EPhotoModeValueFormat::Degrees) \
	op(EPhotoModeValueFormat::Percent) \
	op(EPhotoModeValueFormat::Seconds) \
	op(EPhotoModeValueFormat::TimeOfDay24h) 

enum class EPhotoModeValueFormat : uint8;
template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeValueFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
