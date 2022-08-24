#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "BurgleQuestInstanceCoziness.generated.h"

class UPartyComponent;

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestInstanceCoziness : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CozinessLevel;
    
    UBurgleQuestInstanceCoziness();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCozinessLevelAchieved(UPartyComponent* Sender, int32 NewLevel);
    
};

