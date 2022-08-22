#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HungerReadoutWidget.generated.h"

class USurvivalComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHungerReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float LastPlayerHunger;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentDisplayedHunger;
    
    UPROPERTY(BlueprintReadOnly)
    float HungerRatio;
    
public:
    UHungerReadoutWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHungerAnim();
    
    UFUNCTION()
    void CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

