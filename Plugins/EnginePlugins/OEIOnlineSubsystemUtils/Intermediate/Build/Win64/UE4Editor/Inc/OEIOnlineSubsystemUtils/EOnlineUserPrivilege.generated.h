// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIONLINESUBSYSTEMUTILS_EOnlineUserPrivilege_generated_h
#error "EOnlineUserPrivilege.generated.h already included, missing '#pragma once' in EOnlineUserPrivilege.h"
#endif
#define OEIONLINESUBSYSTEMUTILS_EOnlineUserPrivilege_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIOnlineSubsystemUtils_Source_OEIOnlineSubsystemUtils_Public_EOnlineUserPrivilege_h


#define FOREACH_ENUM_EONLINEUSERPRIVILEGE(op) \
	op(EOnlineUserPrivilege::CrossPlay) \
	op(EOnlineUserPrivilege::Clubs) \
	op(EOnlineUserPrivilege::CloudSavedGames) \
	op(EOnlineUserPrivilege::SocialNetworkSharing) \
	op(EOnlineUserPrivilege::AccessUserGeneratedContent) \
	op(EOnlineUserPrivilege::Communications) \
	op(EOnlineUserPrivilege::Multiplayer) \
	op(EOnlineUserPrivilege::AddFriends) \
	op(EOnlineUserPrivilege::ReceivingSpeechToText) \
	op(EOnlineUserPrivilege::ReceivingTextToSpeech) \
	op(EOnlineUserPrivilege::TextToSpeech) 

enum class EOnlineUserPrivilege : uint8;
template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineUserPrivilege>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
