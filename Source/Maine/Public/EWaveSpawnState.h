#pragma once
#include "CoreMinimal.h"
#include "EWaveSpawnState.generated.h"

UENUM()
enum class EWaveSpawnState {
    None,
    ChooseStartLocation,
    SpawnWave,
    Waiting,
};

