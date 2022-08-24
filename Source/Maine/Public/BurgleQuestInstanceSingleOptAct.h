#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "BurgleQuestInstanceSingleOptAct.generated.h"

class ABurgleQuestOptionActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API UBurgleQuestInstanceSingleOptAct : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABurgleQuestOptionActor* LocationOption;
    
public:
    UBurgleQuestInstanceSingleOptAct();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

