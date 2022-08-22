#pragma once
#include "CoreMinimal.h"
#include "EPlayerDisconnectReason.generated.h"

UENUM()
enum class EPlayerDisconnectReason : uint8 {
    None,
    Kicked,
};

