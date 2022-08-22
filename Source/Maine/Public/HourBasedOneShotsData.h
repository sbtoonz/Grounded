#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "HourBasedOneShotBundle.h"
#include "HourBasedOneShotsData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UHourBasedOneShotsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHourBasedOneShotBundle> HourlyEntries;
    
    UHourBasedOneShotsData();
};

