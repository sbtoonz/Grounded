#pragma once
#include "CoreMinimal.h"
#include "BossActorSpawn.generated.h"

class AActor;
class ATargetPoint;

USTRUCT(BlueprintType)
struct FBossActorSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATargetPoint* SpawnPoint;
    
    MAINE_API FBossActorSpawn();
};

