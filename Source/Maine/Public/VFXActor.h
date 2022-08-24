#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VFXActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API AVFXActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    AVFXActor();
};

