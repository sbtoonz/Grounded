#pragma once
#include "CoreMinimal.h"
#include "BaseBurgleObjective.h"
#include "BurgleObjectiveProgress.generated.h"

class UBurgleQuestInstance;

UCLASS(Blueprintable)
class MAINE_API UBurgleObjectiveProgress : public UBaseBurgleObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ProgressCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
public:
    UBurgleObjectiveProgress();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxProgress(int32 InTarget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProgress(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex, int32 InMaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void AddProgress(int32 Progress);
    
};

