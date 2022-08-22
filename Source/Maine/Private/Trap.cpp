#include "Trap.h"
#include "Net/UnrealNetwork.h"
#include "AttackHandlerComponent.h"

class UPrimitiveComponent;
class AActor;
class UBaseLODActor;
class AController;

void ATrap::SpawnHazard() {
}

void ATrap::SetTrapArmed(bool bActive, bool bForce) {
}

void ATrap::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATrap::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ATrap::OnRep_TrapTriggerState() {
}

void ATrap::OnRep_TrapArmed() {
}

void ATrap::OnRep_ItemsAdded() {
}

void ATrap::OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

bool ATrap::IsTrapArmed() const {
    return false;
}

bool ATrap::IsFull() const {
    return false;
}

float ATrap::GetTriggerRearmTime() const {
    return 0.0f;
}

float ATrap::GetTriggerDelay() const {
    return 0.0f;
}

float ATrap::GetRemainingTriggerDelay() const {
    return 0.0f;
}

int32 ATrap::GetNumItems() const {
    return 0;
}

void ATrap::ForceTrigger() {
}

void ATrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrap, ItemsAdded);
    DOREPLIFETIME(ATrap, bTrapArmed);
    DOREPLIFETIME(ATrap, TrapTriggerState);
}

ATrap::ATrap() {
    this->TrapArmedSetting = ETrapArmedSetting::Always;
    this->TrapApplyType = ETrapApplyType::None;
    this->TriggerDelay = 0.00f;
    this->TriggerRearmTime = 0.00f;
    this->bDestroyOnTrigger = false;
    this->SelfDamageOnTrigger = 0.00f;
    this->bFriendlyFire = true;
    this->bFriendlyTrigger = true;
    this->bAlwaysTick = false;
    this->bAcceptAnyPlayerDamage = false;
    this->TrapAttackTargetPoint = NULL;
    this->bLastActorOnHitHazardOwner = false;
    this->LastActorOnHit = NULL;
    this->TrapAttack = NULL;
    this->ItemsAdded = 0;
    this->bTrapArmed = false;
    this->TrapTriggerState = ETrapTriggerState::None;
    this->AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>(TEXT("AttackHandlerComponent"));
}

