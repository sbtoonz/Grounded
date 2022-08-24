#include "FlySwimSurvivalCharacter.h"
#include "Net/UnrealNetwork.h"

void AFlySwimSurvivalCharacter::OnRep_BaseSeed() {
}

void AFlySwimSurvivalCharacter::InterpolateRotationTo(FRotator InTargetRotation, const float DeltaTime) {
}

void AFlySwimSurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlySwimSurvivalCharacter, BaseSeed);
}

AFlySwimSurvivalCharacter::AFlySwimSurvivalCharacter() {
    this->AcceptableDistanceToWaypoint = 0.00f;
    this->RotationInterpSlowDist = 0.00f;
    this->RollSpeed = 180.00f;
    this->RollStrength = 1.00f;
    this->MaxPitch = 90.00f;
    this->bWiggleEnabled = true;
    this->InMotionWiggleAmplitude = 60.00f;
    this->IdleWiggleAmplitude = 45.00f;
    this->PreferredElevation = 0.00f;
    this->bAllowStrafe = false;
    this->bAllowPathfinding = false;
    this->bPhysicsOnDeath = false;
    this->bIsInHoldInteraction = false;
    this->DerpFactor = 0.00f;
    this->TakeoffLaunchVelocity = 1000.00f;
    this->bPseudoLargePawn = false;
    this->bDoRecoil = false;
    this->CurrentNavigationPath = NULL;
    this->bShowGoalLocation = true;
    this->BaseSeed = 0;
}

