#pragma once
#include "CoreMinimal.h"
#include "EUserOrigination.generated.h"

UENUM()
enum class EUserOrigination {
    pfenum_Organic,
    pfenum_Steam,
    pfenum_Google,
    pfenum_Amazon,
    pfenum_Facebook,
    pfenum_Kongregate,
    pfenum_GamersFirst,
    pfenum_Unknown,
    pfenum_IOS,
    pfenum_LoadTest,
    pfenum_Android,
    pfenum_PSN,
    pfenum_GameCenter,
    pfenum_CustomId,
    pfenum_XboxLive,
    pfenum_Parse,
    pfenum_Twitch,
    pfenum_WindowsHello,
    pfenum_ServerCustomId,
    pfenum_NintendoSwitchDeviceId,
    pfenum_FacebookInstantGamesId,
    pfenum_OpenIdConnect,
    pfenum_Apple,
    pfenum_NintendoSwitchAccount,
    pfenum_MAX UMETA(Hidden),
};

