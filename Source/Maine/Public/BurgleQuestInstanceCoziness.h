#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "BurgleQuestInstanceCoziness.generated.h"

class UPartyComponent;

UCLASS()
class MAINE_API UBurgleQuestInstanceCoziness : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 CozinessLevel;
    
    UBurgleQuestInstanceCoziness();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnCozinessLevelAchieved(UPartyComponent* Sender, int32 NewLevel);
    
};

