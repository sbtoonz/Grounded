#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=DataTableRowHandle_NetCrc -FallbackName=DataTableRowHandle_NetCrc
#include "Building.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "InstancedStorageData.h"
#include "TypeRestrictedStorageBuilding.generated.h"

class UStaticMeshComponent;
class UStaticMesh;
class USoundCue;
class AActor;

UCLASS(Abstract)
class MAINE_API ATypeRestrictedStorageBuilding : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDataTableRowHandle> AllowedItems;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* StoredMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Capacity;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString PutString;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OnItemAddedSFX;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StoredItems)
    TArray<FDataTableRowHandle_NetCrc> StoredItems;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> SpawnedVisuals;
    
    UPROPERTY(Transient)
    TMap<FName, FInstancedStorageData> InstSpawnedVisuals;
    
public:
    ATypeRestrictedStorageBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_StoredItems();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlaceItem();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasPlaceableItem(const AActor* InstigatedBy) const;
    
};

