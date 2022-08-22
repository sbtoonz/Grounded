#include "Bird.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

class ABirdLandSpot;

void ABird::OnTimelapseChange(bool bActive) {
}

void ABird::OnRep_CurrentState() {
}



EBirdState ABird::GetState() const {
    return EBirdState::Despawned;
}

ABirdLandSpot* ABird::GetCurrentLandSpot() const {
    return NULL;
}

void ABird::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABird, CurrentState);
    DOREPLIFETIME(ABird, CurrentLandSpot);
}

ABird::ABird() {
    this->FlySpeed = 300.00f;
    this->LandingDistance = 2000.00f;
    this->TakeOffDistance = 2000.00f;
    this->CurrentState = EBirdState::Despawned;
    this->CurrentLandSpot = NULL;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->Progress = 0.00f;
    this->TotalProgress = 0.00f;
    this->HiddenForTimelapse = false;
}

