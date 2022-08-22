#include "SwimmingSurvivalCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

float ASwimmingSurvivalCharacter::GetMinWanderHeight() const {
    return 0.0f;
}

float ASwimmingSurvivalCharacter::GetMaxWanderHeight() const {
    return 0.0f;
}

bool ASwimmingSurvivalCharacter::GetCanUseSteeringBehaviors() {
    return false;
}

void ASwimmingSurvivalCharacter::EnableSteeringBehavior(bool bSteeringEnabled) {
}

ASwimmingSurvivalCharacter::ASwimmingSurvivalCharacter() {
    this->ForwardArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowForward"));
    this->UpArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowUp"));
    this->DownArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowDown"));
    this->LeftArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowLeft"));
    this->RightArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowRight"));
    this->bCanUseSteeringBehavior = false;
    this->SurfaceBuffer = 0.00f;
    this->AvoidanceLength_Forward = 0.00f;
    this->AvoidanceLength_Side = 0.00f;
    this->AvoidanceStrength_Forward = 0.00f;
    this->AvoidanceStrength_Side = 0.00f;
    this->AvoidanceStrengthMultiplier = 0.00f;
    this->AvoidanceSideLengthExtension = 0.00f;
    this->MaxVerticalAngleDot = 0.00f;
    this->CreaturePushMultiplier = 0.00f;
    this->MultiHitStrengthMultiplier = 0.00f;
    this->SphereCastRadius = 0.00f;
    this->ClampFactor = 0.00f;
    this->LevelOutFactor = 0.00f;
    this->AvoidanceInterpSpeed = 100.00f;
    this->bCanSprintDuringWander = false;
    this->WanderAngle = 0.00f;
    this->TraceType = TraceTypeQuery1;
    this->MaxAllowableFleeTime = 0.00f;
    this->MaxTimeBeforeSprint = 0.00f;
    this->MinTimeBeforeSprint = 0.00f;
    this->SprintDuration = 0.00f;
    this->bShowArrowTrace = false;
    this->bShowDirection = false;
    this->AIController = NULL;
}

