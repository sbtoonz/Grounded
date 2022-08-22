#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "HarvestNodeLiteData.generated.h"

UCLASS()
class MAINE_API UHarvestNodeLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GameLifetimeHours;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bAllowFoliageRespawn: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bAllowLODNavDirtying: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LODFullActorMaxDistance;
    
    UHarvestNodeLiteData();
};

