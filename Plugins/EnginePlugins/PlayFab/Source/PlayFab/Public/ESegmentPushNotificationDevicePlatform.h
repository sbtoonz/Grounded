#pragma once
#include "CoreMinimal.h"
#include "ESegmentPushNotificationDevicePlatform.generated.h"

UENUM()
enum class ESegmentPushNotificationDevicePlatform {
    pfenum_ApplePushNotificationService,
    pfenum_GoogleCloudMessaging,
    pfenum_MAX UMETA(Hidden),
};

