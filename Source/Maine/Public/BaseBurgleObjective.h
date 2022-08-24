#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "BaseObjective.h"
#include "BaseBurgleObjective.generated.h"

class UBurgleQuestInstance;

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseBurgleObjective : public UBaseObjective, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ObjectiveIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bActive: 1;
    
public:
    UBaseBurgleObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective();
    
    
    // Fix for true pure virtual functions not being implemented
};

