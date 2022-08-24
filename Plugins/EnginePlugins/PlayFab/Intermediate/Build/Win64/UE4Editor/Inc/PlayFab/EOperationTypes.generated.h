// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EOperationTypes_generated_h
#error "EOperationTypes.generated.h already included, missing '#pragma once' in EOperationTypes.h"
#endif
#define PLAYFAB_EOperationTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EOperationTypes_h


#define FOREACH_ENUM_EOPERATIONTYPES(op) \
	op(EOperationTypes::pfenum_Created) \
	op(EOperationTypes::pfenum_Updated) \
	op(EOperationTypes::pfenum_Deleted) \
	op(EOperationTypes::pfenum_None) 

enum class EOperationTypes : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EOperationTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
