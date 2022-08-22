#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StatusEffectOrigin.h"
#include "DamageInfo.h"
#include "SpawnedEffectActor.generated.h"

UCLASS()
class MAINE_API ASpawnedEffectActor : public AActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
public:
    ASpawnedEffectActor();
protected:
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

