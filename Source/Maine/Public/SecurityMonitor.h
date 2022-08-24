#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "RenderTargetSubscriber.h"
#include "SecurityMonitor.generated.h"

class UManagedRenderTargetObject;

UCLASS(Blueprintable)
class MAINE_API ASecurityMonitor : public AActor, public IRenderTargetSubscriber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UManagedRenderTargetObject> RenderTargetInfo;
    
    ASecurityMonitor();
    
    // Fix for true pure virtual functions not being implemented
};

