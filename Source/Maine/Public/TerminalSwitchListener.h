#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnTerminalStateChangeDelegate.h"
#include "TerminalConditional.h"
#include "TerminalSwitchListener.generated.h"

class ATerminalSwitch;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTerminalSwitchListener : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTerminalStateChange OnTerminalStateChange;
    
    UTerminalSwitchListener();
    UFUNCTION(BlueprintCallable)
    void OnTerminalStateChanged(ATerminalSwitch* Terminal, const FTerminalConditional& ConditionalState);
    
};

