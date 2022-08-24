#pragma once
#include "CoreMinimal.h"
#include "EConversationPlayPriority.generated.h"

UENUM()
enum class EConversationPlayPriority : uint8 {
    High,
    Medium,
    Low,
    VeryLow,
};

