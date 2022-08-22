#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=Name_NetCrc -FallbackName=Name_NetCrc
#include "AchievementData.h"
#include "AchievementStatus.generated.h"

USTRUCT(BlueprintType)
struct FAchievementStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName_NetCrc AchievementName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastKnownStatValue;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUnlocked;
    
    UPROPERTY()
    FAchievementData AchievementData;
    
    MAINE_API FAchievementStatus();
};

