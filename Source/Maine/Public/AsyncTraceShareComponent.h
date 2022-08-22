#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AsyncTraceShareComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAsyncTraceShareComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAsyncTraceShareComponent();
};

