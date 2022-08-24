#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HourBasedOneShotBundle.h"
#include "HourBasedOneShotsData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHourBasedOneShotsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHourBasedOneShotBundle> HourlyEntries;
    
    UHourBasedOneShotsData();
};

