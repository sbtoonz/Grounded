#include "OverTimeEffect.h"
#include "Net/UnrealNetwork.h"

float UOverTimeEffect::GetTimeRemaining() const {
    return 0.0f;
}

bool UOverTimeEffect::GetIsExpired() const {
    return false;
}

void UOverTimeEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOverTimeEffect, bIsEnabled);
    DOREPLIFETIME(UOverTimeEffect, MinimumValue);
    DOREPLIFETIME(UOverTimeEffect, MaximumValue);
    DOREPLIFETIME(UOverTimeEffect, DamageType);
    DOREPLIFETIME(UOverTimeEffect, Rate);
    DOREPLIFETIME(UOverTimeEffect, TickInterval);
    DOREPLIFETIME(UOverTimeEffect, Duration);
}

UOverTimeEffect::UOverTimeEffect() {
    this->bIsEnabled = true;
    this->MinimumValue = -INFINITY;
    this->MaximumValue = INFINITY;
    this->DamageType = NULL;
    this->Rate = 0.00f;
    this->TickInterval = 0.00f;
    this->Duration = 0.00f;
    this->ElapsedTime = 0.00f;
    this->TickTimer = 0.00f;
}

