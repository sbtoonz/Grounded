#pragma once
#include "CoreMinimal.h"
#include "BaseBurgleObjective.h"
#include "BurgleObjectiveSimple.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBurgleObjectiveSimple : public UBaseBurgleObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsComplete: 1;
    
public:
    UBurgleObjectiveSimple();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective();
    
};

