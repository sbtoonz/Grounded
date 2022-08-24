#include "Storage.h"
#include "Net/UnrealNetwork.h"
#include "InventoryComponent.h"

void AStorage::SetCustomName(const FString& NewName) {
}

void AStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStorage, CustomName);
}

AStorage::AStorage() {
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

