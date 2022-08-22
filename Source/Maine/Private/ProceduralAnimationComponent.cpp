#include "ProceduralAnimationComponent.h"

class UObject;
class UCurveFloat;

void UProceduralAnimationComponent::StopAnimation(FProceduralAnimationHandle& Handle) {
}

void UProceduralAnimationComponent::SetAdditiveRotationQuat(UObject* Source, const FQuat& Rotation) {
}

void UProceduralAnimationComponent::SetAdditiveRotation(UObject* Source, const FRotator& Rotation) {
}

FProceduralAnimationHandle UProceduralAnimationComponent::PlayWiggle(UObject* Source, UCurveFloat* InStrengthCurve, float Frequency, float Delay, bool bLoop) {
    return FProceduralAnimationHandle{};
}

FProceduralAnimationHandle UProceduralAnimationComponent::PlayScaleAnimation(UObject* Source, UCurveFloat* InStrengthXCurve, UCurveFloat* InStrengthYCurve, UCurveFloat* InStrengthZCurve, float Delay, bool bLoop) {
    return FProceduralAnimationHandle{};
}

UProceduralAnimationComponent::UProceduralAnimationComponent() {
    this->bAdditiveRotationEnabled = true;
}

