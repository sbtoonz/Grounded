#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawnPointProviderInterface.h"
#include "PersistentInterface.h"
#include "ERespawnableMeshPlacementType.h"
#include "RespawnableInstancedMeshData.h"
#include "ItemSpawnPointData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "DamageInfo.h"
#include "RespawnableInstancedMeshGroup.generated.h"

class UBaseLODActor;
class UObsidianIDComponent;
class UItemSpawnGroupData;
class UHierarchicalInstancedStaticMeshComponent;
class UPersistenceComponent;

UCLASS()
class MAINE_API ARespawnableInstancedMeshGroup : public AActor, public ISpawnPointProviderInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemSpawnGroupData> ItemSpawnGroupData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERespawnableMeshPlacementType PlacementType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SocketTag;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHierarchicalInstancedStaticMeshComponent* InstancedMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Transient)
    TArray<FRespawnableInstancedMeshData> InstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DespawnRandomDelay;
    
public:
    ARespawnableInstancedMeshGroup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseLODActor* Spawn(FItemSpawnPointData SpawnPoint);
    
private:
    UFUNCTION()
    void OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo);
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetSpawnPoints(TArray<FItemSpawnPointData>& SpawnPoints) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UItemSpawnGroupData> GetItemSpawnGroupData() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool DoesSpawnActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Despawn(FItemSpawnPointData SpawnPoint);
    
    UFUNCTION(BlueprintNativeEvent)
    void BuildInstances();
    
    
    // Fix for true pure virtual functions not being implemented
};

