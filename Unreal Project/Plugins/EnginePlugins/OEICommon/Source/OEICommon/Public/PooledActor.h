#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PooledActor.generated.h"

UCLASS()
class OEICOMMON_API APooledActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool Spawned;
    
public:
    APooledActor();
    UFUNCTION()
    bool IsSpawned();
    
};

