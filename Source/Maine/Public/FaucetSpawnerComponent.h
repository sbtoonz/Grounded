#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SpawnPointProviderInterface.h"
#include "FaucetItemSpawnData.h"
#include "ItemSpawnPointData.h"
#include "FaucetSpawnerComponent.generated.h"

class UItemSpawnGroupData;
class UBaseLODActor;
class UTrackedItemSpawnGroup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFaucetSpawnerComponent : public UActorComponent, public ISpawnPointProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFaucetItemSpawnData SpawnData;
    
    UPROPERTY(Transient)
    UTrackedItemSpawnGroup* TrackedGroup;
    
    UPROPERTY(Replicated)
    bool bHasSpawnedItems;
    
public:
    UFaucetSpawnerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseLODActor* Spawn(FItemSpawnPointData SpawnPoint);
    
    UFUNCTION()
    void HandleTrackedSpawnsChanged(UTrackedItemSpawnGroup* Sender);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetSpawnPoints(TArray<FItemSpawnPointData>& SpawnPoints) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UItemSpawnGroupData> GetItemSpawnGroupData() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool DoesSpawnActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Despawn(FItemSpawnPointData SpawnPoint);
    
    
    // Fix for true pure virtual functions not being implemented
};

