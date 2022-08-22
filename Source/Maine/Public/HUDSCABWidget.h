#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABWidget.generated.h"

class UWidgetAnimation;
class USurvivalComponent;
class UHealthComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDSCABWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* SignalProcessAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* SignalArrived;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* SignalAppear;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentNormalizedTime;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastTransmitterFrame;
    
public:
    UHUDSCABWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTimeOfDay(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateThirstRatio(float NewRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateStaminaRatio(float NewRatio);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRadarVisuals();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHungerRatio(float NewRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealthRatio(float NewHealthRatio);
    
    UFUNCTION()
    void OnHourChange(int32 NewHour, int32 NewDay);
    
    UFUNCTION()
    void CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
    UFUNCTION()
    void CheckStaminaRatio(float NewRatio);
    
    UFUNCTION()
    void CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
    UFUNCTION()
    void CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

