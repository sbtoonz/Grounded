#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RenderTargetSubscriber.h"
#include "SecurityMonitor.generated.h"

class UManagedRenderTargetObject;

UCLASS()
class MAINE_API ASecurityMonitor : public AActor, public IRenderTargetSubscriber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSubclassOf<UManagedRenderTargetObject> RenderTargetInfo;
    
    ASecurityMonitor();
    
    // Fix for true pure virtual functions not being implemented
};

