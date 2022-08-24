#pragma once
#include "CoreMinimal.h"
#include "EWaveState.generated.h"

UENUM()
enum class EWaveState {
    None,
    SeekBase,
    Retreat,
    Complete,
};

