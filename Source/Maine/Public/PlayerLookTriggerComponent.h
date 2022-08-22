#pragma once
#include "CoreMinimal.h"
#include "BaseLookTriggerComponent.h"
#include "PlayerLookTriggerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerLookTriggerComponent : public UBaseLookTriggerComponent {
    GENERATED_BODY()
public:
    UPlayerLookTriggerComponent();
};

