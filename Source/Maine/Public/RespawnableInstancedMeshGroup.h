#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "SpawnPointProviderInterface.h"
#include "RespawnableInstancedMeshData.h"
#include "PersistentInterface.h"
#include "ERespawnableMeshPlacementType.h"
#include "ItemSpawnPointData.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.h"
#include "RespawnableInstancedMeshGroup.generated.h"

class UItemSpawnGroupData;
class UObsidianIDComponent;
class UBaseLODActor;
class UHierarchicalInstancedStaticMeshComponent;
class UPersistenceComponent;

UCLASS(Blueprintable)
class MAINE_API ARespawnableInstancedMeshGroup : public AActor, public ISpawnPointProviderInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemSpawnGroupData> ItemSpawnGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnableMeshPlacementType PlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* InstancedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRespawnableInstancedMeshData> InstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnRandomDelay;
    
public:
    ARespawnableInstancedMeshGroup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseLODActor* Spawn(FItemSpawnPointData SpawnPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetSpawnPoints(TArray<FItemSpawnPointData>& SpawnPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UItemSpawnGroupData> GetItemSpawnGroupData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool DoesSpawnActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Despawn(FItemSpawnPointData SpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuildInstances();
    
    
    // Fix for true pure virtual functions not being implemented
};

