#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "TrackedItemSpawnGroupRepData.h"
#include "TrackedItemSpawnGroupRepDataArray.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTrackedItemSpawnGroupRepDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTrackedItemSpawnGroupRepData> Items;
    
    FTrackedItemSpawnGroupRepDataArray();
};

