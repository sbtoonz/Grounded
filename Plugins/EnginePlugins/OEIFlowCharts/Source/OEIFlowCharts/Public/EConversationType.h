#pragma once
#include "CoreMinimal.h"
#include "EConversationType.generated.h"

UENUM()
enum class EConversationType : uint8 {
    Conversation,
    Chatter,
    Count,
    Invalid,
};

