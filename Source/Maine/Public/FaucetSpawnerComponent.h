#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "SpawnPointProviderInterface.h"
#include "FaucetItemSpawnData.h"
#include "ItemSpawnPointData.h"
#include "FaucetSpawnerComponent.generated.h"

class UItemSpawnGroupData;
class UTrackedItemSpawnGroup;
class UBaseLODActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFaucetSpawnerComponent : public UActorComponent, public ISpawnPointProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaucetItemSpawnData SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrackedItemSpawnGroup* TrackedGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedItems;
    
public:
    UFaucetSpawnerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseLODActor* Spawn(FItemSpawnPointData SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void HandleTrackedSpawnsChanged(UTrackedItemSpawnGroup* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetSpawnPoints(TArray<FItemSpawnPointData>& SpawnPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UItemSpawnGroupData> GetItemSpawnGroupData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool DoesSpawnActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Despawn(FItemSpawnPointData SpawnPoint);
    
    
    // Fix for true pure virtual functions not being implemented
};

