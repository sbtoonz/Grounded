// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ECancellationReason_generated_h
#error "ECancellationReason.generated.h already included, missing '#pragma once' in ECancellationReason.h"
#endif
#define PLAYFAB_ECancellationReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ECancellationReason_h


#define FOREACH_ENUM_ECANCELLATIONREASON(op) \
	op(ECancellationReason::pfenum_Requested) \
	op(ECancellationReason::pfenum_Internal) \
	op(ECancellationReason::pfenum_Timeout) 

enum class ECancellationReason;
template<> PLAYFAB_API UEnum* StaticEnum<ECancellationReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
