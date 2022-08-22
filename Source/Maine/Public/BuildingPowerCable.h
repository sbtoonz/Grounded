#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
#include "PoweredBuildingConnection.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BuildingPowerCable.generated.h"

class UPersistenceComponent;
class UObsidianIDComponent;

UCLASS(Abstract)
class MAINE_API ABuildingPowerCable : public AActor, public IPoweredBuildingConnection, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_StartEnd)
    FVector Start;
    
    UPROPERTY(ReplicatedUsing=OnRep_StartEnd)
    FVector End;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    ABuildingPowerCable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_StartEnd();
    
    UFUNCTION()
    void OnPoweredNetworksCoalesced(int32 DestinationNetwork, int32 RemovedNetwork);
    
    UFUNCTION()
    void OnPoweredBuildingConnectionRemoved(int32 InNodeA, int32 InNodeB);
    
    UFUNCTION()
    void OnNodeRemoved(int32 NodeId);
    
    UFUNCTION()
    void OnNodeChangedNetwork(int32 NodeId, int32 NewNetworkId);
    
    UFUNCTION()
    void OnBuildingMoved(FBuildingPowerId ID);
    
    
    // Fix for true pure virtual functions not being implemented
};

