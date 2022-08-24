#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseObjective.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseObjective : public UObject {
    GENERATED_BODY()
public:
    UBaseObjective();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVerboseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
};

