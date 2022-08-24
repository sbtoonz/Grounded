#include "LabMachineA.h"
#include "Components/StaticMeshComponent.h"

ALabMachineA::ALabMachineA() {
    this->MonitorA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MonitorA"));
    this->CabinetA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CabinetA"));
    this->ConsolePlate = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConsolePlate"));
    this->ConsoleButtons = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConsoleButtons"));
    this->Panel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Panel"));
    this->PanelDoodads = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PanelDoodads"));
    this->EmissiveStrip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EmissiveStrip"));
    this->Table = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Table"));
}

