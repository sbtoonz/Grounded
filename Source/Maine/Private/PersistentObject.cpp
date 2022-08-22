#include "PersistentObject.h"
#include "Net/UnrealNetwork.h"

void UPersistentObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPersistentObject, UniqueId);
}

UPersistentObject::UPersistentObject() {
}

