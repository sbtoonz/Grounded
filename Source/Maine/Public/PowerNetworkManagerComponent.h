#pragma once
#include "CoreMinimal.h"
#include "OnBuildingPowerConnectionRemovedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnNodeChangedNetworkDelegate.h"
#include "OnNetworksCoalescedDelegate.h"
#include "OnNodeRemovedDelegate.h"
#include "OnNetworkPowerChangedDelegate.h"
#include "OnBuildingRelocatedDelegate.h"
#include "BuildingPowerNetwork.h"
#include "BuildingPowerId.h"
#include "PowerNetworkManagerComponent.generated.h"

class ABuilding;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPowerNetworkManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBuildingPowerConnectionRemoved OnPowerConnectionRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnNetworksCoalesced OnNetworksCoalesced;
    
    UPROPERTY()
    FOnNodeChangedNetwork OnNodeChangedNetwork;
    
    UPROPERTY()
    FOnNodeRemoved OnNodeRemoved;
    
    UPROPERTY()
    FOnNetworkPowerChanged OnNetworkPowerChanged;
    
    UPROPERTY()
    FOnBuildingRelocated OnBuildingRelocated;
    
private:
    UPROPERTY()
    int32 NextNodeId;
    
    UPROPERTY()
    int32 NextNetworkId;
    
    UPROPERTY()
    TArray<FBuildingPowerNetwork> Networks;
    
public:
    UPowerNetworkManagerComponent();
    UFUNCTION(BlueprintCallable)
    float GetTotalPowerForNetwork(int32 NetworkId);
    
    UFUNCTION()
    ABuilding* GetPoweredBuilding(FBuildingPowerId ID);
    
    
    // Fix for true pure virtual functions not being implemented
};

