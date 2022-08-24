#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GlobalColorTheme.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGlobalColorTheme : public UObject {
    GENERATED_BODY()
public:
    UGlobalColorTheme();
protected:
    UFUNCTION(BlueprintCallable)
    void SetColorListColorByName(FName ListName, FName ColorName, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProduceColorblindCaches();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorListColorByName(FName ListName, FName ColorName);
    
};

