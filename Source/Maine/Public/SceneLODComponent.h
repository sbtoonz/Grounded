#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "SceneLODComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API USceneLODComponent : public UBaseLODComponent {
    GENERATED_BODY()
public:
    USceneLODComponent();
};

