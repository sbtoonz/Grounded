#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "Engine/DataTable.h"
#include "SpawnedItemLiteData.generated.h"

UCLASS()
class MAINE_API USpawnedItemLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle PlacedItemData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GameLifetimeHours;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bLifetimeDespawnWhenProxiedOnly: 1;
    
    USpawnedItemLiteData();
};

