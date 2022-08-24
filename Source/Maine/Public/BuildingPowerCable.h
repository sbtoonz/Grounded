#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "PoweredBuildingConnection.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "BuildingPowerId.h"
#include "BuildingPowerCable.generated.h"

class UPersistenceComponent;
class UObsidianIDComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABuildingPowerCable : public AActor, public IPoweredBuildingConnection, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartEnd, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartEnd, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    ABuildingPowerCable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StartEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnPoweredNetworksCoalesced(int32 DestinationNetwork, int32 RemovedNetwork);
    
    UFUNCTION(BlueprintCallable)
    void OnPoweredBuildingConnectionRemoved(int32 InNodeA, int32 InNodeB);
    
    UFUNCTION(BlueprintCallable)
    void OnNodeRemoved(int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    void OnNodeChangedNetwork(int32 NodeId, int32 NewNetworkId);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingMoved(FBuildingPowerId ID);
    
    
    // Fix for true pure virtual functions not being implemented
};

