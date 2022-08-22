#pragma once
#include "CoreMinimal.h"
#include "BaseBurgleObjective.h"
#include "BurgleObjectiveProgress.generated.h"

class UBurgleQuestInstance;

UCLASS()
class MAINE_API UBurgleObjectiveProgress : public UBaseBurgleObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    int32 ProgressCount;
    
    UPROPERTY(Replicated, Transient)
    int32 MaxProgress;
    
public:
    UBurgleObjectiveProgress();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxProgress(int32 InTarget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProgress(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex, int32 InMaxProgress);
    
    UFUNCTION(BlueprintPure)
    int32 GetProgress() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void AddProgress(int32 Progress);
    
};

