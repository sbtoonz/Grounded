// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ELoginIdentityProvider_generated_h
#error "ELoginIdentityProvider.generated.h already included, missing '#pragma once' in ELoginIdentityProvider.h"
#endif
#define PLAYFAB_ELoginIdentityProvider_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ELoginIdentityProvider_h


#define FOREACH_ENUM_ELOGINIDENTITYPROVIDER(op) \
	op(ELoginIdentityProvider::pfenum_Unknown) \
	op(ELoginIdentityProvider::pfenum_PlayFab) \
	op(ELoginIdentityProvider::pfenum_Custom) \
	op(ELoginIdentityProvider::pfenum_GameCenter) \
	op(ELoginIdentityProvider::pfenum_GooglePlay) \
	op(ELoginIdentityProvider::pfenum_Steam) \
	op(ELoginIdentityProvider::pfenum_XBoxLive) \
	op(ELoginIdentityProvider::pfenum_PSN) \
	op(ELoginIdentityProvider::pfenum_Kongregate) \
	op(ELoginIdentityProvider::pfenum_Facebook) \
	op(ELoginIdentityProvider::pfenum_IOSDevice) \
	op(ELoginIdentityProvider::pfenum_AndroidDevice) \
	op(ELoginIdentityProvider::pfenum_Twitch) \
	op(ELoginIdentityProvider::pfenum_WindowsHello) \
	op(ELoginIdentityProvider::pfenum_GameServer) \
	op(ELoginIdentityProvider::pfenum_CustomServer) \
	op(ELoginIdentityProvider::pfenum_NintendoSwitch) \
	op(ELoginIdentityProvider::pfenum_FacebookInstantGames) \
	op(ELoginIdentityProvider::pfenum_OpenIdConnect) \
	op(ELoginIdentityProvider::pfenum_Apple) \
	op(ELoginIdentityProvider::pfenum_NintendoSwitchAccount) 

enum class ELoginIdentityProvider : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ELoginIdentityProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
