#include "Turret.h"
#include "Net/UnrealNetwork.h"
#include "AttackHandlerComponent.h"
#include "ProximityInventoryComponent.h"

class ASurvivalPlayerCharacter;




void ATurret::OnRep_MountedCharacter(ASurvivalPlayerCharacter* PreviousCharacter) {
}

void ATurret::MulticastNotifyTurretAttack_Implementation(bool bAttackSuccess) {
}

void ATurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATurret, bIsBusy);
    DOREPLIFETIME(ATurret, CombatTrackers);
    DOREPLIFETIME(ATurret, bInCombat);
    DOREPLIFETIME(ATurret, MountedCharacter);
}

ATurret::ATurret() {
    this->TurretPawnClass = NULL;
    this->bAttachMountedCharacter = false;
    this->CharacterMountMontage = NULL;
    this->bHideMountedCharacter = false;
    this->MaxPitchDown = -60.00f;
    this->MaxPitchUp = 60.00f;
    this->MaxYawDelta = 180.00f;
    this->TurretRotationInterpSpeed = 15.00f;
    this->AttackCooldown = 0.00f;
    this->CooldownTimer = 0.00f;
    this->bCanAutoFire = false;
    this->HorizontalMovementAudioLoop = NULL;
    this->VerticalMovementAudioLoop = NULL;
    this->MovementLoopFadeInTime = 0.50f;
    this->MovementLoopFadeOutTime = 0.50f;
    this->TurretAttack = NULL;
    this->TurretComponent = NULL;
    this->TurretBaseComponent = NULL;
    this->SkelMesh = NULL;
    this->bIsBusy = false;
    this->bInCombat = false;
    this->AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>(TEXT("AttackHandlerComponent"));
    this->ProximityInventoryComponent = CreateDefaultSubobject<UProximityInventoryComponent>(TEXT("ProximityInventoryComponent"));
    this->MountedCharacter = NULL;
}

