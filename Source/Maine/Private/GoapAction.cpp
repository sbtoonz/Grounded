#include "GoapAction.h"

class UCharacterLODActor;

EGoapActionResult UGoapAction::ExecuteReal(UCharacterLODActor* Actor, FGoapActionOwner& Owner, FVector TargetLocation) {
    return EGoapActionResult::Failed;
}

bool UGoapAction::CanExecuteReal(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) {
    return false;
}

bool UGoapAction::CanActorExecuteEver(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) const {
    return false;
}

UGoapAction::UGoapAction() {
    this->InherentCost = 0.00f;
    this->AttractionRange = 2500.00f;
    this->InteractDuration = 0.00f;
    this->bIsEnabled = true;
    this->bMustLand = false;
    this->IndefiniteDuration = false;
    this->bOwnerOnly = false;
    this->bObstructionTrace = false;
    this->Facing = EFaceTargetType::FaceTarget;
    this->InteractAnimType = EInteractAnimType::None;
    this->Cooldown = 0.00f;
}

