#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VFXActor.generated.h"

UCLASS()
class MAINE_API AVFXActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* TargetActor;
    
    AVFXActor();
};

