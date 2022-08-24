#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "Engine/DataTable.h"
#include "SpawnedItemLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API USpawnedItemLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlacedItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameLifetimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLifetimeDespawnWhenProxiedOnly: 1;
    
    USpawnedItemLiteData();
};

