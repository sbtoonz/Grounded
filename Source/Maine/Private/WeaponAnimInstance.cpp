#include "WeaponAnimInstance.h"

UWeaponAnimInstance::UWeaponAnimInstance() {
    this->IsShadowAnim = false;
    this->IsFirstPerson = false;
    this->IsUnderwater = false;
    this->IsMoving = false;
    this->IsInAir = false;
    this->IsSwimming = false;
    this->IsCrouching = false;
    this->IsSprinting = false;
    this->IsAttacking = false;
    this->IsBlocking = false;
    this->IsThrowing = false;
    this->IsInCombat = false;
    this->IsTurning = false;
    this->IsEquipping = false;
    this->TurnDelta = 0.00f;
    this->AimPitch = 0.00f;
    this->bHasAmmo = false;
}

