#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemSpawnGroup.h"
#include "PersistentInterface.h"
#include "TrackedItemSpawnGroupRepDataArray.h"
#include "ItemSpawnManager.generated.h"

class UItemSpawnGroupData;
class UObsidianIDComponent;
class UTrackedItemSpawnGroup;
class UPersistenceComponent;
class USpawnPointProviderInterface;
class ISpawnPointProviderInterface;

UCLASS(Blueprintable)
class MAINE_API AItemSpawnManager : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemSpawnGroupData*, FItemSpawnGroup> ItemSpawnGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrackedItemSpawnGroup*> TrackedGroupSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedSpawnData, meta=(AllowPrivateAccess=true))
    FTrackedItemSpawnGroupRepDataArray ReplicatedSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
public:
    AItemSpawnManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSpawnData();
    
public:
    UFUNCTION(BlueprintCallable)
    UTrackedItemSpawnGroup* AddSpawnGroupHelper(AActor* InOwner, UItemSpawnGroupData* Group, const FItemSpawnGroup& SpawnGroup, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    UTrackedItemSpawnGroup* AddSpawnGroup(AActor* InOwner, UItemSpawnGroupData* Group, TScriptInterface<ISpawnPointProviderInterface> Provider, bool bEnabled);
    
    
    // Fix for true pure virtual functions not being implemented
};

