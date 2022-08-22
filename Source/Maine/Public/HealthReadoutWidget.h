#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HealthReadoutWidget.generated.h"

class UHealthComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHealthReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float LastPlayerHealth;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentDisplayedHealth;
    
    UPROPERTY(BlueprintReadOnly)
    float HealthRatio;
    
public:
    UHealthReadoutWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealthAnim();
    
    UFUNCTION()
    void CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
};

