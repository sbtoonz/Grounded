#pragma once
#include "CoreMinimal.h"
#include "BaseGoapRegionComponent.h"
#include "GoapSphereRegionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UGoapSphereRegionComponent : public UBaseGoapRegionComponent {
    GENERATED_BODY()
public:
    UGoapSphereRegionComponent();
};

