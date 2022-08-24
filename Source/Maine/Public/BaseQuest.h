#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseQuest.generated.h"

class UBaseObjective;

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseQuest : public UObject {
    GENERATED_BODY()
public:
    UBaseQuest();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBaseObjective*> GetObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayDescription() const;
    
};

