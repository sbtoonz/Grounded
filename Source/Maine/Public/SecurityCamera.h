#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RenderTargetPublisher.h"
#include "SecurityCamera.generated.h"

UCLASS()
class MAINE_API ASecurityCamera : public AActor, public IRenderTargetPublisher {
    GENERATED_BODY()
public:
    ASecurityCamera();
    
    // Fix for true pure virtual functions not being implemented
};

