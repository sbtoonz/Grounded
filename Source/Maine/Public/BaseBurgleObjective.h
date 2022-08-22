#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "BaseObjective.h"
#include "BaseBurgleObjective.generated.h"

class UBurgleQuestInstance;

UCLASS(Abstract)
class MAINE_API UBaseBurgleObjective : public UBaseObjective, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    int32 ObjectiveIndex;
    
private:
    UPROPERTY(Replicated, Transient)
    uint8 bActive: 1;
    
public:
    UBaseBurgleObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetObjectiveIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective();
    
    
    // Fix for true pure virtual functions not being implemented
};

