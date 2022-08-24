#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BreathePointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBreathePointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UBreathePointComponent();
};

