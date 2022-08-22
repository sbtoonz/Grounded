#include "ScanSwitch.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"
#include "OCLComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent



void AScanSwitch::OnRep_CurrentUser() {
}

void AScanSwitch::MulticastStopScan_Implementation(bool bInteractSuccess) {
}

void AScanSwitch::MulticastStartScan_Implementation() {
}

void AScanSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AScanSwitch, bScanned);
    DOREPLIFETIME(AScanSwitch, CurrentUser);
}

AScanSwitch::AScanSwitch() {
    this->ScanTime = 5.00f;
    this->InteractLocationZOffset = 0.00f;
    this->InteractUnderwater = false;
    this->bScanned = false;
    this->OCLComponent = CreateDefaultSubobject<UOCLComponent>(TEXT("OCLComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

