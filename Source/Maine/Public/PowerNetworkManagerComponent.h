#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnBuildingPowerConnectionRemovedDelegate.h"
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

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPowerNetworkManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingPowerConnectionRemoved OnPowerConnectionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworksCoalesced OnNetworksCoalesced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNodeChangedNetwork OnNodeChangedNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNodeRemoved OnNodeRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkPowerChanged OnNetworkPowerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingRelocated OnBuildingRelocated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNetworkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingPowerNetwork> Networks;
    
public:
    UPowerNetworkManagerComponent();
    UFUNCTION(BlueprintCallable)
    float GetTotalPowerForNetwork(int32 NetworkId);
    
    UFUNCTION(BlueprintCallable)
    ABuilding* GetPoweredBuilding(FBuildingPowerId ID);
    
    
    // Fix for true pure virtual functions not being implemented
};

