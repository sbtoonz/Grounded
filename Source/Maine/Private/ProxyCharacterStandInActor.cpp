#include "ProxyCharacterStandInActor.h"
#include "Net/UnrealNetwork.h"

void AProxyCharacterStandInActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProxyCharacterStandInActor, WiggleData);
}

AProxyCharacterStandInActor::AProxyCharacterStandInActor() {
}

