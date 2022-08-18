#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TrackedItemSpawnGroupEventRepData.h"
#include "TrackedItemSpawnGroupRepData.generated.h"

class UItemSpawnGroupData;

USTRUCT(BlueprintType)
struct FTrackedItemSpawnGroupRepData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UItemSpawnGroupData* ItemSpawnGroupData;
    
    UPROPERTY()
    TArray<FTrackedItemSpawnGroupEventRepData> Events;
    
    MAINE_API FTrackedItemSpawnGroupRepData();
};

