#include "TerminalSwitch.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"

class UConditionalToggleComponent;

void ATerminalSwitch::OnRep_CurrentWidgetState() {
}

void ATerminalSwitch::OnRep_CurrentStateIndex() {
}

void ATerminalSwitch::OnConditionalStateChanged(UConditionalToggleComponent* Component, bool bEnabled) {
}



void ATerminalSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATerminalSwitch, CurrentStateIndex);
    DOREPLIFETIME(ATerminalSwitch, CurrentWidgetState);
}

ATerminalSwitch::ATerminalSwitch() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->WidgetClass = NULL;
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    this->PlayerBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerBlocker"));
    this->ScreenMaterial = NULL;
    this->CurrentStateIndex = 0;
    this->CurrentWidgetState = ETerminalWidgetState::None;
    this->ActiveWidget = NULL;
    this->ScreenMID = NULL;
}

