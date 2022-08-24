#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "StaminaReadoutWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UStaminaReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDisplayedStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRatio;
    
public:
    UStaminaReadoutWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStaminaAnim();
    
    UFUNCTION(BlueprintCallable)
    void CheckStaminaRatio(float NewRatio);
    
};

