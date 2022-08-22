#include "BuildingPowerCable.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

void ABuildingPowerCable::OnRep_StartEnd() {
}

void ABuildingPowerCable::OnPoweredNetworksCoalesced(int32 DestinationNetwork, int32 RemovedNetwork) {
}

void ABuildingPowerCable::OnPoweredBuildingConnectionRemoved(int32 InNodeA, int32 InNodeB) {
}

void ABuildingPowerCable::OnNodeRemoved(int32 NodeId) {
}

void ABuildingPowerCable::OnNodeChangedNetwork(int32 NodeId, int32 NewNetworkId) {
}

void ABuildingPowerCable::OnBuildingMoved(FBuildingPowerId ID) {
}

void ABuildingPowerCable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingPowerCable, Start);
    DOREPLIFETIME(ABuildingPowerCable, End);
}

ABuildingPowerCable::ABuildingPowerCable() {
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

