#pragma once
#include "CoreMinimal.h"
#include "Switch.h"
#include "RenderTargetSubscriber.h"
#include "CameraMonitorTerminal.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API ACameraMonitorTerminal : public ASwitch, public IRenderTargetSubscriber {
    GENERATED_BODY()
public:
    ACameraMonitorTerminal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerOverlappingOnBeginPlay();
    
    
    // Fix for true pure virtual functions not being implemented
};

