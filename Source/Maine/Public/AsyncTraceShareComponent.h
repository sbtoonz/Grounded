#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AsyncTraceShareComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAsyncTraceShareComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAsyncTraceShareComponent();
};

