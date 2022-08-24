#pragma once
#include "CoreMinimal.h"
#include "BossActorSpawn.generated.h"

class AActor;
class ATargetPoint;

USTRUCT(BlueprintType)
struct FBossActorSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* SpawnPoint;
    
    MAINE_API FBossActorSpawn();
};

