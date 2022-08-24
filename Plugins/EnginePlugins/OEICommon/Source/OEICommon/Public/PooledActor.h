#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PooledActor.generated.h"

UCLASS(Blueprintable)
class OEICOMMON_API APooledActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Spawned;
    
public:
    APooledActor();
    UFUNCTION(BlueprintCallable)
    bool IsSpawned();
    
};

