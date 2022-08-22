#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseQuest.generated.h"

class UBaseObjective;

UCLASS(Abstract, BlueprintType)
class MAINE_API UBaseQuest : public UObject {
    GENERATED_BODY()
public:
    UBaseQuest();
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UBaseObjective*> GetObjectives() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayDescription() const;
    
};

