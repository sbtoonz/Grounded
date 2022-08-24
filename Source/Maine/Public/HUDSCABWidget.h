#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABWidget.generated.h"

class USurvivalComponent;
class UWidgetAnimation;
class UHealthComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDSCABWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SignalProcessAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SignalArrived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SignalAppear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentNormalizedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastTransmitterFrame;
    
public:
    UHUDSCABWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeOfDay(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThirstRatio(float NewRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStaminaRatio(float NewRatio);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRadarVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHungerRatio(float NewRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthRatio(float NewHealthRatio);
    
    UFUNCTION(BlueprintCallable)
    void OnHourChange(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintCallable)
    void CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void CheckStaminaRatio(float NewRatio);
    
    UFUNCTION(BlueprintCallable)
    void CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
    UFUNCTION(BlueprintCallable)
    void CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue);
    
};

