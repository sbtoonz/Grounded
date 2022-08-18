#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
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

