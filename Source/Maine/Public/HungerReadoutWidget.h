#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HungerReadoutWidget.generated.h"

class USurvivalComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHungerReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDisplayedHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungerRatio;
    
public:
    UHungerReadoutWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHungerAnim();
    
    UFUNCTION(BlueprintCallable)
    void CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

