#include "CozinessEvaluatorComponent.h"
#include "Net/UnrealNetwork.h"

void UCozinessEvaluatorComponent::OnRep_StructuralValue(int32 OldValue) {
}

void UCozinessEvaluatorComponent::OnRep_CozinessValue(int32 OldValue) {
}

int32 UCozinessEvaluatorComponent::GetCozinessValue() const {
    return 0;
}

int32 UCozinessEvaluatorComponent::GetCozinessLevel() const {
    return 0;
}

void UCozinessEvaluatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCozinessEvaluatorComponent, CozinessValue);
    DOREPLIFETIME(UCozinessEvaluatorComponent, StructuralValue);
}

UCozinessEvaluatorComponent::UCozinessEvaluatorComponent() {
    this->CozinessValue = 0;
    this->StructuralValue = 0;
}

