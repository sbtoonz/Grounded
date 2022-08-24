#pragma once
#include "CoreMinimal.h"
#include "EPushNotificationPlatform.generated.h"

UENUM()
enum class EPushNotificationPlatform {
    pfenum_ApplePushNotificationService,
    pfenum_GoogleCloudMessaging,
    pfenum_MAX UMETA(Hidden),
};

