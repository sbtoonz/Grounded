#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "GlobalColorTheme.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGlobalColorTheme : public UObject {
    GENERATED_BODY()
public:
    UGlobalColorTheme();
protected:
    UFUNCTION(BlueprintCallable)
    void SetColorListColorByName(FName ListName, FName ColorName, const FLinearColor& Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProduceColorblindCaches();
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetColorListColorByName(FName ListName, FName ColorName);
    
};

