// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIONLINESUBSYSTEMUTILS_EOnlineUserPrivilegeDenyReason_generated_h
#error "EOnlineUserPrivilegeDenyReason.generated.h already included, missing '#pragma once' in EOnlineUserPrivilegeDenyReason.h"
#endif
#define OEIONLINESUBSYSTEMUTILS_EOnlineUserPrivilegeDenyReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIOnlineSubsystemUtils_Source_OEIOnlineSubsystemUtils_Public_EOnlineUserPrivilegeDenyReason_h


#define FOREACH_ENUM_EONLINEUSERPRIVILEGEDENYREASON(op) \
	op(EOnlineUserPrivilegeDenyReason::None) \
	op(EOnlineUserPrivilegeDenyReason::PurchaseRequired) \
	op(EOnlineUserPrivilegeDenyReason::Restricted) \
	op(EOnlineUserPrivilegeDenyReason::Banned) \
	op(EOnlineUserPrivilegeDenyReason::UpdateRequired) \
	op(EOnlineUserPrivilegeDenyReason::ServiceVersionMismatch) \
	op(EOnlineUserPrivilegeDenyReason::ServiceMaintenance) \
	op(EOnlineUserPrivilegeDenyReason::Unknown) 

enum class EOnlineUserPrivilegeDenyReason : uint8;
template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineUserPrivilegeDenyReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
