#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent
#include "PossessableInterface.h"
#include "ECreatureActivityMode.h"
#include "MaineAIPerceptionComponent.generated.h"

class ASurvivalAIController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaineAIPerceptionComponent : public UAIPerceptionComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
    UMaineAIPerceptionComponent();
protected:
    UFUNCTION()
    void OnActivityModeChanged(ASurvivalAIController* Sender, ECreatureActivityMode ActivityMode);
    
    
    // Fix for true pure virtual functions not being implemented
};

