// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EPushSetupPlatform_generated_h
#error "EPushSetupPlatform.generated.h already included, missing '#pragma once' in EPushSetupPlatform.h"
#endif
#define PLAYFAB_EPushSetupPlatform_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EPushSetupPlatform_h


#define FOREACH_ENUM_EPUSHSETUPPLATFORM(op) \
	op(EPushSetupPlatform::pfenum_GCM) \
	op(EPushSetupPlatform::pfenum_APNS) \
	op(EPushSetupPlatform::pfenum_APNS_SANDBOX) 

enum class EPushSetupPlatform : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EPushSetupPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
