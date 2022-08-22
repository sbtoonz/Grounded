#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestOptionActor.h"
#include "KillUniqueOptionCompletedDelegateDelegate.h"
#include "BurgleQuestKillUniqueOptionActor.generated.h"

class AActor;

UCLASS(Abstract)
class MAINE_API ABurgleQuestKillUniqueOptionActor : public ABurgleQuestOptionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FKillUniqueOptionCompletedDelegate OnOptionCompleted;
    
    ABurgleQuestKillUniqueOptionActor();
    UFUNCTION(BlueprintPure)
    bool IsComplete() const;
    
protected:
    UFUNCTION()
    void EncounterCompletedCallback(AActor* InInstigator);
    
};

