#include "PlayerScalingReceiverComponent.h"

float UPlayerScalingReceiverComponent::GetStunDurationMultiplier() const {
    return 0.0f;
}

float UPlayerScalingReceiverComponent::GetMaxStunMultiplier() const {
    return 0.0f;
}

float UPlayerScalingReceiverComponent::GetMaxHealthMultiplier() const {
    return 0.0f;
}

float UPlayerScalingReceiverComponent::GetDamageResistanceMultiplier() const {
    return 0.0f;
}

UPlayerScalingReceiverComponent::UPlayerScalingReceiverComponent() {
    this->ScalingTable = NULL;
}

