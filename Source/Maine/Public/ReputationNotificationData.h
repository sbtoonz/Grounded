#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ReputationNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FReputationNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ReputationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLocString NotificationString;
    
    FReputationNotificationData();
};

