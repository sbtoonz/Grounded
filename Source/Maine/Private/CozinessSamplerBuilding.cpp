#include "CozinessSamplerBuilding.h"
#include "CozinessEvaluatorComponent.h"



void ACozinessSamplerBuilding::HandleCozinessValueChanged(UCozinessEvaluatorComponent* Sender, int32 OldValue) {
}

void ACozinessSamplerBuilding::HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel) {
}

ACozinessSamplerBuilding::ACozinessSamplerBuilding() {
    this->CozinessEvaluatorComponent = CreateDefaultSubobject<UCozinessEvaluatorComponent>(TEXT("CozinessEvaluatorComponent"));
}

