// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EUserDataPermission_generated_h
#error "EUserDataPermission.generated.h already included, missing '#pragma once' in EUserDataPermission.h"
#endif
#define PLAYFAB_EUserDataPermission_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EUserDataPermission_h


#define FOREACH_ENUM_EUSERDATAPERMISSION(op) \
	op(EUserDataPermission::pfenum_Private) \
	op(EUserDataPermission::pfenum_Public) 

enum class EUserDataPermission : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EUserDataPermission>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
