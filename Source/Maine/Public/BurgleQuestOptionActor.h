#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestOptionActor.generated.h"

class UBurgleQuestInstance;
class UObsidianIDComponent;

UCLASS(Abstract)
class MAINE_API ABurgleQuestOptionActor : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RewardTier;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowRepeat;
    
    UPROPERTY(EditAnywhere)
    FFloatRange ProgressRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag QuestTag;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* IdComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UBurgleQuestInstance> ActiveQuest;
    
public:
    ABurgleQuestOptionActor();
    UFUNCTION(BlueprintCallable)
    void ReleaseByQuest(UBurgleQuestInstance* Quest);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStartQuest();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndQuest();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyStartQuest();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndQuest(bool bCompleted);
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintPure)
    UObsidianIDComponent* GetObsidianID() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void ClaimByQuest(UBurgleQuestInstance* Quest);
    
    
    // Fix for true pure virtual functions not being implemented
};

