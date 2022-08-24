#pragma once
#include "CoreMinimal.h"
#include "ELoadGameResult.generated.h"

UENUM()
enum class ELoadGameResult {
    Success,
    Restricted,
    MissingFile,
    FileReadingFailure,
    CorruptionDetected,
    UnableToRestorePlayerState,
    UnableToRestoreCompanionState,
    NoCompanionManager,
    ClassDependencyLoadFailure,
    SpawnFailure,
    InvalidQuicksaveIndex,
    InvalidAutosaveIndex,
    SaveOfGivenNameNotFound,
    PlatformLoadUnsuccessful,
    StorageUninitialized,
    SaveVersionUnsupported,
    SaveFromNewerBuild,
};

