#pragma once
#include "CoreMinimal.h"
#include "AnimationInteractComponent.h"
#include "TechDepositComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTechDepositComponent : public UAnimationInteractComponent {
    GENERATED_BODY()
public:
    UTechDepositComponent();
};

