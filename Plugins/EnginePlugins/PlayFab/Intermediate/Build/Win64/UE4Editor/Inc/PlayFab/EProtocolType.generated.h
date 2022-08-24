// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EProtocolType_generated_h
#error "EProtocolType.generated.h already included, missing '#pragma once' in EProtocolType.h"
#endif
#define PLAYFAB_EProtocolType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EProtocolType_h


#define FOREACH_ENUM_EPROTOCOLTYPE(op) \
	op(EProtocolType::pfenum_TCP) \
	op(EProtocolType::pfenum_UDP) 

enum class EProtocolType;
template<> PLAYFAB_API UEnum* StaticEnum<EProtocolType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
