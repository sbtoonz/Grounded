#include "CharacterLODActor.h"

class UInterestCore;
class AActor;

void UCharacterLODActor::OnTimelapseChange(bool TimelapseActive) {
}

bool UCharacterLODActor::IsSwimming() const {
    return false;
}

bool UCharacterLODActor::IsResting() const {
    return false;
}

bool UCharacterLODActor::IsMoving() const {
    return false;
}

bool UCharacterLODActor::IsFlying() const {
    return false;
}

UInterestCore* UCharacterLODActor::GetInterestCore() const {
    return NULL;
}

FLocString UCharacterLODActor::GetCharacterTypeName() const {
    return FLocString{};
}

FString UCharacterLODActor::GetCharacterInstanceName() const {
    return TEXT("");
}

FVector UCharacterLODActor::GetBlackboardTargetLocation() const {
    return FVector{};
}

AActor* UCharacterLODActor::GetBlackboardTargetActor() const {
    return NULL;
}

UCharacterLODActor::UCharacterLODActor() {
}

