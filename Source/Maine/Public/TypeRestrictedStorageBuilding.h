#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "InstancedStorageData.h"
#include "DataTableRowHandle_NetCrc.h"
#include "TypeRestrictedStorageBuilding.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class USoundCue;
class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API ATypeRestrictedStorageBuilding : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AllowedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StoredMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString PutString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnItemAddedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredItems, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle_NetCrc> StoredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SpawnedVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FInstancedStorageData> InstSpawnedVisuals;
    
public:
    ATypeRestrictedStorageBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredItems();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlaceItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlaceableItem(const AActor* InstigatedBy) const;
    
};

