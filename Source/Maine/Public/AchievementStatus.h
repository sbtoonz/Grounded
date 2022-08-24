#pragma once
#include "CoreMinimal.h"
#include "Name_NetCrc.h"
#include "AchievementData.h"
#include "AchievementStatus.generated.h"

USTRUCT(BlueprintType)
struct FAchievementStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName_NetCrc AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastKnownStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementData AchievementData;
    
    MAINE_API FAchievementStatus();
};

