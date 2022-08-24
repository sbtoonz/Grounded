// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_EPhotoSettingsGroup_generated_h
#error "EPhotoSettingsGroup.generated.h already included, missing '#pragma once' in EPhotoSettingsGroup.h"
#endif
#define OEIPHOTOMODE_EPhotoSettingsGroup_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_EPhotoSettingsGroup_h


#define FOREACH_ENUM_EPHOTOSETTINGSGROUP(op) \
	op(EPhotoSettingsGroup::None) \
	op(EPhotoSettingsGroup::Camera) \
	op(EPhotoSettingsGroup::Effects) \
	op(EPhotoSettingsGroup::Character) \
	op(EPhotoSettingsGroup::World) 

enum class EPhotoSettingsGroup : uint8;
template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoSettingsGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
