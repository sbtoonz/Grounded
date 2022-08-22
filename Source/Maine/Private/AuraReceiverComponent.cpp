#include "AuraReceiverComponent.h"
#include "Net/UnrealNetwork.h"

void UAuraReceiverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAuraReceiverComponent, ReplicatedEmitterCount);
}

UAuraReceiverComponent::UAuraReceiverComponent() {
    this->ReplicatedEmitterCount = 0;
}

