#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "ItemSpawnGroup.h"
#include "TrackedItemSpawnGroupRepDataArray.h"
#include "ItemSpawnManager.generated.h"

class UItemSpawnGroupData;
class UObsidianIDComponent;
class UTrackedItemSpawnGroup;
class UPersistenceComponent;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;

UCLASS()
class MAINE_API AItemSpawnManager : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TMap<UItemSpawnGroupData*, FItemSpawnGroup> ItemSpawnGroups;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UTrackedItemSpawnGroup*> TrackedGroupSpawns;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedSpawnData)
    FTrackedItemSpawnGroupRepDataArray ReplicatedSpawnData;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
public:
    AItemSpawnManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_ReplicatedSpawnData();
    
public:
    UFUNCTION(BlueprintCallable)
    UTrackedItemSpawnGroup* AddSpawnGroupHelper(AActor* InOwner, UItemSpawnGroupData* Group, const FItemSpawnGroup& SpawnGroup, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    UTrackedItemSpawnGroup* AddSpawnGroup(AActor* InOwner, UItemSpawnGroupData* Group, TScriptInterface<ISpawnPointProviderInterface> Provider, bool bEnabled);
    
    
    // Fix for true pure virtual functions not being implemented
};

