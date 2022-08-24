// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ERegion_generated_h
#error "ERegion.generated.h already included, missing '#pragma once' in ERegion.h"
#endif
#define PLAYFAB_ERegion_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ERegion_h


#define FOREACH_ENUM_EREGION(op) \
	op(ERegion::pfenum_USCentral) \
	op(ERegion::pfenum_USEast) \
	op(ERegion::pfenum_EUWest) \
	op(ERegion::pfenum_Singapore) \
	op(ERegion::pfenum_Japan) \
	op(ERegion::pfenum_Brazil) \
	op(ERegion::pfenum_Australia) 

enum class ERegion : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ERegion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
