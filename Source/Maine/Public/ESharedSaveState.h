#pragma once
#include "CoreMinimal.h"
#include "ESharedSaveState.generated.h"

UENUM(BlueprintType)
enum class ESharedSaveState : uint8 {
    NotSharedSave,
    UnhostedSharedSave,
    HostedSharedSave,
};

