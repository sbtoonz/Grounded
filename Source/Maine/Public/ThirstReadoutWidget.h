#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ThirstReadoutWidget.generated.h"

class USurvivalComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UThirstReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerThirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDisplayedThirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirstRatio;
    
public:
    UThirstReadoutWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThirstAnim();
    
    UFUNCTION(BlueprintCallable)
    void CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

