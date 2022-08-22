#pragma once
#include "CoreMinimal.h"
#include "EMainMenuState.generated.h"

UENUM()
enum class EMainMenuState : uint8 {
    None,
    BeginShowMainMenuState,
    PressAnyKey,
    LoggingIn,
    ConvertingOldSaveFiles,
    MainMenu,
    SinglePlayerSelect,
    WaitingForMultiplayerPrivilegeCheck,
    MultiPlayerHostJoinSelect,
    MultiPlayerNewContinueSelect,
    WaitForHostingGame,
    Options,
    Credits,
    Quitting,
    LoadGame,
    ServerBroswer,
    GameLobby,
    Complete,
};

