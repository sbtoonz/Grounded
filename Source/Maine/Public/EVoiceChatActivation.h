#pragma once
#include "CoreMinimal.h"
#include "EVoiceChatActivation.generated.h"

UENUM()
enum class EVoiceChatActivation : uint8 {
    Never,
    PushToTalk,
    OnActivity,
};

