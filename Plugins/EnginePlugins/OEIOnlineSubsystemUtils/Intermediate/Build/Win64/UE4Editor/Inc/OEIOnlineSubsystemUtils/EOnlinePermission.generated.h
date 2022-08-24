// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIONLINESUBSYSTEMUTILS_EOnlinePermission_generated_h
#error "EOnlinePermission.generated.h already included, missing '#pragma once' in EOnlinePermission.h"
#endif
#define OEIONLINESUBSYSTEMUTILS_EOnlinePermission_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIOnlineSubsystemUtils_Source_OEIOnlineSubsystemUtils_Public_EOnlinePermission_h


#define FOREACH_ENUM_EONLINEPERMISSION(op) \
	op(EOnlinePermission::CommunicateUsingText) \
	op(EOnlinePermission::CommunicateUsingVideo) \
	op(EOnlinePermission::CommunicateUsingVoice) \
	op(EOnlinePermission::ViewTargetProfile) \
	op(EOnlinePermission::ViewTargetPresence) \
	op(EOnlinePermission::PlayMultiplayer) 

enum class EOnlinePermission : uint8;
template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlinePermission>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
