#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatusEffectOrigin.h"
#include "Engine/DataTable.h"
#include "DamageInfo.h"
#include "SpawnedEffectActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API ASpawnedEffectActor : public AActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> StatusEffects;
    
public:
    ASpawnedEffectActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

