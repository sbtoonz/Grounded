#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "ReputationNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FReputationNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReputationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString NotificationString;
    
    FReputationNotificationData();
};

