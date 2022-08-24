#include "LabMachineBase.h"
#include "Components/StaticMeshComponent.h"

FLabMachineBlueprintableInfo ALabMachineBase::GetInfo() const {
    return FLabMachineBlueprintableInfo{};
}

ALabMachineBase::ALabMachineBase() {
    this->BaseCabinet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseCabinet"));
    this->Group1Cabinet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group1Cabinet"));
    this->Group1Trim = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group1Trim"));
    this->Group1Doodads = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group1Doodads"));
    this->Group2Cabinet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group2Cabinet"));
    this->Group2Trim = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group2Trim"));
    this->Group2Doodads = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group2Doodads"));
    this->Group3Cabinet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group3Cabinet"));
    this->Group3Trim = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group3Trim"));
    this->Group3Doodads = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Group3Doodads"));
    this->CabinetDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CabinetDoor"));
}

