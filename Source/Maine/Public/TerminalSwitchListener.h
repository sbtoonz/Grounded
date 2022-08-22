#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnTerminalStateChangeDelegate.h"
#include "TerminalConditional.h"
#include "TerminalSwitchListener.generated.h"

class ATerminalSwitch;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTerminalSwitchListener : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTerminalStateChange OnTerminalStateChange;
    
    UTerminalSwitchListener();
    UFUNCTION(BlueprintCallable)
    void OnTerminalStateChanged(ATerminalSwitch* Terminal, const FTerminalConditional& ConditionalState);
    
};

