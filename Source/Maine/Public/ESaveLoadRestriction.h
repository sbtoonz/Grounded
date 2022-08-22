#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadRestriction.generated.h"

UENUM()
enum class ESaveLoadRestriction : uint8 {
    NoCurrentRestriction,
    NoPlayerPresent,
    CinematicInProgress,
    PlayerInConversation,
    PlayerInCombat,
    LevelTraveling,
    ModalInterface,
    PlayerIsIncapacitated,
    SaveInProgress,
    LoadInProgress,
    ManualRestriction,
    Unsupported,
    DeviceFull,
    PlatformSaveSystemNull,
    PlatformStorageInaccessible,
    PlayerFalling,
    PlayerInActiveHazard,
    PlayerInterpolatingToSpline,
    PlayerDeadOrDying,
    UserLoggingOut,
    UIWindowActive,
    WaveActive,
};

