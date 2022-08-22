#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrackedItemSpawnGroupRepDataArray.h"
#include "PersistentInterface.h"
#include "ItemSpawnGroup.h"
#include "ItemSpawnManager.generated.h"

class UObsidianIDComponent;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;
class UItemSpawnGroupData;
class UTrackedItemSpawnGroup;
class UPersistenceComponent;

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

