// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EPfSourceType_generated_h
#error "EPfSourceType.generated.h already included, missing '#pragma once' in EPfSourceType.h"
#endif
#define PLAYFAB_EPfSourceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EPfSourceType_h


#define FOREACH_ENUM_EPFSOURCETYPE(op) \
	op(EPfSourceType::pfenum_Admin) \
	op(EPfSourceType::pfenum_BackEnd) \
	op(EPfSourceType::pfenum_GameClient) \
	op(EPfSourceType::pfenum_GameServer) \
	op(EPfSourceType::pfenum_Partner) \
	op(EPfSourceType::pfenum_Custom) \
	op(EPfSourceType::pfenum_API) 

enum class EPfSourceType : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EPfSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
