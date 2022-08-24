// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EIdentifiedDeviceType_generated_h
#error "EIdentifiedDeviceType.generated.h already included, missing '#pragma once' in EIdentifiedDeviceType.h"
#endif
#define PLAYFAB_EIdentifiedDeviceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EIdentifiedDeviceType_h


#define FOREACH_ENUM_EIDENTIFIEDDEVICETYPE(op) \
	op(EIdentifiedDeviceType::pfenum_Unknown) \
	op(EIdentifiedDeviceType::pfenum_XboxOne) \
	op(EIdentifiedDeviceType::pfenum_Scarlett) 

enum class EIdentifiedDeviceType : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EIdentifiedDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
