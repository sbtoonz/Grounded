// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EEmailVerificationStatus_generated_h
#error "EEmailVerificationStatus.generated.h already included, missing '#pragma once' in EEmailVerificationStatus.h"
#endif
#define PLAYFAB_EEmailVerificationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EEmailVerificationStatus_h


#define FOREACH_ENUM_EEMAILVERIFICATIONSTATUS(op) \
	op(EEmailVerificationStatus::pfenum_Unverified) \
	op(EEmailVerificationStatus::pfenum_Pending) \
	op(EEmailVerificationStatus::pfenum_Confirmed) 

enum class EEmailVerificationStatus;
template<> PLAYFAB_API UEnum* StaticEnum<EEmailVerificationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
