#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "BurgleQuestOptionActor.generated.h"

class UObsidianIDComponent;
class UBurgleQuestInstance;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABurgleQuestOptionActor : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ProgressRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IdComponent;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UBurgleQuestInstance> ActiveQuest;
    
public:
    ABurgleQuestOptionActor();
    UFUNCTION(BlueprintCallable)
    void ReleaseByQuest(UBurgleQuestInstance* Quest);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndQuest();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyStartQuest();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndQuest(bool bCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObsidianIDComponent* GetObsidianID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void ClaimByQuest(UBurgleQuestInstance* Quest);
    
    
    // Fix for true pure virtual functions not being implemented
};

