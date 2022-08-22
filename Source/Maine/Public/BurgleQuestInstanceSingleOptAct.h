#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "BurgleQuestInstanceSingleOptAct.generated.h"

class ABurgleQuestOptionActor;

UCLASS(Abstract)
class MAINE_API UBurgleQuestInstanceSingleOptAct : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ABurgleQuestOptionActor* LocationOption;
    
public:
    UBurgleQuestInstanceSingleOptAct();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

