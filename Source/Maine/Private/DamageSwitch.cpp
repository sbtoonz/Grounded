#include "DamageSwitch.h"
#include "Net/UnrealNetwork.h"
#include "HealthComponent.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class UBaseLODActor;
class AController;

void ADamageSwitch::SetCurrentState(int32 NewState) {
}

void ADamageSwitch::OnRep_CurrentState() {
}

void ADamageSwitch::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

int32 ADamageSwitch::GetCurrentState() const {
    return 0;
}

void ADamageSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADamageSwitch, CurrentState);
}

ADamageSwitch::ADamageSwitch() {
    this->CurrentState = 0;
    this->NumStates = 1;
    this->HitCooldown = 0.10f;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

