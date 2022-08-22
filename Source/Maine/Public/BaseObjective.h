#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseObjective.generated.h"

UCLASS(Abstract, BlueprintType)
class MAINE_API UBaseObjective : public UObject {
    GENERATED_BODY()
public:
    UBaseObjective();
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    FString GetVerboseName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
};

