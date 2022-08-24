#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "PossessableInterface.h"
#include "ECreatureActivityMode.h"
#include "MaineAIPerceptionComponent.generated.h"

class ASurvivalAIController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaineAIPerceptionComponent : public UAIPerceptionComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
    UMaineAIPerceptionComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActivityModeChanged(ASurvivalAIController* Sender, ECreatureActivityMode ActivityMode);
    
    
    // Fix for true pure virtual functions not being implemented
};

