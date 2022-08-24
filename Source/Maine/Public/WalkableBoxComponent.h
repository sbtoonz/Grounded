#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "WalkableBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWalkableBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UWalkableBoxComponent();
};

