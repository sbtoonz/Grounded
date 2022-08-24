#pragma once
#include "CoreMinimal.h"
#include "KillUniqueOptionCompletedDelegateDelegate.h"
#include "BurgleQuestOptionActor.h"
#include "BurgleQuestKillUniqueOptionActor.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABurgleQuestKillUniqueOptionActor : public ABurgleQuestOptionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKillUniqueOptionCompletedDelegate OnOptionCompleted;
    
    ABurgleQuestKillUniqueOptionActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EncounterCompletedCallback(AActor* InInstigator);
    
};

