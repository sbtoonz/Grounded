// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIONLINESUBSYSTEMUTILS_EOnlinePermissionDenyReason_generated_h
#error "EOnlinePermissionDenyReason.generated.h already included, missing '#pragma once' in EOnlinePermissionDenyReason.h"
#endif
#define OEIONLINESUBSYSTEMUTILS_EOnlinePermissionDenyReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIOnlineSubsystemUtils_Source_OEIOnlineSubsystemUtils_Public_EOnlinePermissionDenyReason_h


#define FOREACH_ENUM_EONLINEPERMISSIONDENYREASON(op) \
	op(EOnlinePermissionDenyReason::Allowed) \
	op(EOnlinePermissionDenyReason::Unknown) \
	op(EOnlinePermissionDenyReason::NotAllowed) \
	op(EOnlinePermissionDenyReason::MissingPrivilege) \
	op(EOnlinePermissionDenyReason::PrivilegeRestrictsTarget) \
	op(EOnlinePermissionDenyReason::BlockListRestrictsTarget) \
	op(EOnlinePermissionDenyReason::MuteListRestrictsTarget) \
	op(EOnlinePermissionDenyReason::PrivacySettingsRestrictsTarget) 

enum class EOnlinePermissionDenyReason : uint8;
template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlinePermissionDenyReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
