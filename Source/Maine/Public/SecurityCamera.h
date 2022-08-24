#pragma once
#include "CoreMinimal.h"
#include "RenderTargetPublisher.h"
#include "GameFramework/Actor.h"
#include "SecurityCamera.generated.h"

UCLASS(Blueprintable)
class MAINE_API ASecurityCamera : public AActor, public IRenderTargetPublisher {
    GENERATED_BODY()
public:
    ASecurityCamera();
    
    // Fix for true pure virtual functions not being implemented
};

