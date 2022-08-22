#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SpawnData.generated.h"

class ASurvivalCharacter;
class ATargetPoint;
class ASpawnAssociatedActor;

USTRUCT(BlueprintType)
struct FSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASurvivalCharacter> ActorToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag Colony;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATargetPoint* SpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SpawnClimbSplineRole;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATargetPoint* InteractionPoint;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ASpawnAssociatedActor* AssociatedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableProxyLODAI;
    
    MAINE_API FSpawnData();
};

