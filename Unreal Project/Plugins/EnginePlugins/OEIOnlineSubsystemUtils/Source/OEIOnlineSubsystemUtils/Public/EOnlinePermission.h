#pragma once
#include "CoreMinimal.h"
#include "EOnlinePermission.generated.h"

UENUM()
enum class EOnlinePermission : uint8 {
    CommunicateUsingText,
    CommunicateUsingVideo,
    CommunicateUsingVoice,
    ViewTargetProfile,
    ViewTargetPresence,
    PlayMultiplayer,
};

