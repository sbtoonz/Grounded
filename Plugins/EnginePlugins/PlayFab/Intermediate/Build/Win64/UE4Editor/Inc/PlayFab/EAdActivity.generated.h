// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EAdActivity_generated_h
#error "EAdActivity.generated.h already included, missing '#pragma once' in EAdActivity.h"
#endif
#define PLAYFAB_EAdActivity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EAdActivity_h


#define FOREACH_ENUM_EADACTIVITY(op) \
	op(EAdActivity::pfenum_Opened) \
	op(EAdActivity::pfenum_Closed) \
	op(EAdActivity::pfenum_Start) \
	op(EAdActivity::pfenum_End) 

enum class EAdActivity : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EAdActivity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
